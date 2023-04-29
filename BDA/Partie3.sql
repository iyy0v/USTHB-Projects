
-------------------- TYPES --------------------
-- Ville --
CREATE OR REPLACE TYPE tVille AS OBJECT (
    ville VARCHAR2(50),
    MEMBER FUNCTION F_SURFACE_MOYENNE_GYM RETURN NUMERIC
);
/
-- Gymnase --
CREATE OR REPLACE TYPE tGymnase AS OBJECT (
    idGymnase INT,
    nomGymnase VARCHAR2(50),
    adresse VARCHAR2(80),
    surface INT
);
/
-- Sportif --
CREATE OR REPLACE TYPE tSportif AS OBJECT (
    idSportif INT,
    nom VARCHAR2(50),
    prenom VARCHAR2(50),
    sexe CHAR(1),
    age INT,
    IdConseiller INT,
    MEMBER FUNCTION F_SPORTIF_ENTRAINER_SPORT RETURN NUMERIC
);
/
-- Sport --
CREATE OR REPLACE TYPE tSport AS OBJECT (
    idSport INT,
    libelle VARCHAR2(50),
    MEMBER FUNCTION F_NBR_GYMNASE_SPORT RETURN NUMERIC
);
/
-- Seance --
CREATE OR REPLACE TYPE tSeance AS OBJECT (
    IdGymSeance INT,
    IdSportSeance INT,
    IdSportifSeance INT,
    jour VARCHAR2(10),
    horaire FLOAT,
    duree INT
);
/
-- Jouer --
CREATE OR REPLACE TYPE tJouer AS OBJECT(
    IdSportifJouer INT,
    IdSportJouer INT
);
/
-- Entrainer --
CREATE OR REPLACE TYPE tEntrainer AS OBJECT (
    IdSportifEntrainer INT,
    IdSportEntrainer INT
);
/
-- Arbitrer --
CREATE OR REPLACE TYPE tArbitrer AS OBJECT (
    IdSportifArbitrer INT,
    IdSportArbitrer INT
);
/



CREATE OR REPLACE TYPE t_set_ref_gymnase AS TABLE OF REF tGymnase ;
/
CREATE OR REPLACE TYPE t_set_ref_sportif AS TABLE OF REF tSportif;
/
CREATE OR REPLACE TYPE t_set_ref_seance AS TABLE OF REF tSeance ;
/
CREATE OR REPLACE TYPE t_set_ref_jouer AS TABLE OF REF tJouer ;
/
CREATE OR REPLACE TYPE t_set_ref_entrainer AS TABLE OF REF tEntrainer ;
/
CREATE OR REPLACE TYPE t_set_ref_arbitrer AS TABLE OF REF tArbitrer ;
/



ALTER TYPE tVille ADD ATTRIBUTE gymnases_ville t_set_ref_gymnase CASCADE;
ALTER TYPE tGymnase ADD ATTRIBUTE villeGym REF tVille CASCADE ;
ALTER TYPE tSport ADD ATTRIBUTE seances_sport t_set_ref_seance CASCADE;
ALTER TYPE tSportif ADD ATTRIBUTE est_conseille REF tSportif CASCADE ;
ALTER TYPE tSportif ADD ATTRIBUTE a_conseille t_set_ref_sportif CASCADE;
ALTER TYPE tSportif ADD ATTRIBUTE a_jouer t_set_ref_jouer CASCADE;
ALTER TYPE tSportif ADD ATTRIBUTE a_entrainer t_set_ref_entrainer CASCADE;
ALTER TYPE tSportif ADD ATTRIBUTE a_arbitrer t_set_ref_arbitrer CASCADE;
ALTER TYPE tSeance ADD ATTRIBUTE gymnase_seance REF tGymnase CASCADE;
ALTER TYPE tSeance ADD ATTRIBUTE sport_seance REF tSport CASCADE;
ALTER TYPE tSeance ADD ATTRIBUTE sportif_seance REF tSportif CASCADE;
ALTER TYPE tJouer ADD ATTRIBUTE jouer_sportif REF tSportif CASCADE ;
ALTER TYPE tJouer ADD ATTRIBUTE jouer_sport REF tSport CASCADE ;
ALTER TYPE tEntrainer ADD ATTRIBUTE entrainer_sportif REF tSportif CASCADE;
ALTER TYPE tEntrainer ADD ATTRIBUTE entrainer_sport REF tSport CASCADE ;
ALTER TYPE tArbitrer ADD ATTRIBUTE arbitrer_sportif REF tSportif CASCADE;
ALTER TYPE tArbitrer ADD ATTRIBUTE arbitrer_sport REF tSport CASCADE ;





-------------------- TABLES --------------------

-- Ville --
CREATE TABLE Villes OF tVille (
    PRIMARY KEY(ville)
)
NESTED TABLE gymnases_ville STORE AS gymnases_ville;

-- Gymnase --
CREATE TABLE Gymnases OF tGymnase (
    PRIMARY KEY(IdGymnase)
);

-- Sportif --
CREATE TABLE Sportifs OF tSportif (
    PRIMARY KEY(IdSportif),
    FOREIGN KEY(IdConseiller) REFERENCES Sportifs,
    CHECK(UPPER(sexe) IN ('M','F'))
)
NESTED TABLE a_conseille STORE AS a_conseille
NESTED TABLE a_jouer STORE AS a_jouer
NESTED TABLE a_entrainer STORE AS a_entrainer
NESTED TABLE a_arbitrer STORE AS a_arbitrer;

-- Sport --
CREATE TABLE Sports OF tSport (
    PRIMARY KEY(IdSport)
)
NESTED TABLE seances_sport STORE AS seances_sport;

-- Seance --
CREATE TABLE Seances OF tSeance (
    PRIMARY KEY(IdGymSeance,IdSportSeance,IdSportifSeance,jour,horaire), 
    FOREIGN KEY(IdGymSeance) REFERENCES Gymnases,
    FOREIGN KEY(IdSportSeance) REFERENCES Sports,
    FOREIGN KEY(IdSportifSeance) REFERENCES Sportifs,
    CHECK(LOWER(jour) IN ('dimanche','lundi','mardi','mercredi','jeudi','vendredi','samedi'))
);

-- Jouer --
CREATE TABLE Jouer OF tJouer (
    PRIMARY KEY(IdSportifJouer,IdSportJouer),
    FOREIGN KEY(IdSportifJouer) REFERENCES Sportifs,
    FOREIGN KEY(IdSportJouer) REFERENCES Sports
);

-- Entrainer --
CREATE TABLE Entrainer OF tEntrainer (
    PRIMARY KEY(IdSportifEntrainer,IdSportEntrainer),
    FOREIGN KEY(IdSportifEntrainer) REFERENCES Sportifs,
    FOREIGN KEY(IdSportEntrainer) REFERENCES Sports
);

-- Arbitrer --
CREATE TABLE Arbitrer OF tArbitrer (
    PRIMARY KEY(IdSportifArbitrer,IdSportArbitrer),
    FOREIGN KEY(IdSportifArbitrer) REFERENCES Sportifs,
    FOREIGN KEY(IdSportArbitrer) REFERENCES Sports
);




------------------------ METHODS -----------------------

CREATE OR REPLACE TYPE BODY tSportif AS 
    MEMBER FUNCTION F_SPORTIF_ENTRAINER_SPORT RETURN NUMERIC IS 
        NBR_SPORTS NUMBER;
    BEGIN
        SELECT COUNT(deref(COLUMN_VALUE)) INTO NBR_SPORTS
        FROM TABLE(SELECT a_entrainer FROM Sportifs WHERE IdSportif = SELF.IdSportif);
        RETURN NBR_SPORTS;
    END;
END;
/

CREATE OR REPLACE TYPE BODY tSport AS 
    MEMBER FUNCTION F_NBR_GYMNASE_SPORT RETURN NUMERIC IS 
        NBR_GYMS NUMBER;
    BEGIN
        SELECT COUNT(deref(COLUMN_VALUE)) INTO NBR_GYMS
        FROM TABLE(SELECT seances_sport FROM Sports WHERE IdSport = SELF.IdSport);
        RETURN NBR_GYMS;
    END;
END;
/

CREATE OR REPLACE TYPE BODY tVille AS 
    MEMBER FUNCTION F_SURFACE_MOYENNE_GYM RETURN NUMERIC IS 
        SURFACE_MOY NUMBER;
    BEGIN
        SELECT SUM(g.surface)/COUNT(g.IdGymnase) INTO SURFACE_MOY
        FROM Gymnases g 
        WHERE DEREF(g.villeGym) = SELF;
        RETURN SURFACE_MOY;
    END;
END;
/




