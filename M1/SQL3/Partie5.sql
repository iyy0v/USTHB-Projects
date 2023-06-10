SELECT IdSportif, Nom, Prenom FROM Sportifs 
WHERE age BETWEEN 20 AND 30;
    -- other variation --
SELECT IdSportif, Nom, Prenom FROM Sportifs 
WHERE age>=20 AND age<=30;


SELECT v.ville, v.F_SURFACE_MOYENNE_GYM() FROM Villes v;


SELECT IdSportif, Nom, Prenom FROM Sportifs WHERE a_conseille IS NOT EMPTY;
    -- other variation --
SELECT DISTINCT DEREF(est_conseille).IdSportif, DEREF(est_conseille).Nom, DEREF(est_conseille).Prenom 
FROM Sportifs 
WHERE IdConseiller IS NOT NULL;


SELECT DISTINCT IdSportifEntrainer, DEREF(entrainer_sportif).Nom, DEREF(entrainer_sportif).Prenom
FROM Entrainer 
WHERE DEREF(entrainer_sport).libelle='Hand ball' OR DEREF(entrainer_sport).libelle='Basket ball';


SELECT IdSportif, Nom, Prenom, Age FROM Sportifs
WHERE Age = (SELECT MIN(Age) FROM Sportifs);
