create table TypePanne(codeTypePanne NUMBER(8) PRIMARY KEY, nomTypePanne varchar2(20));

create table Panne(CodePanne number(8) primary key, NomPanne Varchar2(10));

alter table Panne add codeTypePanne Number(8);

alter table Panne add constraint fk_panne foreign key(codeTypePanne) references TypePanne(codeTypePanne);

create Table NiveauQualification (CodeQualif Number(8), NomQualif varchar2(10));

alter table NiveauQualification add constraint pk_qua primary key (Codequalif);

create Table employe( CodeEmp number(8) primary key, Nomemp varchar2(10), codeQualif Number(8), constraint fk_qua foreign key (CodeQualif) references NiveauQualification(CodeQualif));

create Table Ville( codeVille number(8) primary key, nomVille varchar2(10));

create Table Point_de_Vente( codePointVente number(8) primary key, nomPointVente varchar2(10),codeVille number(8), constraint fk_Pvente foreign key (codeVille) references Ville(codeVille));

create table TypeProduit(CodeTypeProd number(8) primary key, TypeProduit varchar2(10));

create table Modele( CodeMod Number(8) primary key, Designation varchar2(10), CodeTypeProd number(8), constraint fk_MOD foreign key (CodeTypeProd) references TypeProduit(CodeTypeProd));

create table client (codecl number(8) primary key, NomCL VARCHAR2(10), sexeCL varchar2(10));

create table produit ( Numserie number(8) primary key, dateFabrication date, codeCl number(8), codePointvente number(8), codemod number(8), constraint fk_cl foreign key (codecl) references client(codeCl), constraint fk_pv foreign key (codepointvente) references point_de_vente(codepointvente), constraint fk_modele foreign key (codeMod) references Modele (codemod));

create table Reparation( codeRep NUMBER(10) primary key, dateRep date, coutRep number(10), garantie number(8),durerep varchar2(10), codeemp number(8), codePanne number(8), numserie number(8), constraint fk_empl foreign key (codeemp) references employe (codeemp), constraint fk_pane foreign key (codepanne) references panne (codepanne), constraint fk_produ foreign key (numserie) references produit (numserie));



--------------------------------------- PL/SQL ---------------------------------------------


DECLARE
  CodeVille number;   
  NomVille char(10);
BEGIN
  for CodeVille in 1..40 loop
    Select dbms_random.string('U', 8) into NomVille from dual;
    
    insert into Ville values (CodeVille, NomVille);
    

  end loop;
  commit;
END;
/

DECLARE 
  NomPV char(10);
  CodePV number;
  CodeVille number;
BEGIN
	for CodePV in 1..200 loop
		Select dbms_random.string('U',8) into NomPV from dual;
		Select floor(dbms_random.value(1,40.9))into CodeVille from dual;
		insert into Point_de_Vente values (CodePV,NomPV,CodeVille);
	end loop;
	commit;
END;
/

DECLARE
  CodeTypeProd number; 
  TypeProd char(8);
BEGIN
  for CodeTypeProd in 1..12 loop
    Select dbms_random.string('U', 8) into TypeProd from dual;
    
    insert into TypeProduit values (CodeTypeProd, TypeProd);
    
 
  end loop;
  commit;
END;
/

DECLARE 
  Designation char(10);
  CodeMod number;
  CodeTypeProd number;
BEGIN
	for CodeMod in 1..78 loop
		Select dbms_random.string('U',8) into Designation from dual;
		Select floor(dbms_random.value(1,12.9))into CodeTypeProd from dual;
		insert into Modele values (CodeMod,Designation,CodeTypeProd);
	end loop;
	commit;
END;
/

DECLARE
v_CodeQualif number;v_NomQualif varchar2(10);
BEGIN
	for v_CodeQualif IN 1..5 LOOP
		Select dbms_random.string('U',8) into v_NomQualif from dual;
		insert into NiveauQualification values (v_CodeQualif,v_NomQualif);
	end loop
	commit;
END;
/

DECLARE
var_codeTypePanne number;var_nomTypePanne varchar2(10);
BEGIN
	for var_codeTypePanne IN 1..20 LOOP 
		Select dbms_random.string('U',8) into var_nomTypePanne from dual;
		insert into TypePanne values (var_codeTypePanne,var_nomTypePanne);
	end loop
	commit;
END;
/

DECLARE
v_CodeCL number;v_NomCL varchar2(10); v_SexCL varchar2(10);
BEGIN
	for v_CodeCL IN 1..1233076 LOOP
		Select dbms_random.string('U',8) into v_NomCL from dual;
		Select dbms_random.string('U',8) into v_SexCL from dual;
		insert into Client values (v_CodeCL,v_NomCL,v_SexCL);
	end loop
	commit;
END;
/

DECLARE
v_CodeEmp number;v_NomEmp varchar2(10); v_CodeQualif number;
BEGIN
	for v_CodeEmp IN 1..36 LOOP
		Select dbms_random.string('U',8) into v_NomEmp from dual;
		Select floor(dbms_random.value(1, 5.9)) into v_CodeQualif from dual;
		insert into employe values (v_CodeEmp,v_NomEmp,v_CodeQualif);
	end loop
	commit;
END;
/

DECLARE
v_NumSerie number;v_DateFab date; v_CodMod number; v_CodePointV number; v_CodeCL number;
BEGIN
	for v_NumSerie IN 1..180255 LOOP
		Select to_date(trunc(dbms_random.value(to_char(date'2021-01-01','J'), to_char(date'2023-03-31', 'J'))), 'J') into v_DateFab from dual;
		Select floor(dbms_random.value(1, 78.9)) into v_CodMod from dual;
		Select floor(dbms_random.value(1, 200.9)) into v_CodePointV from dual;
		Select floor(dbms_random.value(1, 1233076.9)) into v_CodeCL from dual;
		insert into produit values (v_NumSerie,v_DateFab, v_CodeCL,v_CodePointV, v_CodMod);
	end loop
	commit;
END;
/

DECLARE
v_CodePanne number;v_NomPanne varchar2(10); v_CodeTypePanne number;
BEGIN
	for v_CodePanne IN 1..40552 LOOP
		Select dbms_random.string('U',8) into v_NomPanne from dual;
		Select floor(dbms_random.value(1, 20.9)) into v_CodeTypePanne from dual;
		insert into panne values (v_CodePanne,v_NomPanne, v_CodeTypePanne);
	end loop
	commit;
END;
/

DECLARE
v_CodRep number;v_CoutRep number; v_Garantie number; v_dureeRep varchar2(10); v_DateRep date; v_CodePanne number; v_CodeProduit number; v_CodeEmp number; v_NumSerie number;
BEGIN
	for v_CodRep IN 1..1600220 LOOP
		Select to_date(trunc(dbms_random.value(to_char(date'2021-01-01','J'), to_char(date'2023-03-31', 'J'))), 'J') into v_DateRep from dual;
		Select dbms_random.value(1,10000) into v_CoutRep from dual;
		Select dbms_random.value(1,2.9) into v_Garantie from dual;
		Select dbms_random.string('U',8) into v_dureeRep from dual;
		Select floor(dbms_random.value(1, 40552.9)) into v_CodePanne from dual;
		Select floor(dbms_random.value(1, 180255.9)) into v_CodeProduit from dual;
		Select floor(dbms_random.value(1, 36.9)) into v_CodeEmp from dual;
		Select floor(dbms_random.value(1, 180255.9)) into v_NumSerie from dual; 
		insert into reparation values (v_CodRep,v_DateRep, v_CoutRep,v_Garantie,v_dureeRep,v_CodeEmp,v_CodePanne, v_NumSerie);
	end loop
	commit;
END;
/




------------------------------- REQUESTS -------------------------------

set timing on;
set autotrace on explain;


select v.nomVille as nom_ville, count(r.codeRep) nb_rep from ville v, reparation r, produit p, Point_de_Vente pv where r.numserie = p.numserie and p.codepointvente = pv.codepointvente and pv.codeville = v.codeville and r.dateRep >= DATE '2022-01-01' and r.dateRep <= DATE '2022-01-30' group by v.nomville;
 

select tp.nomtypepanne as type_panne, EXTRACT(year from r.dateRep) as annee, sum(r.coutRep) as cout_global from reparation r, panne p, typepanne tp where r.codepanne = p.codepanne and p.codetypepanne = tp.codetypepanne group by tp.nomtypepanne, EXTRACT(year from r.dateRep) order by type_panne, annee;


select nom_ville, nb_rep from (select v.nomVille as nom_ville, count(r.codeRep) as nb_rep from ville v, reparation r, produit p, Point_de_Vente pv where r.numserie = p.numserie and p.codepointvente = pv.codepointvente and pv.codeville = v.codeville and r.dateRep >= DATE '2022-01-01' and r.dateRep <= DATE '2022-12-31' group by v.nomville)
where nb_rep = (SELECT MAX(nb_rep) FROM (select v.nomVille, count(r.codeRep) as nb_rep from ville v, reparation r, produit p, Point_de_Vente pv where r.numserie = p.numserie and p.codepointvente = pv.codepointvente and pv.codeville = v.codeville and r.dateRep >= DATE '2022-01-01' and r.dateRep <= DATE '2022-12-31' group by v.nomville));
