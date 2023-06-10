
--Affichage des methods
SELECT s.IdSportif, s.F_SPORTIF_ENTRAINER_SPORT() FROM Sportifs s ORDER BY IdSportif;

SELECT s.IdSport, s.F_NBR_GYMNASE_SPORT() FROM Sports s ORDER BY IdSport;

SELECT v.ville, v.F_SURFACE_MOYENNE_GYM() FROM Villes v ORDER BY ville;

