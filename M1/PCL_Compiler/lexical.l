%{
#include "synt.tab.h"
#include <string.h>

extern int nb_lignes;
extern int col;
extern YYSTYPE yylval;
%}

IDF		[A-Za-z][a-z0-9]*
COMMENT %%.*
chiffre [0-9]
INT		{chiffre}+
REEL	{chiffre}+"."{chiffre}+
CSTINT  (\([+-]({INT})\))|{INT}
CSTREEL (\([+-]({REEL})\))|{REEL}


%%

"VAR"	{lookup (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_var;}
"CODE"	{lookup (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_code;}
"INTEGER"   {lookup (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_integer;}
"FLOAT"     {lookup (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_float;}
"CONST"     {lookup (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_const;}
"STRUCT"     {lookup (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_struct;}
"IF"     {lookup (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_if;}
"ELSE"     {lookup (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_else;}
"FOR"     {lookup (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_for;}
"WHILE"     {lookup (yytext,"Mot cle "," ",0, 1); col+= strlen(yytext); return mc_while;}


{CSTINT}        {
                    col+= strlen(yytext); 
                    int temp = (yytext[0] == '(') ? atoi(yytext+1) : atoi(yytext);
                    if( temp <= 32767 && temp >= -32768 ){
                        lookup(yytext,"CST","INTEGER", temp, 0); 
                        yylval.entier= temp;
                        return cstInt;
                    }
                    else printf("Erreur lexicale a la ligne %d, col %d: Taille entier insupportable.\n", nb_lignes, col);
                }
{CSTREEL}       {
                    float temp = (yytext[0] == '(') ? atof(yytext+1) : atof(yytext);
                    lookup(yytext,"CST","FLOAT",temp, 0);
                    yylval.reel= atof(yytext); 
                    col+= strlen(yytext); 
                    return cstReel;
                }
{COMMENT}       {}
{IDF}			{
                lookup (yytext,"IDF","",0, 0); 
                col+= strlen(yytext);
                if (yyleng<=8) {
                    yylval.str=strdup(yytext);
                    return idf;
                }
                else printf ("Erreur lexicale: IDF trop long %s a la ligne %d et a la colonne %d \n", yytext, nb_lignes, col);
                }


"("             {lookup (yytext,"Separateur",0,0, 2); col++; return par_1;}
")"             {lookup (yytext,"Separateur",0,0, 2); col++; return par_2;}
"{"				{lookup (yytext,"Separateur",0,0, 2); col++; return acc_1;}
"}"				{lookup (yytext,"Separateur",0,0, 2); col++; return acc_2;}
","				{lookup (yytext,"Separateur",0,0, 2); col++; return virgule;}
";"				{lookup (yytext,"Separateur",0,0, 2); col++; return p_virgule;}
"["				{lookup (yytext,"Separateur",0,0, 2); col++; return bracket_1;}
"]"				{lookup (yytext,"Separateur",0,0, 2); col++; return bracket_2;}
"="				{lookup (yytext,"Separateur",0,0, 2); col++; return aff;}
"."				{lookup (yytext,"Separateur",0,0, 2); col++; return point;}
":"				{lookup (yytext,"Separateur",0,0, 2); col++; return d_point;}

"+"				{lookup (yytext,"Separateur",0,0, 2); col++; return plus;}
"-"				{lookup (yytext,"Separateur",0,0, 2); col++; return minus;}
"*"				{lookup (yytext,"Separateur",0,0, 2); col++; return multi;}
"/"				{lookup (yytext,"Separateur",0,0, 2); col++; return divi;}

"&&"				{lookup (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return and;}
"||"				{lookup (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return or;}
"!"				{lookup (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return not;}

">"				{lookup (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return gt;}
">="			{lookup (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return get;}
"<"				{lookup (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return lt;}
"<="			{lookup (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return let;}
"=="			{lookup (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return eq;}
"!="			{lookup (yytext,"Separateur",0,0, 2); col+= strlen(yytext);; return neq;}

[ \t]			{col+= strlen(yytext);}
\n				{nb_lignes++; col = 1;}
.		{printf("Erreur lexicale a la ligne %d, col %d\n", nb_lignes, col); return err;}
