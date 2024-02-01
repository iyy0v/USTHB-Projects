------------------ New User -------------------
ALTER SESSION SET "_ORACLE_SCRIPT" = TRUE;
CREATE USER master2 IDENTIFIED BY master;
GRANT ALL PRIVILEGES TO master2;

------------------ Creation -------------------
CREATE TABLE DEmploye (
    CodeEmp NUMBER(8),
    NomEmp VARCHAR2(20),
    CodeNQualif NUMBER(8),
    NomNQualif VARCHAR2(20),
    CONSTRAINT pk_demploye PRIMARY KEY(CodeEmp)
);

CREATE TABLE DProduit (
    NumSerie NUMBER(8),
    DateFab date,
    CodeCl NUMBER(8),
    NomCl VARCHAR2(20),
    SexeCl VARCHAR2(10),
    CodeModele NUMBER(8),
    Designation VARCHAR2(20),
    CodeTypeProduit NUMBER(8),
    TypeProduit VARCHAR2(20),
    CodePV NUMBER(8),
    NomPV VARCHAR2(20),
    CodeVille NUMBER(8),
    NomVille VARCHAR2(20),
    CONSTRAINT pk_dproduit PRIMARY KEY(NumSerie)
);

CREATE TABLE DTypePanne (
    CodeTP NUMBER(8),
    TP VARCHAR2(20),
    CONSTRAINT pk_dtypepanne PRIMARY KEY(CodeTP)
);

CREATE TABLE DTemps (
    CodeTemps NUMBER(8),
    Jour VARCHAR2(10),
    LibJour VARCHAR2(15),
    Mois VARCHAR2(7),
    LibMois VARCHAR2(15),
    Annee VARCHAR2(4),
    CONSTRAINT pk_dtemps PRIMARY KEY(CodeTemps)
);

CREATE TABLE FReparation (
    CodeEmp NUMBER(8),
    NumSerie NUMBER(8),
    CodeTP NUMBER(8),
    CodeTemps NUMBER(8),
    NBReparations NUMBER(8),
    NBPannes NUMBER(8),
    Cout NUMBER(8),
    CONSTRAINT pk_freparation PRIMARY KEY(
        CodeEmp,
        NumSerie,
        CodeTP,
        CodeTemps
    ),
    CONSTRAINT fk_codeemp FOREIGN KEY(CodeEmp)
    REFERENCES DEmploye(CodeEmp),
    CONSTRAINT fk_numserie FOREIGN KEY(NumSerie)
    REFERENCES DProduit(NumSerie),
    CONSTRAINT fk_codetp FOREIGN KEY(CodeTP)
    REFERENCES DTypePanne(CodeTP),
    CONSTRAINT fk_codetemps FOREIGN KEY(CodeTemps)
    REFERENCES DTemps(CodeTemps)
);

-------------------- Remplissage ----------------------
BEGIN
    FOR i IN (
        SELECT e.CodeEmp, e.NomEmp, e.CodeQualif, n.NomQualif
        FROM master.Employe e, master.NiveauQualification n
        WHERE e.CodeQualif = n.CodeQualif
    ) LOOP
        INSERT INTO DEmploye VALUES (
            i.CodeEmp,
            i.NomEmp,
            i.CodeQualif,
            i.NomQualif
        );
    END LOOP;
    COMMIT;
END;
/


BEGIN
    FOR i IN (
        SELECT p.NumSerie, p.DateFabrication, p.CodeCl, p.CodeMod, c.NomCL, c.SexeCl, m.Designation, m.CodeTypeProd, t.TypeProduit, p.CodePointVente, pv.NomPointVente, v.CodeVille, v.NomVille
        FROM master.Produit p,
             master.Client c,
             master.Modele m,
             master.TypeProduit t,
             master.Point_de_vente pv,
             master.ville v
        WHERE p.CodeCl = c.CodeCl
        AND p.CodeMod = m.CodeMod
        AND m.CodeTypeProd = t.CodeTypeProd
        AND p.CodePointVente = pv.CodePointVente
        AND pv.CodeVille = v.CodeVille
    ) LOOP
        INSERT INTO DProduit VALUES (
            i.NumSerie,
            i.DateFabrication,
            i.CodeCl,
            i.NomCl,
            i.SexeCl,
            i.CodeMod,
            i.Designation,
            i.CodeTypeProd,
            i.TypeProduit,
            i.CodePointVente,
            i.NomPointVente,
            i.CodeVille,
            i.NomVille
        );
    END LOOP;
    COMMIT;
END;
/


BEGIN
    FOR i IN (
        SELECT CodeTypePanne, NomTypePanne
        FROM master.TypePanne
    ) LOOP
        INSERT INTO DTypePanne VALUES (
            i.CodeTypePanne,
            i.NomTypePanne
        );
    END LOOP;
    COMMIT;
END;
/


CREATE SEQUENCE seq 
    MINVALUE 1 
    MAXVALUE 100000 
    START WITH 1
    INCREMENT BY 1
;


BEGIN
    FOR i IN (
        SELECT distinct 
            to_char(DateRep, 'DD/MM/YYYY') as jour,
            to_char(DateRep, 'DAY') as libjour,
            to_char(DateRep, 'MM/YYYY') as mois,
            to_char(DateRep, 'MONTH') as libmois,
            to_char(DateRep, 'YYYY') as annee
        FROM master.reparation    
    ) LOOP
        INSERT INTO DTemps VALUES (
            seq.nextval,
            i.jour,
            i.libjour,
            i.mois,
            i.libmois,
            i.annee
        );
    END LOOP;
    COMMIT;
END;
/


BEGIN
  FOR i IN (
    SELECT  r.CodeEmp,
            r.NumSerie,
            p.CodeTypePanne,
            dt.CodeTemps,
            COUNT(r.CodeRep) AS NBRepartion,
            COUNT(r.CodePanne) AS NBPannes,
            SUM(r.CoutRep) AS Cout
    FROM master.Reparation r,
         master.Panne p,
         DTemps dt
    WHERE p.CodePanne = r.CodePanne
      AND TO_CHAR(r.DateRep, 'DD/MM/YYYY') = dt.Jour
    GROUP by r.CodeEmp,
            r.NumSerie,
            p.CodeTypePanne,
            dt.CodeTemps
  ) LOOP
    INSERT INTO FReparation VALUES(
        i.CodeEmp,
        i.NumSerie,
        i.CodeTypePanne,
        i.CodeTemps,
        i.NBRepartion,
        i.NBPannes,
        i.Cout
    );
  END LOOP
  COMMIT;
END;
/