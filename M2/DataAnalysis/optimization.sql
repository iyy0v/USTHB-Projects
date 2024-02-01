---------- R1 ---------- 
set timing on;
set autotrace on;

SELECT SUM(r.NBReparations) AS NombreReparations
FROM FReparation r, DEmploye e
WHERE r.CodeEmp = e.CodeEmp
  AND e.CodeNQualif = 2;


alter system flush shared_pool;
alter system flush buffer_cache;


---------- creation de VMRQ ---------- 
CREATE MATERIALIZED VIEW VMRQ 
BUILD IMMEDIATE
REFRESH COMPLETE
ON DEMAND
ENABLE QUERY REWRITE
AS
SELECT SUM(r.NBReparations) AS NombreReparations
FROM DEmploye e, FReparation r
WHERE e.CodeEmp = r.CodeEmp
GROUP BY e.CodeNQualif;


----------- re-execution de R1 ----------- 
SELECT SUM(r.NBReparations) AS NombreReparations
FROM FReparation r, DEmploye e
WHERE r.CodeEmp = e.CodeEmp
  AND e.CodeNQualif = 2;


---------- creation de VMNBMensuel ---------- 
CREATE MATERIALIZED VIEW VMNBMensuel 
BUILD IMMEDIATE
REFRESH COMPLETE
ON DEMAND
ENABLE QUERY REWRITE
AS
SELECT dt.Mois, SUM(r.NBReparations) AS NBReparations
FROM DTemps dt, FReparation r
WHERE dt.CodeTemps = r.CodeTemps
GROUP BY dt.Mois;


---------- R2 ---------- 
SELECT dt.annee, SUM(r.NBReparations) AS NBAnnuels
FROM FReparation r, DTemps dt
WHERE  r.CodeTemps = dt.CodeTemps
GROUP BY dt.annee;


--------- dimensions --------- 
CREATE DIMENSION DEMPLOYE_DIMENSION
LEVEL CODEEMP_LEVEL IS DEMPLOYE.CODEEMP
LEVEL NQUALIF_LEVEL IS DEMPLOYE.NOMNQUALIF
;

CREATE DIMENSION DPRODUIT_DIMENSION
LEVEL NUMSERIE_LEVEL IS DPRODUIT.NUMSERIE
LEVEL CODECL_LEVEL IS DPRODUIT.CODECL
LEVEL MODELE_LEVEL IS DPRODUIT.CODEMODELE
LEVEL CODETP_LEVEL IS DPRODUIT.CODETYPEPRODUIT
LEVEL CODEPV_LEVEL IS DPRODUIT.CODEPV
;

CREATE DIMENSION DTYPEPANNE_DIMENSION
LEVEL CODETP_LEVEL is DTYPEPANNE.CODETP
;

CREATE DIMENSION DTEMPS_DIMENSION
LEVEL CODETEMPS_LEVEL IS DTEMPS.CODETEMPS
;


--------- activer query rewrite --------- 
ALTER SESSION SET query_rewrite_integrity=trusted;


-------- Reexecution de R2 -------- 
SELECT dt.annee, SUM(r.NBReparations) AS NBAnnuels
FROM FReparation r, DTemps dt
WHERE  r.CodeTemps = dt.CodeTemps
GROUP BY dt.annee;


-------- creation de VMPV -------- 
CREATE MATERIALIZED VIEW VMPV 
BUILD IMMEDIATE
REFRESH COMPLETE
ON DEMAND
ENABLE QUERY REWRITE
AS
SELECT DISTINCT p.CodePV, p.NomPV, COUNT(r.NBReparations) AS NBReparations
FROM DProduit p, Freparation r
WHERE p.NumSerie = r.NumSerie
GROUP BY p.CodePV, p.NomPV
ORDER BY p.CodePV
;


-------- R3 -------- 
SELECT DISTINCT p.CodePV, p.NomPV, COUNT(r.NBReparations) AS NBReparations
FROM DProduit p, Freparation r
WHERE p.NumSerie = r.NumSerie
GROUP BY p.CodePV, p.NomPV
ORDER BY p.CodePV
;


-------- SUPRESSION DE DPRODUIT_DIMENSION -------- 
DROP DIMENSION DPRODUIT_DIMENSION;


-------- Reexecution de R3 --------
SELECT DISTINCT p.CodePV, p.NomPV, COUNT(r.NBReparations) AS NBReparations
FROM DProduit p, Freparation r
WHERE p.NumSerie = r.NumSerie
GROUP BY p.CodePV, p.NomPV
ORDER BY p.CodePV
;












----------------- PARTIE 2 -------------------
set timing on;
set autotrace on;

---------------- R1 ---------------- 

SELECT SUM(r.NBReparations) 
FROM FReparation r, DEmploye e
WHERE r.CodeEmp = e.CodeEmp
 AND e.NomNQualif = 'expert';



---------------- creation de l'indexe b-arbre ---------------- 

CREATE INDEX NOMNQUALIF_INDEX ON DEMPLOYE(NOMNQUALIF);


---------------- R1 ---------------- 

ALTER SYSTEM FLUSH SHARED_POOL;
ALTER SYSTEM FLUSH BUFFER_CACHE;


---------------- reexecution de R1 ---------------- 

SELECT /*+ index(e NOMNQUALIF_INDEX) */ COUNT(r.NBReparations) 
FROM FReparation r, DEmploye e
WHERE r.CodeEmp = e.CodeEmp
AND e.NomNQualif = 'expert';


---------------- creation de l'indexe bitmap ---------------- 

DROP INDEX NOMNQUALIF_INDEX;

CREATE BITMAP INDEX NOMNQUALIF_BITMAP_INDEX ON DEmploye(NomNQualif);


---------------- supression de l'indexe ---------------- 

DROP INDEX NOMNQUALIF_BITMAP_INDEX;


---------------- R2 ---------------- 

SELECT SUM(r.NBReparations)
FROM FReparation r, DProduit p
WHERE r.NumSerie = p.NumSerie
 AND p.TypeProduit = 'Televiseur';


---------------- creation de l'indexe bitmap de la jointure ---------------- 

CREATE BITMAP INDEX TYPEPRODUIT_BITMAP_INDEX 
ON FReparation(DProduit.TypeProduit)
FROM FReparation, DProduit
WHERE FReparation.NumSerie = DProduit.NumSerie;


---------------- reexecution de R2 ---------------- 

SELECT SUM(r.NBReparations)
FROM FReparation r, DProduit p
WHERE r.NumSerie = p.NumSerie
AND p.TypeProduit = 'Televiseur';


---------------- creation de FReparation2 ---------------- 

CREATE TABLE FReparation2 (
    CodeEmp NUMBER(8),
    NumSerie NUMBER(8),
    CodeTP NUMBER(8),
    CodeTemps NUMBER(8),
    NBReparations NUMBER(8),
    NBPannes NUMBER(8),
    Cout NUMBER(10),
    CONSTRAINT pk_transaction2 PRIMARY KEY(
        CodeEmp,
        NumSerie,
        CodeTP,
        CodeTemps
    ),
    CONSTRAINT fk_codeemp_t2 FOREIGN KEY(CodeEmp)
    REFERENCES DEmploye(CodeEmp),
    CONSTRAINT fk_numserie_t2 FOREIGN KEY(NumSerie)
    REFERENCES DProduit(NumSerie),
    CONSTRAINT fk_codetp_t2 FOREIGN KEY(CodeTP)
    REFERENCES DTypePanne(CodeTP),
    CONSTRAINT fk_codetemps_t2 FOREIGN KEY(CodeTemps)
    REFERENCES DTemps(CodeTemps)
)
PARTITION BY RANGE (CodeEmp)
(
 PARTITION P1 VALUES LESS THAN (9),
 PARTITION P2 VALUES LESS THAN (19),
 PARTITION P3 VALUES LESS THAN (27),
 PARTITION P4 VALUES LESS THAN (37)
);


---------------- remplissage de Freparation2 ---------------- 

INSERT INTO FReparation2
SELECT * FROM FReparation;


---------------- R4 ---------------- 

SELECT COUNT(NBReparations) 
FROM FReparation
WHERE CodeEmp = 14;


---------------- R4 avec Freparation2 ---------------- 

SELECT COUNT(NBReparations) 
FROM FReparation2
WHERE CodeEmp = 14;
