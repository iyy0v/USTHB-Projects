SET LINESIZE 150;
SET TIMING ON;
SET AUTOTRACE ON EXPLAIN;

------------------ 1 ------------------ 
SELECT emp.NomNQualif, pro.NomVille, tmp.Annee, COUNT(NBReparations) AS NBRreparations
FROM FReparation rep, Dproduit pro, DTemps tmp, DEmploye emp
WHERE rep.CodeTemps = tmp.CodeTemps 
AND rep.Numserie = pro.Numserie
AND rep.CodeEmp = emp.CodeEmp
GROUP BY tmp.Annee, pro.NomVille, emp.NomNQualif
ORDER BY tmp.Annee, pro.NomVille, emp.NomNQualif;


------------------ 2 ------------------ 
SELECT emp.NomNQualif, pro.NomVille, tmp.Annee, COUNT(NBReparations) AS NBRreparations
FROM FReparation rep, Dproduit pro, DTemps tmp, DEmploye emp
WHERE rep.CodeTemps = tmp.CodeTemps 
AND rep.Numserie = pro.Numserie
AND rep.CodeEmp = emp.CodeEmp
GROUP BY ROLLUP(tmp.Annee, pro.NomVille, emp.NomNQualif)
ORDER BY tmp.Annee, pro.NomVille, emp.NomNQualif;


------------------ 3 ------------------ 
SELECT emp.NomNQualif, pro.NomVille, tmp.Annee, COUNT(NBReparations) AS NBRreparations
FROM FReparation rep, Dproduit pro, DTemps tmp, DEmploye emp
WHERE rep.CodeTemps = tmp.CodeTemps 
AND rep.Numserie = pro.Numserie
AND rep.CodeEmp = emp.CodeEmp
GROUP BY CUBE(tmp.Annee, pro.NomVille, emp.NomNQualif)
ORDER BY tmp.Annee, pro.NomVille, emp.NomNQualif;


------------------ 4 ------------------ 
SELECT emp.NomNQualif, pro.NomVille, tmp.Annee, COUNT(NBReparations) AS NBRreparations,
GROUPING(tmp.Annee) AS an,
GROUPING(pro.NomVille) AS av,
GROUPING(emp.NomNQualif) AS nq
FROM FReparation rep, Dproduit pro, DTemps tmp, DEmploye emp
WHERE rep.CodeTemps = tmp.CodeTemps 
AND rep.Numserie = pro.Numserie
AND rep.CodeEmp = emp.CodeEmp
GROUP BY ROLLUP(tmp.Annee, pro.NomVille, emp.NomNQualif)
ORDER BY tmp.Annee, pro.NomVille, emp.NomNQualif;


------------------ 5 ------------------ 
SELECT emp.NomNQualif, pro.NomVille, tmp.Annee, COUNT(NBReparations) AS NBRreparations,
GROUPING_ID(tmp.Annee, pro.NomVille, emp.NomNQualif)
FROM FReparation rep, Dproduit pro, DTemps tmp, DEmploye emp
WHERE rep.CodeTemps = tmp.CodeTemps 
AND rep.Numserie = pro.Numserie
AND rep.CodeEmp = emp.CodeEmp
GROUP BY CUBE(tmp.Annee, pro.NomVille, emp.NomNQualif)
ORDER BY tmp.Annee, pro.NomVille, emp.NomNQualif;


------------------ 6 ------------------ 
SELECT emp.NomNQualif, pro.NomVille, tmp.Annee, COUNT(NBReparations) AS NBRreparations,
RANK() OVER (ORDER BY COUNT(NBReparations) DESC) AS Classement
FROM FReparation rep, Dproduit pro, DTemps tmp, DEmploye emp
WHERE rep.CodeTemps = tmp.CodeTemps 
AND rep.Numserie = pro.Numserie
AND rep.CodeEmp = emp.CodeEmp
GROUP BY tmp.Annee, pro.NomVille, emp.NomNQualif
ORDER BY tmp.Annee, pro.NomVille, emp.NomNQualif;

SELECT emp.NomNQualif, pro.NomVille, tmp.Annee, COUNT(NBReparations) AS NBRreparations,
DENSE_RANK() OVER (ORDER BY COUNT(NBReparations) DESC) AS Classement
FROM FReparation rep, Dproduit pro, DTemps tmp, DEmploye emp
WHERE rep.CodeTemps = tmp.CodeTemps 
AND rep.Numserie = pro.Numserie
AND rep.CodeEmp = emp.CodeEmp
GROUP BY tmp.Annee, pro.NomVille, emp.NomNQualif
ORDER BY tmp.Annee, pro.NomVille, emp.NomNQualif;


------------------ 7 ------------------ 
SELECT tmp.Annee, tmp.mois, SUM(NBReparations) AS Somme , AVG(SUM(NBReparations)) OVER (PARTITION BY tmp.Annee ORDER BY Mois ROWS 2 PRECEDING) AS MoyenneMobile
FROM FReparation rep, DTemps tmp
WHERE rep.CodeTemps = tmp.CodeTemps 
GROUP BY tmp.Annee, tmp.mois
ORDER BY tmp.Annee, tmp.mois;


------------------ 8 ------------------ 
ALTER SYSTEM FLUSH SHARED_POOL;
ALTER SYSTEM FLUSH BUFFER_CACHE;

SELECT SUM(NBReparations) AS Somme, tmp.Annee, pro.NomVille, CUME_DIST() OVER(PARTITION BY tmp.Annee ORDER BY SUM(NBReparations)) AS cum_dist_NBReparation
FROM FReparation rep, DTemps tmp, Dproduit pro
WHERE rep.CodeTemps = tmp.CodeTemps 
AND rep.Numserie = pro.Numserie
GROUP BY tmp.Annee, pro.NomVille
ORDER BY tmp.Annee, pro.NomVille;


------------------ 9 ------------------ 
ALTER SYSTEM FLUSH SHARED_POOL;
ALTER SYSTEM FLUSH BUFFER_CACHE;

SELECT pro.CodeVille, pro.TypeProduit, SUM(NBReparations) AS NBreparation, 
SUM(SUM(NBReparations)) OVER() AS Total, 
RATIO_TO_REPORT(SUM(NBReparations)) OVER() AS Ratio
FROM DProduit pro, FReparation r
WHERE r.Numserie = pro.Numserie
GROUP BY pro.CodeVille, pro.TypeProduit
ORDER BY pro.CodeVille, pro.TypeProduit;


------------------ 10 ------------------ 
SELECT TypeProduit, ville, Somme
FROM(
    SELECT pro.TypeProduit AS TypeProduit, pro.CodeVille AS ville, 
    SUM(NBReparations) as Somme, 
    MAX(SUM(NBReparations)) OVER(PARTITION BY pro.TypeProduit) AS MAX_REP 
    FROM FReparation r, DProduit pro
    WHERE r.Numserie = pro.Numserie
    GROUP BY pro.TypeProduit, pro.CodeVille
    )
WHERE SOMME = MAX_REP;