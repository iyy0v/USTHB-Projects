------------------------------------------------------------------
--------------------------- PARTIE 1 -----------------------------
------------------------------------------------------------------

CREATE MATERIALIZED VIEW VM1
BUILD IMMEDIATE
REFRESH COMPLETE ON DEMAND
ENABLE QUERY REWRITE
AS SELECT CodeRep, DateRep FROM Reparation
WHERE to_char(DateRep, 'YYYY') = '2022'
AND to_char(DateRep, 'MM') = '6';

------------------------------------------------------------------

CREATE MATERIALIZED VIEW LOG ON Reparation;

CREATE MATERIALIZED VIEW VM2
BUILD IMMEDIATE
REFRESH FAST ON DEMAND
ENABLE QUERY REWRITE
AS SELECT CodeRep, DateRep FROM Reparation
WHERE to_char(DateRep, 'YYYY') = '2022'
AND to_char(DateRep, 'MM') = '6';


------------------------------------------------------------------

-- Ajout --
INSERT INTO Reparation VALUES (1600221,date'2001-6-2',20,2,20,2,2,2);

BEGIN
  DBMS_MVIEW.REFRESH('VM1');
END;
/

BEGIN
  DBMS_MVIEW.REFRESH('VM2');
END;
/

-- Modification --
UPDATE Reparation SET CoutRep=2001.40
WHERE CodeRep=1600220;

BEGIN
  DBMS_MVIEW.REFRESH('VM1');
END;
/

BEGIN
  DBMS_MVIEW.REFRESH('VM2');
END;
/

-- Suppression --
DELETE FROM Reparation WHERE CodeRep=1600221;

BEGIN
  DBMS_MVIEW.REFRESH('VM1');
END;
/

BEGIN
  DBMS_MVIEW.REFRESH('VM2');
END;
/

------------------------------------------------------------------

INSERT INTO Reparation VALUES (1600221,date'2001-6-2',20,2,20,2,2,2);

BEGIN
  DBMS_MVIEW.REFRESH('VM2');
END;
/

SELECT * FROM MLOG$_Reparation;

BEGIN
  DBMS_MVIEW.REFRESH('VM2');
END;
/

------------------------------------------------------------------

CREATE MATERIALIZED VIEW VM3
BUILD DEFERRED
REFRESH COMPLETE ON DEMAND
ENABLE QUERY REWRITE
AS SELECT CodeRep, DateRep, CoutRep, Garantie, DureRep 
FROM Reparation, Panne
WHERE Panne.CodePanne = 5;

------------------------------------------------------------------

BEGIN
  DBMS_MVIEW.REFRESH('VM3');
END;
/

------------------------------------------------------------------

CREATE MATERIALIZED VIEW VM4
BUILD IMMEDIATE
REFRESH COMPLETE ON DEMAND
ENABLE QUERY REWRITE
AS SELECT TO_CHAR(DateRep, 'YYYY') AS AnneRepartion,
    TO_CHAR(DateRep, 'MM') AS MoisRepartion,
    COUNT(*) AS NBRepartion
FROM Reparation
GROUP BY TO_CHAR(DateRep, 'YYYY'), TO_CHAR(DateRep, 'MM');

------------------------------------------------------------------

CREATE MATERIALIZED VIEW VM3
BUILD DEFERRED
REFRESH FAST ON DEMAND
ENABLE QUERY REWRITE
AS SELECT CodeRep, DateRep, CoutRep, Garantie, DureRep 
FROM Reparation, Panne
WHERE Panne.CodePanne = 5;


CREATE MATERIALIZED VIEW VM4
BUILD IMMEDIATE
REFRESH FAST ON DEMAND
ENABLE QUERY REWRITE
AS SELECT TO_CHAR(DateRep, 'YYYY') AS AnneRepartion,
    TO_CHAR(DateRep, 'MM') AS MoisRepartion,
    COUNT(*) AS NBRepartion
FROM Reparation
GROUP BY TO_CHAR(DateRep, 'YYYY'), TO_CHAR(DateRep, 'MM');


CREATE MATERIALIZED VIEW LOG ON Reparation WITH PRIMARY KEY, rowid(dateRep) INCLUDING NEW VALUES;
	
CREATE MATERIALIZED VIEW LOG ON Panne WITH rowid(CodePanne, CodeTypePanne) INCLUDING NEW VALUES;

------------------------------------------------------------------
--------------------------- PARTIE 2 -----------------------------
------------------------------------------------------------------

SET AUTOTRACE ON EXPLAIN;
SET TIMING ON;

------------------------------------------------------------------

SELECT R.CodeRep, R.DateRep, E.CodeEmp, E.NomEmp
FROM Reparation R, Employe E, Panne P, NiveauQualification N
WHERE  P.CodeTypePanne = 5 AND R.CodePanne = P.CodePanne AND R.CodeEmp = E.CodeEmp
AND N.NomQualif = 'senior' AND N.CodeQualif = E.CodeQualif;

------------------------------------------------------------------

CREATE MATERIALIZED VIEW VMTW
BUILD IMMEDIATE
REFRESH COMPLETE ON DEMAND
ENABLE QUERY REWRITE
AS SELECT R.CodeRep, R.DateRep, E.CodeEmp, E.NomEmp
FROM Reparation R, Employe E, Panne P, NiveauQualification N
WHERE  P.CodeTypePanne = 5 AND R.CodePanne = P.CodePanne AND R.CodeEmp = E.CodeEmp
AND N.NomQualif = 'senior' AND N.CodeQualif = E.CodeQualif;

------------------------------------------------------------------

SELECT R.CodeRep, R.DateRep, E.CodeEmp, E.NomEmp
FROM Reparation R, Employe E, Panne P, NiveauQualification N
WHERE  P.CodeTypePanne = 5 AND R.CodePanne = P.CodePanne AND R.CodeEmp = E.CodeEmp
AND N.NomQualif = 'senior' AND N.CodeQualif = E.CodeQualif;

------------------------------------------------------------------

SELECT EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP), COUNT(*)
FROM REPARATION GROUP BY EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP)
ORDER BY EXTRACT(YEAR FROM DATEREP), EXTRACT(MONTH FROM DATEREP);

------------------------------------------------------------------

CREATE MATERIALIZED VIEW VMNBRep
BUILD IMMEDIATE
REFRESH COMPLETE ON DEMAND
ENABLE QUERY REWRITE
AS SELECT EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP), COUNT(*)
FROM REPARATION GROUP BY EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP)
ORDER BY EXTRACT(YEAR FROM DATEREP), EXTRACT(MONTH FROM DATEREP);

------------------------------------------------------------------

SELECT EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP), COUNT(*)
FROM REPARATION GROUP BY EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP)
ORDER BY EXTRACT(YEAR FROM DATEREP), EXTRACT(MONTH FROM DATEREP);

------------------------------------------------------------------

DECLARE
    v_CODEREP NUMBER;
    v_DATEREP DATE;
    v_COUTREP NUMBER;
    v_GARANTIE NUMBER;
    v_DUREREP NUMBER;
    v_NUMSERIE NUMBER;
    v_CODEPANNE NUMBER;
    v_CODEEMP NUMBER;
BEGIN
    FOR v_CODEREP IN 1600222..2400332 LOOP
        v_DATEREP := TO_DATE('2021-01-01', 'YYYY-MM-DD') +
                          TRUNC(DBMS_RANDOM.VALUE(0, TO_DATE('2024-01-01', 'YYYY-MM-DD') - TO_DATE('2021-01-01', 'YYYY-MM-DD')));

        v_COUTREP := FLOOR(DBMS_RANDOM.VALUE(1, 10000.9));
        v_GARANTIE := FLOOR(DBMS_RANDOM.VALUE(1, 2.9));
        v_DUREREP := FLOOR(DBMS_RANDOM.VALUE(1, 24.9));

        v_NUMSERIE := FLOOR(DBMS_RANDOM.VALUE(1, 180255.9));
        v_CODEPANNE:= FLOOR(DBMS_RANDOM.VALUE(1, 40552.9));
        v_CODEEMP := FLOOR(DBMS_RANDOM.VALUE(1, 36.9));
        INSERT INTO Reparation (CODEREP, DATEREP,COUTREP,GARANTIE,DUREREP,NUMSERIE,CODEPANNE,CODEEMP) VALUES (v_CODEREP, v_DATEREP,v_COUTREP,v_GARANTIE,v_DUREREP,v_NUMSERIE,v_CODEPANNE,v_CODEEMP);
    END LOOP;
    COMMIT;
END;
/

BEGIN
  DBMS_MVIEW.REFRESH('VMNBRep');
END;
/

SELECT EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP), COUNT(*)
FROM REPARATION GROUP BY EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP)
ORDER BY EXTRACT(YEAR FROM DATEREP), EXTRACT(MONTH FROM DATEREP);

DROP MATERIALIZED VIEW VMNBRep;

SELECT EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP), COUNT(*)
FROM REPARATION GROUP BY EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP)
ORDER BY EXTRACT(YEAR FROM DATEREP), EXTRACT(MONTH FROM DATEREP);



DECLARE
    v_CODEREP NUMBER;
    v_DATEREP DATE;
    v_COUTREP NUMBER;
    v_GARANTIE NUMBER;
    v_DUREREP NUMBER;
    v_NUMSERIE NUMBER;
    v_CODEPANNE NUMBER;
    v_CODEEMP NUMBER;
BEGIN
    FOR v_CODEREP IN 2400333..3200443 LOOP
        v_DATEREP := TO_DATE('2021-01-01', 'YYYY-MM-DD') +
                          TRUNC(DBMS_RANDOM.VALUE(0, TO_DATE('2024-01-01', 'YYYY-MM-DD') - TO_DATE('2021-01-01', 'YYYY-MM-DD')));

        v_COUTREP := FLOOR(DBMS_RANDOM.VALUE(1, 10000.9));
        v_GARANTIE := FLOOR(DBMS_RANDOM.VALUE(1, 2.9));
        v_DUREREP := FLOOR(DBMS_RANDOM.VALUE(1, 24.9));

        v_NUMSERIE := FLOOR(DBMS_RANDOM.VALUE(1, 180255.9));
        v_CODEPANNE:= FLOOR(DBMS_RANDOM.VALUE(1, 40552.9));
        v_CODEEMP := FLOOR(DBMS_RANDOM.VALUE(1, 36.9));
        INSERT INTO Reparation (CODEREP, DATEREP,COUTREP,GARANTIE,DUREREP,NUMSERIE,CODEPANNE,CODEEMP) VALUES (v_CODEREP, v_DATEREP,v_COUTREP,v_GARANTIE,v_DUREREP,v_NUMSERIE,v_CODEPANNE,v_CODEEMP);
    END LOOP;
    COMMIT;
END;
/

SELECT EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP), COUNT(*)
FROM REPARATION GROUP BY EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP)
ORDER BY EXTRACT(YEAR FROM DATEREP), EXTRACT(MONTH FROM DATEREP);

CREATE MATERIALIZED VIEW VMNBRep
BUILD IMMEDIATE
REFRESH COMPLETE ON DEMAND
ENABLE QUERY REWRITE
AS SELECT EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP), COUNT(*)
FROM REPARATION GROUP BY EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP)
ORDER BY EXTRACT(YEAR FROM DATEREP), EXTRACT(MONTH FROM DATEREP);

SELECT EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP), COUNT(*)
FROM REPARATION GROUP BY EXTRACT(MONTH FROM DATEREP), EXTRACT(YEAR FROM DATEREP)
ORDER BY EXTRACT(YEAR FROM DATEREP), EXTRACT(MONTH FROM DATEREP);