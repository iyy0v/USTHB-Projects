%{
#include "synt.tab.h"
#include <string.h>

extern int nb_lignes;
extern int col;
extern YYSTYPE yylval;
%}
IDF		[A-Z][a-z0-9]*
COMMENT %%.*
chiffre [0-9]
INT		{chiffre}+
REEL	{chiffre}+"."{chiffre}+
CSTINT  (\([+-]({INT})\))|{INT}
CSTREEL (\([+-]({REEL})\))|{REEL}


%%

"VAR"	{rechercher (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_var;}
"CODE"	{rechercher (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_code;}
"INTEGER"   {rechercher (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_integer;}
"FLOAT"     {rechercher (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_float;}
"CONST"     {rechercher (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_const;}
"STRUCT"     {rechercher (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_struct;}
"IF"     {rechercher (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_if;}
"ELSE"     {rechercher (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_else;}
"FOR"     {rechercher (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_for;}
"WHILE"     {rechercher (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_while;}


{CSTINT}        {
                    col+= strlen(yytext); 
                    int temp = (yytext[0] == '(') ? atoi(yytext+1) : atoi(yytext);
                    if( temp <= 32767 && temp >= -32768 ){
                        rechercher(yytext,"CST","INTEGER", temp, 0); 
                        yylval.entier= temp;
                        return cstInt;
                    }
                    else printf("erreur lexicale a la ligne %d, col %d: Taille entier insupportable.\n", nb_lignes, col);
                }
{CSTREEL}       {
                    float temp = (yytext[0] == '(') ? atof(yytext+1) : atof(yytext);
                    rechercher(yytext,"CST","FLOAT",temp, 0);
                    yylval.reel= atof(yytext); 
                    col+= strlen(yytext); 
                    return cstReel;
                }
{COMMENT}       {}
{IDF}			{
                rechercher (yytext,"IDF","",0, 0); 
                col+= strlen(yytext);
                if (yyleng<=8) {
                    yylval.str=strdup(yytext);
                    return idf;
                }
                else printf ("Erreur lexicale: IDF trop long %s a la ligne %d et a la colonne %d \n", yytext, nb_lignes, col);
                }


"("             {rechercher (yytext,"Separateur",0,0, 2); col++; return par_1;}
")"             {rechercher (yytext,"Separateur",0,0, 2); col++; return par_2;}
"{"				{rechercher (yytext,"Separateur",0,0, 2); col++; return acc_1;}
"}"				{rechercher (yytext,"Separateur",0,0, 2); col++; return acc_2;}
","				{rechercher (yytext,"Separateur",0,0, 2); col++; return virgule;}
";"				{rechercher (yytext,"Separateur",0,0, 2); col++; return p_virgule;}
"["				{rechercher (yytext,"Separateur",0,0, 2); col++; return bracket_1;}
"]"				{rechercher (yytext,"Separateur",0,0, 2); col++; return bracket_2;}
"="				{rechercher (yytext,"Separateur",0,0, 2); col++; return aff;}
"."				{rechercher (yytext,"Separateur",0,0, 2); col++; return point;}
":"				{rechercher (yytext,"Separateur",0,0, 2); col++; return d_point;}

"+"				{rechercher (yytext,"Separateur",0,0, 2); col++; return plus;}
"-"				{rechercher (yytext,"Separateur",0,0, 2); col++; return minus;}
"*"				{rechercher (yytext,"Separateur",0,0, 2); col++; return multi;}
"/"				{rechercher (yytext,"Separateur",0,0, 2); col++; return divi;}

"&&"				{rechercher (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return and;}
"||"				{rechercher (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return or;}
"!"				{rechercher (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return not;}

">"				{rechercher (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return gt;}
">="			{rechercher (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return get;}
"<"				{rechercher (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return lt;}
"<="			{rechercher (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return let;}
"=="			{rechercher (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return eq;}
"!="			{rechercher (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return neq;}

[ \t]			{col+= strlen(yytext);}
\n				{nb_lignes++; col = 1;}
.		{printf("erreur lexicale a la ligne %d, col %d\n", nb_lignes, col); return err;}
