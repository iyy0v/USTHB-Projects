-- table Villes --
INSERT INTO Villes (ville) VALUES('Alger centre');
INSERT INTO Villes (ville) VALUES('Les sources');
INSERT INTO Villes (ville) VALUES('Belouizdad');
INSERT INTO Villes (ville) VALUES('Sidi Mhamed');
INSERT INTO Villes (ville) VALUES('El Biar');
INSERT INTO Villes (ville) VALUES('El Mouradia');
INSERT INTO Villes (ville) VALUES('Hydra');
INSERT INTO Villes (ville) VALUES('Dely Brahim');
INSERT INTO Villes (ville) VALUES('Kouba');
INSERT INTO Villes (ville) VALUES('Bir Mourad Raïs');
INSERT INTO Villes (ville) VALUES('Birkhadem');
INSERT INTO Villes (ville) VALUES('El Achour');
INSERT INTO Villes (ville) VALUES('Bordj el kiffan');
INSERT INTO Villes (ville) VALUES('Baba hassen');
INSERT INTO Villes (ville) VALUES('Chéraga');
INSERT INTO Villes (ville) VALUES('Alger');
INSERT INTO Villes (ville) VALUES('Hussein Dey');
INSERT INTO Villes (ville) VALUES('Béni Messous');
INSERT INTO Villes (ville) VALUES('Bordj El Bahri');
INSERT INTO Villes (ville) VALUES('Mohammadia');
INSERT INTO Villes (ville) VALUES('El Harrach');
INSERT INTO Villes (ville) VALUES('Saoula');

-- table Gymnases --
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(1,'Five Gym Club','Boulevard Mohamed 5',(SELECT ref(v) FROM villes v WHERE v.ville = 'Alger centre'),200);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(2,'Mina Sport','28 impasse musette les sources',(SELECT REF(v) FROM villes v WHERE v.ville ='Les sources'),450);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(3,'Aït Saada','Belouizdad',(SELECT REF(v) FROM villes v WHERE v.ville ='Belouizdad'),400);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(4,'Bahri Gym','Rue Mohamed Benzineb',(SELECT REF(v) FROM villes v WHERE v.ville ='Sidi Mhamed'),500);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(5,'Ladies First','3 Rue Diar Naama N° 03',(SELECT REF(v) FROM villes v WHERE v.ville ='El Biar'),620);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(6,'C.T.F Club','Rue Sylvain FOURASTIER',(SELECT REF(v) FROM villes v WHERE v.ville = 'El Mouradia'),400);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(7,'Body Fitness Center','Rue Rabah Takdjourt',(SELECT REF(v) FROM villes v WHERE v.ville ='Alger centre'),360);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(8,'Club Hydra Forme','Rue de l''Oasis',(SELECT REF(v) FROM villes v WHERE v.ville = 'Hydra'),420);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(9,'Profitness Dely Brahim','26 Bois des Cars 3', (SELECT REF(v) FROM villes v WHERE v.ville ='Dely Brahim'), 620);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(10,'CLUB SIFAKS','Rue Ben Omar 31', (SELECT REF(v) FROM villes v WHERE v.ville ='Kouba'),400);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(11,'Gym ZAAF Club','19 Ave Merabet Athmane',(SELECT REF(v) FROM villes v WHERE v.ville = 'El Mouradia'), 300);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(12,'GYM power','villa N°2, Chemin Said Hamdine',(SELECT REF(v) FROM villes v WHERE v.ville = 'Bir Mourad Raïs'), 480);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(13,'Icosium sport','Rue ICOSUM', (SELECT REF(v) FROM villes v WHERE v.ville ='Hydra'),200);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(14,'GIGA Fitness','res, Rue Hamoum Tahar', (SELECT REF(v) FROM villes v WHERE v.ville ='Birkhadem'), 500);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(15,'AC Fitness Et Aqua','Lotissement FAHS lot A n 12 parcelle 26', (SELECT REF(v) FROM villes v WHERE v.ville ='Birkhadem'),400);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(16,'MELIA GYM','Résidence les deux bassins Sahraoui local N° 03', (SELECT REF(v) FROM villes v WHERE v.ville ='El Achour'), 600);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(17,'Sam Gym Power','Rue Mahdoud BENKHOUDJA', (SELECT REF(v) FROM villes v WHERE v.ville ='Kouba'), 400);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(18,'AQUAFORTLAND SPA','Bordj el kiffan',(SELECT REF(v) FROM villes v WHERE v.ville ='Bordj el kiffan'),450);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(19,'GoFitness','Lotissement el louz n°264', (SELECT REF(v) FROM villes v WHERE v.ville ='Baba hassen'), 500);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(20,'Best Body Gym','Cité Alioua Fodil', (SELECT REF(v) FROM villes v WHERE v.ville ='Chéraga'), 400);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(21,'Power house gym','Cooperative Amina 02 Lot 15', (SELECT REF(v) FROM villes v WHERE v.ville ='Alger'),400);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(22,'POWER ZONE GYM','Chemin Fernane Hanafi', (SELECT REF(v) FROM villes v WHERE v.ville ='Hussein Dey'), 500);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(23,'World Gym','14 Boulevard Ibrahim Hadjress', (SELECT REF(v) FROM villes v WHERE v.ville ='Béni Messous'),520);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(24,'Moving Club','Bordj El Bahri',(SELECT REF(v) FROM villes v WHERE v.ville ='Bordj El Bahri'),450);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(25,'Tiger gym','Route de Bouchaoui', (SELECT REF(v) FROM villes v WHERE v.ville ='Chéraga'), 620);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(26,'Lion CrossFit','Centre commercial-Mohamadia mall',(SELECT REF(v) FROM villes v WHERE v.ville ='Mohammadia'),600);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(27,'Étoile sportive','Saoula',(SELECT REF(v) FROM villes v WHERE v.ville ='Saoula'),350);
INSERT INTO Gymnases (IdGymnase,NomGymnase,Adresse,VilleGym,Surface) VALUES(28,'Fitness life gym','El Harrach',(SELECT REF(v) FROM villes v WHERE v.ville ='El Harrach'),400);

-- table Sportifs --
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(1,'BOUTAHAR','Abderahim','M',30,NULL);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(2,'BOUROUBI','Anis','M',28,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(3,'BOUZIDI','Amel','F',25,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(4,'LACHEMI','Bouzid','M',32,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(5,'AAKOUB','Linda','F',22,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(6,'ABBAS','Sophia','F',30,3);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(7,'HADJ','Zouhir','M',25,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(8,'HAMADI','Hani','m',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(9,'ABDELMOUMEN','Nadia','F',23,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(10,'ABAD','Abdelhamid','M',23,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(11,'ABAYAHIA','Amine','M',24,6);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(12,'ABBACI','Riad','M',24,8);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(13,'ABBACI','Mohamed','M',22,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(14,'ABDELOUAHAB','Lamia','F',24,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(15,'ABDEMEZIANE','Majid','M',25,3);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(16,'BENOUADAH','Lamine','M',24,8);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(17,'ACHAIBOU','Rachid','M',22,7);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(18,'HOSNI','Leila','F',25,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(19,'ABERKANE','Adel','M',25,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(20,'AZOUG','Racim','M',25,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(21,'BABACI','Mourad','M',22,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(22,'BAKIR','Ayoub','M',25,3);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(23,'BEHADI','Youcef','M',24,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(24,'AMARA','Nassima','F',23,7);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(25,'AROUEL','Lyes','M',23,9);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(26,'BAALI','Leila','F',23,3);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(27,'BADI','Hatem','M',23,7);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(28,'RABAHI','Rabah','M',40,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(29,'ROUSSELI','Lamice','F',22,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(30,'CHIKHI','Nidal','M',24,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(31,'SETIHA','Moustapha','M',22,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(32,'COTERI','Daouad','M',23,3);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(33,'RAMELI','Sami','M',23,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(34,'LEHIRACHE','Oussama','M',24,3);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(35,'TERIKI','Yacine','M',24,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(36,'DJELOUDANE','Zinedine','M',28,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(44,'ADIBOU','Ibrahim','M',28,21);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(37,'LAZARI','Malika','F',25,44);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(38,'MESSOUNI','Ismail','M',24,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(39,'MORELI','Otheman','M',24,8);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(40,'FATAHI','Majid','M',23,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(41,'DELHOUME','Elina','F',22,7);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(42,'BEHADI','Nadir','M',23,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(43,'MATI','Dalia','F',23,6);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(45,'CHALI','Karim','M',25,NULL);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(46,'DOUDOU','Islam','M',24,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(47,'Grine','Célina','F',25,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(48,'HEDDI','Zohra','F',23,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(49,'JADI','Sandra','F',24,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(50,'KALI','Yasser','M',22,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(51,'LAJEL','Fouad','M',24,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(52,'DANDOUR','Rami','M',22,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(53,'DEMMERA','Houcine','M',22,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(54,'ELKABBADJ','Mohammed','M',23,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(55,'FEROLI','Omer','M',23,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(56,'GUERRAOUI','Zohra','F',25,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(57,'BOUACHA','Aziz','M',25,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(58,'GUITENI','Adam','M',23,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(59,'KACI','Samia','F',23,NULL);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(60,'TIZEGHAT','Badis','M',32,3);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(61,'LAZARRI','Jamel','M',27,7);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(62,'BAZOUDI','Jaouad','M',32,3);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(63,'AMANI','Fadi','M',30,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(64,'LANORI','Faiza','F',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(65,'CHAADI','Mourad','M',30,NULL);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(66,'DANDANE','Mohamed','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(67,'FATTIMI','Dalila','F',26,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(68,'REGHI','Jazia','F',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(69,'MARADI','Hadjer','F',25,7);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(70,'BELMADI','Nadji','M',30,9);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(71,'DELAROCHI','Racim','M',30,8);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(72,'MARTALI','Bouzid','M',22,8);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(73,'DALLIMI','Douad','M',30,6);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(74,'OUBACHA','Adel','M',30,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(75,'SAADI','Nihal','F',39,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(76,'HALGATTI','Camelia','F',30,21);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(77,'HIDDOUCI','Farid','M',30,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(78,'CHAOUAH','Jamel','M',30,NULL);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(79,'HANDI','Jaouad','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(80,'HOCHET','Ramezi','M',30,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(81,'DROULLONI','Jaouida','F',30,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(82,'HOULEMI','Lyes','M',40,14);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(83,'LOUATI','Ahmed','M',30,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(84,'SALLADj','Miloud','M',28,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(85,'HAMARI','Anes','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(86,'GALLOTI','Boualem','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(87,'KASBADJI','Fateh','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(88,'JENOURI','Rachid','M',30,8);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(89,'RIHABI','Jamel','M',30,NULL);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(90,'DERARNI','Nadir','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(98,'RIADI','Walid','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(91,'BATERAOUI','Zinedine','M',30,98);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(92,'HADJI','Jamel','M',22,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(93,'CAUCHARDI','Nabil','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(94,'LEROUDI','Moussa','M',36,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(95,'ESTANBOULI','Mazine','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(96,'JANID','Lamine','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(97,'BONHOMMANE','Bassim','M',30,NULL);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(99,'BONETI','Djalal','M',32,NULL);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(100,'LESOIFI','Djamil','M',30,9);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(101,'SWAMI','Esslam','M',30,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(102,'DAOUDI','Adel','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(103,'LAAMOURI','Nasssim','M',30,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(104,'SEHIER','Dihia','F',30,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(105,'STITOUAH','Fouad','M',30,3);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(106,'BAADI','Hani','M',30,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(107,'BOURAS','Nazim','M',30,9);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(108,'AIT AMARA','Salim','M',30,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(109,'SAGOU','Bassel','M',30,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(110,'ROULLADI','Aissa','M',30,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(111,'BOUTINE','Mohamed','M',30,8);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(112,'LOUATI','Islam','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(113,'AID','Naim','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(114,'MICHALIKH','Asma','F',22,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(115,'LEMOUSSI','Amine','M',30,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(116,'BELIFA','Samia','F',30,8);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(117,'FERRIRA','Manel','F',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(118,'IGHOLI','Lyes','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(119,'GUEMEZ','Jaouad','M',30,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(120,'LECOM','Aissa','M',30,6);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(121,'HOUAT','Aziz','M',30,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(122,'BEQUETA','Aicha','F',30,6);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(123,'RATENI','Walid','M',30,6);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(124,'TOUAT','Yasmine','F',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(125,'JALONI','Aimad','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(126,'DEBOUBA','yasser','M',30,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(127,'GASTAB','Chouaib','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(128,'GIRONI','Younes','M',30,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(129,'DABONI','Rachid','M',30,3);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(130,'LACHOUBI','Kamel','M',30,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(131,'GALLOI','Nadira','F',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(132,'DORONI','Yanis','M',30,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(133,'LENOUCHI','Youcef','M',30,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(134,'LERICHE','Hadi','M',30,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(135,'MANSOUR','Lamine','M',30,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(136,'LABOULAIS','Fadia','F',26,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(137,'DOUDOU','Faiza','F',26,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(138,'MAALEM','Lamia','F',26,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(139,'BESNARD','Salma','F',26,4);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(140,'BELHAMID','Hadjer','F',26,7);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(141,'BOUAAZA','Asma','F',26,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(142,'CORCHI','Melissa','F',26,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(143,'BELAID','Jaouida','F',26,5);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(144,'GASMI','Souad','F',26,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(145,'LAAMARA','Maria','F',25,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(146,'DABOUB','Ramezi','M',25,3);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(147,'HASSINI','Nadia','F',25,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(148,'KALOUNE','Maria','F',27,1);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(149,'BELHAOUA','Besma','F',27,7);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(150,'BELAID','Fouad','M',25,2);
INSERT INTO Sportifs (IdSportif,Nom,Prenom,Sexe,Age,IdConseiller) VALUES(151,'HENDI','Mouad','M',25,2);

-- table Sports --
INSERT INTO Sports (IdSport,libelle) VALUES(1,'Basket ball');
INSERT INTO Sports (IdSport,libelle) VALUES(2,'Volley ball');
INSERT INTO Sports (IdSport,libelle) VALUES(3,'Hand ball');
INSERT INTO Sports (IdSport,libelle) VALUES(4,'Tennis');
INSERT INTO Sports (IdSport,libelle) VALUES(5,'Hockey');
INSERT INTO Sports (IdSport,libelle) VALUES(6,'Badmington');
INSERT INTO Sports (IdSport,libelle) VALUES(7,'Ping pong');
INSERT INTO Sports (IdSport,libelle) VALUES(8,'Football');
INSERT INTO Sports (IdSport,libelle) VALUES(9,'Boxe');

-- table Seances --
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,1,149,'Samedi',9.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,1,'Lundi',9.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,1,'Lundi',10.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,1,'Lundi',11.3,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,1,'Lundi',14.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,1,'Lundi',17.3,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,1,'Lundi',19.3,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,2,'Dimanche',17.3,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,2,'Dimanche',19.3,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,2,'Mardi',17.3,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,2,'Mercredi',17.3,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,2,'Samedi',15.3,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,2,'Samedi',16.3,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,2,'Samedi',17.3,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,3,'Jeudi',20.0,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,3,'Lundi',14.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,3,'Lundi',18.0,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,3,'lundi',19.0,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,3,3,'Lundi',20.0,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(1,5,7,'Mercredi',17.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(2,2,57,'Dimanche',17.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(3,1,149,'Mercredi',11.0,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(3,2,57,'Lundi',16.3,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(3,2,60,'Jeudi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(4,1,149,'Vendredi',10.0,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(4,5,6,'Mercredi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(5,2,57,'Lundi',16.3,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(5,5,6,'Jeudi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(6,5,6,'Vendredi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(6,5,7,'jeudi',17.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(8,2,57,'Dimanche',17.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(8,2,57,'Lundi',16.3,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(8,2,60,'Vendredi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(8,5,7,'Samedi',17.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(8,5,7,'Vendredi',14.0,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(9,5,6,'Samedi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(10,2,60,'Samedi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(10,5,6,'Dimanche',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(10,5,7,'Dimanche',17.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(12,2,57,'Dimanche',17.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(13,2,60,'Dimanche',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(13,5,6,'Mercredi',20.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(13,5,7,'Lundi',17.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(14,1,149,'Mardi',10.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(14,2,57,'Dimanche',17.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(15,2,57,'Lundi',16.3,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(16,2,57,'Lundi',16.3,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(16,2,60,'Lundi',17.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(16,2,60,'Lundi',18.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(16,2,60,'Lundi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(16,2,60,'Lundi',20.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(16,5,6,'Mercredi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(17,2,3,'Samedi',17.3,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(17,2,3,'Vendredi',17.3,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(17,2,57,'Dimanche',17.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(17,3,3,'Dimanche',18.0,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(17,3,3,'Mardi',20.0,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(17,5,7,'Mardi',17.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(18,2,57,'Lundi',16.3,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(18,2,60,'Mardi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(18,5,7,'Mercredi',14.0,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(18,5,7,'Mercredi',16.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(19,2,57,'Dimanche',17.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(20,5,6,'Mercredi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(21,2,57,'Lundi',16.3,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(21,2,60,'Mardi',19.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(21,5,7,'Mercredi',17.0,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(22,2,57,'Mardi',10.0,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(24,1,149,'Jeudi',9.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(24,2,57,'Mercredi',10.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(25,1,149,'Dimanche',18.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(27,2,57,'Jeudi',10.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(27,5,7,'Mercredi',14.0,120);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(27,5,7,'Mercredi',17.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(28,1,149,'Lundi',9.0,30);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(28,5,6,'Dimanche',14.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(28,5,6,'Dimanche',15.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(28,5,6,'Dimanche',16.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(28,5,6,'Dimanche',17.0,60);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(28,5,7,'Mardi',18.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(28,5,7,'Samedi',18.0,90);
INSERT INTO Seances (IdGymSeance,IdSportSeance,IdSportifSeance,Jour,Horaire,Duree) VALUES(28,5,7,'Vendredi',18.0,90);

-- table Jouer --
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(1,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(1,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(1,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(2,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(2,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(2,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(2,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(3,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(3,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(4,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(4,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(5,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(5,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(5,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(5,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(6,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(6,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(6,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(6,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(7,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(7,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(7,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(9,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(9,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(9,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(10,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(10,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(10,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(10,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(11,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(11,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(11,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(12,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(12,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(12,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(13,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(13,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(13,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(14,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(14,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(14,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(15,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(15,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(15,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(16,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(16,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(17,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(17,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(17,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(18,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(19,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(19,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(19,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(20,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(20,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(20,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(20,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(20,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(21,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(21,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(21,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(21,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(22,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(22,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(22,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(22,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(23,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(23,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(23,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(24,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(24,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(24,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(24,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(25,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(25,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(25,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(25,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(25,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(26,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(26,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(26,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(26,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(27,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(27,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(27,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(27,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(27,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(28,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(28,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(28,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(28,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(28,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(29,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(29,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(29,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(29,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(30,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(30,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(30,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(30,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(31,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(31,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(31,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(31,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(32,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(32,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(32,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(32,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(32,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(32,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(33,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(33,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(33,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(33,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(34,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(34,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(34,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(34,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(35,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(35,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(35,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(35,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(35,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(36,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(36,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(36,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(36,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(37,2);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(38,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(38,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(38,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(39,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(39,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(40,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(40,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(40,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(40,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(40,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(41,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(41,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(42,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(42,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(42,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(43,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(43,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(43,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(44,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(44,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(44,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(45,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(45,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(46,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(46,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(47,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(48,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(48,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(48,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(49,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(49,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(50,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(50,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(50,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(50,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(51,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(51,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(51,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(51,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(52,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(52,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(52,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(52,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(53,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(53,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(53,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(53,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(54,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(54,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(54,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(55,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(55,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(55,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(56,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(56,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(57,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(57,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(58,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(58,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(58,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(58,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(59,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(59,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(59,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(60,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(60,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(60,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(61,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(62,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(63,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(63,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(63,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(64,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(65,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(66,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(67,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(67,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(68,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(69,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(69,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(69,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(70,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(70,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(71,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(71,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(72,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(72,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(72,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(72,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(73,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(73,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(74,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(74,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(75,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(75,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(76,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(77,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(77,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(77,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(78,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(79,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(80,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(80,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(80,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(82,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(83,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(83,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(83,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(84,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(84,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(85,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(85,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(85,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(86,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(86,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(87,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(87,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(88,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(88,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(88,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(89,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(89,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(90,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(90,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(91,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(91,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(91,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(92,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(92,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(93,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(94,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(94,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(94,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(94,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(95,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(96,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(96,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(97,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(97,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(98,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(98,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(98,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(98,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(99,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(100,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(100,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(101,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(101,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(101,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(102,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(102,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(103,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(103,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(104,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(104,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(105,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(105,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(105,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(105,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(106,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(107,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(108,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(108,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(108,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(109,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(109,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(109,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(109,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(110,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(110,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(110,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(111,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(111,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(112,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(112,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(113,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(113,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(114,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(114,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(114,6);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(115,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(118,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(118,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(118,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(119,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(120,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(120,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(121,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(122,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(123,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(123,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(123,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(123,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(124,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(125,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(125,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(125,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(126,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(126,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(127,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(127,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(128,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(128,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(129,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(129,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(129,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(130,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(132,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(132,7);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(132,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(133,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(134,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(135,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(135,8);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(136,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(137,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(138,3);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(138,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(139,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(140,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(141,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(142,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(143,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(144,4);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(149,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(151,1);
INSERT INTO Jouer (IdSportifJouer,IdSportJouer) VALUES(151,3);

-- table Entrainer --
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(1,1);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(1,2);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(1,3);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(1,5);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(1,6);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(2,1);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(2,2);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(2,3);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(2,4);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(2,5);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(2,6);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(2,7);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(2,9);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(3,1);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(3,2);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(3,3);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(3,6);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(4,1);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(4,7);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(4,9);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(6,5);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(6,7);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(6,9);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(7,2);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(7,3);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(7,5);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(7,6);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(29,7);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(30,7);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(31,7);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(32,7);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(35,6);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(35,7);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(36,6);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(38,7);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(40,6);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(40,7);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(48,6);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(50,6);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(56,6);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(57,2);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(57,4);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(58,2);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(58,4);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(59,2);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(59,4);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(60,2);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(60,4);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(60,7);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(61,2);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(61,4);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(149,1);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(151,1);
INSERT INTO Entrainer (IdSportifEntrainer,IdSportEntrainer) VALUES(151,3);

-- table Arbitrer --
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(1,1);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(1,2);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(1,5);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(2,5);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(2,8);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(3,2);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(3,6);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(3,7);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(4,1);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(4,2);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(4,7);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(4,9);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(5,7);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(6,1);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(6,5);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(6,7);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(7,2);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(7,3);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(7,5);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(19,2);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(20,2);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(29,7);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(32,7);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(35,6);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(59,4);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(60,2);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(94,1);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(98,1);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(105,1);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(149,1);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(151,1);
INSERT INTO Arbitrer (IdSportifArbitrer,IdSportArbitrer) VALUES(151,3);




UPDATE Villes v 
SET v.gymnases_ville = CAST(
    MULTISET(
        SELECT REF(g) FROM Gymnases g
        WHERE g.villeGym.ville = v.ville
    ) AS t_set_ref_gymnase
);

UPDATE Sportifs e 
SET e.est_conseille = (
        SELECT REF(s) FROM Sportifs s
        WHERE s.IdSportif = e.IdConseiller
);

UPDATE Sportifs e 
SET e.a_conseille = CAST(
    MULTISET(
        SELECT REF(s) FROM Sportifs s
        WHERE s.IdConseiller = e.IdSportif
    ) AS t_set_ref_sportif
);

UPDATE Sportifs s 
SET s.a_jouer = CAST(
    MULTISET(
        SELECT REF(j) FROM Jouer j
        WHERE j.IdSportifJouer = s.IdSportif
    ) AS t_set_ref_jouer
);

UPDATE Sportifs s 
SET s.a_entrainer = CAST(
    MULTISET(
        SELECT REF(e) FROM Entrainer e
        WHERE e.IdSportifEntrainer = s.IdSportif
    ) AS t_set_ref_entrainer
);

UPDATE Sportifs s 
SET s.a_arbitrer = CAST(
    MULTISET(
        SELECT REF(a) FROM Arbitrer a
        WHERE a.IdSportifArbitrer = s.IdSportif
    ) AS t_set_ref_arbitrer
);


UPDATE Sports s 
SET s.seances_sport = CAST(
    MULTISET(
        SELECT REF(c) FROM Seances c
        WHERE c.IdSportSeance = s.IdSport
    ) AS t_set_ref_seance
);


UPDATE Seances s
SET s.sportif_seance = (
    SELECT REF(sp) FROM Sportifs sp
    WHERE s.IdSportifSeance = sp.IdSportif
);

UPDATE Seances s
SET s.sport_seance = (
    SELECT REF(sp) FROM Sports sp
    WHERE s.IdSportSeance = sp.IdSport
);

UPDATE Seances s
SET s.gymnase_seance = (
    SELECT REF(g) FROM Gymnases g
    WHERE s.IdGymSeance = g.IdGymnase
);


UPDATE Jouer j 
SET j.jouer_sportif = (
    SELECT REF(s) FROM Sportifs s
    WHERE j.IdSportifJouer = s.IdSportif
);

UPDATE Jouer j 
SET j.jouer_sport = (
    SELECT REF(s) FROM Sports s
    WHERE j.IdSportJouer = s.IdSport
);

UPDATE Entrainer e 
SET e.entrainer_sportif = (
    SELECT REF(s) FROM Sportifs s
    WHERE e.IdSportifEntrainer = s.IdSportif
);

UPDATE Entrainer e
SET e.entrainer_sport = (
    SELECT REF(s) FROM Sports s
    WHERE e.IdSportEntrainer = s.IdSport
);

UPDATE Arbitrer a 
SET a.arbitrer_sportif = (
    SELECT REF(s) FROM Sportifs s
    WHERE a.IdSportifArbitrer = s.IdSportif
);

UPDATE Arbitrer a 
SET a.arbitrer_sport = (
    SELECT REF(s) FROM Sports s
    WHERE a.IdSportArbitrer = s.IdSport
);
