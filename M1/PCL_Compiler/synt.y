%{
    
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "pgm.h"

  int yylex(void);
  int yyerror(char* s);

  int nb_lignes; 
  int col;
  int i,t;
  char idfType[20];
  int inStruct;
  int isElse;

  char sauvIdf[50][50];
  char sauvType[20][50];
  int sauvTaille[50];
  char sauvTypeAff[20];
  int isAffect;
  int qc;
  int sauvQc;
  int tc;
  int cc;

%}

%{
int yylex();
%}

%union 
{ 
    int entier; 
    float reel;
    char* str;
}

%token mc_var mc_code mc_integer mc_float mc_const mc_struct
%token mc_if mc_else mc_for mc_while
%token acc_1 acc_2 virgule p_virgule bracket_1 bracket_2 aff point par_1 par_2 d_point
%token plus minus multi divi
%token and or not
%token gt get lt let eq neq
%token <str>idf comment <entier>cstInt <reel>cstReel
%token err

%left plus minus
%left multi divi
%left and
%left or
%left gt get lt let eq neq

%type<str> IDFAFF
%type<str> EXPRESSION
%type<str> CONDITION
%type<str> COMP

%start S


%%
S: idf acc_1 mc_var DECSEG mc_code CODESEG acc_2 {
                insererTYPE($1, "PROGRAM ID");
                quadr("", "", "", "");
            }
;
DECSEG: acc_1 DECLIST acc_2
;
DECLIST: DEC DECLIST
        | DEC
;
DEC: VARDEC
    | CONSTDEC
    | STRUCTDEF
;

VARDEC: TYPE VARLIST p_virgule
;

CONSTDEC: mc_const idf aff cstInt p_virgule {
                if(doubleDeclaration($2) != 0) printf("\nErreur semantique %d:%d - %s: Variable deja declaree.\n", nb_lignes, col, $2);
                else{ 
                     insererTYPE($2, "INTEGER");
                     char temp[50];
                     sprintf(temp, "%d", $4);
                     setConst($2, temp);
                }
            }
        | mc_const idf aff cstReel p_virgule {
                if(doubleDeclaration($2) != 0) printf("\nErreur semantique %d:%d - %s: Variable deja declaree.\n", nb_lignes, col, $2);
                else{ 
                     insererTYPE($2, "FLOAT");
                     char temp[50];
                     sprintf(temp, "%f", $4);
                     setConst($2, temp);
                }
            }
;

TYPE: mc_integer{
        if(inStruct){
            int s=t;
            for(int s=t; s<=i; s++){
                sprintf(sauvType[s], "INTEGER");
                t = s;
            }
            t++;
        }
        else{
            sprintf(idfType, "INTEGER");
        }
    }
    | mc_float {
        if(inStruct){
            int s = t;
            for(s=t; s<=i; s++){
                sprintf(sauvType[s], "FLOAT");
                t = s;
            }
            t++;
        }
        else{
            sprintf(idfType, "FLOAT");
        }
    }
    | mc_struct idf {
        if(isStruct($2)){
            if(inStruct){
                int s = t;
                for(s=t; s<=i; s++){
                    sprintf(sauvType[s], $2);
                    t = s;
                }
                t++;
            }
            else{
                sprintf(idfType, $2);
            }
        }
        else{
            printf("\nErreur semantique %d:%d - %s: Type inconnu.\n", nb_lignes, col, $2);
        }
    }
;

VARLIST: VARIABLE virgule VARLIST
             | VARIABLE
;

VARIABLE: idf {
        if(inStruct){
            sauvTaille[i] = 0;
            sprintf(sauvIdf[i], "%s", $1);
            i++;
        }
        else{
            if(doubleDeclaration($1) != 0) printf("\nErreur semantique %d:%d - %s: Variable deja declaree.\n", nb_lignes, col, $1);
            else{ 
                insererTYPE($1, idfType);
                if(isStruct(idfType)){
                    insertStruct($1, idfType);
                }
            }
        }
}
        | idf bracket_1 cstInt bracket_2 {
        if(inStruct){
            char temp[50];
            sauvTaille[i] = $3;
            sprintf(temp, "%s", sauvType[i]);
            sprintf(sauvType[i], "ARRAY OF %s", temp);
            sprintf(sauvIdf[i], "%s", $1);
            i++;
        }
        else{
            if(doubleDeclaration($1) != 0) printf("\nErreur semantique %d:%d - %s: Variable deja declaree.\n", nb_lignes, col, $1);
            else if($3 <= 0) printf("\nErreur semantique %d:%d - Taille tableau negative.\n", nb_lignes, col);
            else{ 
                char temp[50];
                sprintf(temp, "ARRAY OF %s", idfType);
                insererTYPE($1, temp);
                setArraySize($1, $3);

                if(isStruct(idfType)){
                    insertStruct($1, idfType);
                }
            }
        }
    }
;

STRUCTDEF: STRCT acc_1 STRUCTDEFLIST acc_2 idf p_virgule {
        if(doubleDeclaration($5) != 0) printf("\nErreur semantique %d:%d - %s: Nom de structure invalide.\n", nb_lignes, col, $5);
        else{ 
            insererTYPE($5, "STRUCT");
        }

        int ds = 0, k=0;
        while(ds==0 && k<i){
            for(int j=k+1; j<i; j++){
                if(strcmp(sauvIdf[k], sauvIdf[j]) == 0){
                    ds = 1;
                    break;
                }
            }
            k++;
        }
        if(ds) printf("\nErreur semantique %d:%d - %s.%s: Variable deja declaree.\n", nb_lignes, col, $5, sauvIdf[k]);
        else{
            for(int j=0; j<i; j++) {
                char temp[50];
                sprintf(temp, "%s.%s", $5, sauvIdf[j]);
                lookup (temp,"IDF","",0, 0); 
                insererTYPE(temp, sauvType[j]);
                setParent(temp, $5);
                setArraySize(temp, sauvTaille[j]);
            }
        }

        inStruct = 0;
        i=0;
        t=0;
    }
;

STRCT: mc_struct{
    inStruct = 1;
}

STRUCTDEFLIST: VARDEC STRUCTDEFLIST
            | VARDEC
;

CODESEG: acc_1 INSTLIST acc_2
;

INSTLIST: INST INSTLIST
        |
;
INST: AFFECTATION
    | IFINST
    | FORINST
    | WHILEINST
;
AFFECTATION: IDFAFF aff EXPRESSION p_virgule {
                isAffect = 0;
                quadr(":=", $3, "", $1);
            }           
;

IDFAFF: idf {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else if(isConst($1)) printf("\nErreur semantique %d:%d: (%s) Constante deja initialisee.\n", nb_lignes, col, $1);
            else{
                sprintf(sauvTypeAff, "%s", getType($$));
                isAffect = 1;
                $$ = strdup($1);
            }
        }
        | idf bracket_1 cstInt bracket_2 {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(isOutOfRange($1, $3)) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else{
                    sprintf(sauvTypeAff, "%s", arrayElementType($1));
                    isAffect = 1;

                    char temp[50];
                    sprintf(temp, "%s[%d]", $1, $3);
                    $$ = strdup(temp);
                }
            }
        }
        | idf bracket_1 idf bracket_2 {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(cmpType($3, "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else{
                    sprintf(sauvTypeAff, "%s", arrayElementType($1));
                    isAffect = 1;

                    char temp[50];
                    sprintf(temp, "%s[%s]", $1, $3);
                    $$ = strdup(temp);
                }
            }
        }
        | idf point idf {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                char temp[50];
                sprintf(temp, "%s.%s", $1, $3);
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else{
                    sprintf(sauvTypeAff, "%s", getType(temp));
                    isAffect = 1;
                    $$ = strdup(temp);
                }
            }
        }
        | idf point idf bracket_1 cstInt bracket_2{
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                char temp[50];
                sprintf(temp, "%s.%s", $1, $3);
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else{
                    if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                    else if(isOutOfRange(temp, $5)) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                    else{
                        sprintf(sauvTypeAff, "%s", arrayElementType(temp));
                        isAffect = 1;

                        sprintf(temp, "%s[%d]", temp, $5);
                        $$ = strdup(temp);
                    }
                }
            }
        }
        | idf point idf bracket_1 idf bracket_2{
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                char temp[50];
                sprintf(temp, "%s.%s", $1, $3);
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else{
                    if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                    else if(cmpType($5, "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                    else{
                        sprintf(sauvTypeAff, "%s", arrayElementType(temp));
                        isAffect = 1;

                        sprintf(temp, "%s[%s]", temp, $5);
                        $$ = strdup(temp);
                    }
                }
            }
        }
        | idf bracket_1 cstInt bracket_2 point idf {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(isOutOfRange($1, $3)) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else{
                    isAffect = 1;

                    char temp[50];
                    sprintf(temp, "%s.%s", $1, $6);
                    sprintf(sauvTypeAff, "%s", getType(temp));

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{
                        sprintf(temp, "%s[%d].%s", $1, $3, $6);
                        $$ = strdup(temp);
                    }
                    
                }
            }
        }
        | idf bracket_1 idf bracket_2 point idf {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(cmpType($3, "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else{
                    
                    char temp[50];
                    sprintf(temp, "%s.%s", $1, $6);
                    sprintf(sauvTypeAff, "%s", getType(temp));

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{
                        isAffect = 1;
                        sprintf(temp, "%s[%s].%s", $1, $3, $6);
                        $$ = strdup(temp);
                    }
                    
                }
                
            }
        }
        | idf bracket_1 cstInt bracket_2 point idf bracket_1 cstInt bracket_2 {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(isOutOfRange($1, $3)) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", $1, $6);

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{

                        if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                        else if(isOutOfRange(temp, $8)) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                        else{
                            sprintf(sauvTypeAff, "%s", arrayElementType(temp));
                            isAffect = 1;

                            sprintf(temp, "%s[%d].%s[%d]", $1, $3, $6, $8);
                            $$ = strdup(temp);
                        }
                    }
                    
                }
                
            }
        }
        | idf bracket_1 idf bracket_2 point idf bracket_1 idf bracket_2 {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(cmpType($3, "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", $1, $6);

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{

                        if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                        else if(cmpType($8, "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                        else{
                            sprintf(sauvTypeAff, "%s", arrayElementType(temp));
                            isAffect = 1;

                            sprintf(temp, "%s[%s].%s[%s]", $1, $3, $6, $8);
                            $$ = strdup(temp);
                        }
                    }
                    
                }
                
            }
        }
;


EXPRESSION: cstInt {
            if(isAffect){
                if(!isCompatible(sauvTypeAff, "INTEGER")) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
            }

            char temp[50];
            sprintf(temp, "%d", $1);
            $$ = strdup(temp);
}
         | cstReel {
            if(isAffect){
                if(!isCompatible(sauvTypeAff, "FLOAT")) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
            }
            sprintf($$, "%f", $1);
         }
         | EXPRESSION multi EXPRESSION{
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("*", $1, $3, temp);
            sprintf($$, "%s", temp);
         }
         | EXPRESSION divi EXPRESSION {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("/", $1, $3, temp);
            sprintf($$, "%s", temp);
         }
         | EXPRESSION plus EXPRESSION {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("+", $1, $3, temp);
            sprintf($$, "%s", temp);
         }
         | EXPRESSION minus EXPRESSION {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("-", $1, $3, temp);
            sprintf($$, "%s", temp);
         }
         | par_1 EXPRESSION par_2 {
            sprintf($$, "%s", $2);
         }
         | idf {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            if(isAffect){
                if(!isCompatible(sauvTypeAff, getType($1))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
            }
            sprintf($$, "%s", $1);
         }
         | idf point idf {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                char temp[50];
                sprintf(temp, "%s.%s", $1, $3);
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else if(isAffect){
                    if(!isCompatible(sauvTypeAff, getType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                    else{
                        sprintf($$, "%s", temp);
                    }
                }

                sprintf($$, "%s", temp);
            }
         }
         | idf bracket_1 cstInt bracket_2 {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(isOutOfRange($1, $3)) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else if(isAffect){
                    if(!isCompatible(sauvTypeAff, arrayElementType($1))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                    else{
                        char temp[50];
                        sprintf(temp, "%s[%d]", $1, $3);
                        $$ = strdup(temp);
                    }
                }
                else{
                    char temp[50];
                    sprintf(temp, "%s[%d]", $1, $3);
                    $$ = strdup(temp);
                }
            }
         }
         | idf bracket_1 idf bracket_2 {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(cmpType($3, "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else if(isAffect){
                    if(!isCompatible( sauvTypeAff, arrayElementType($1))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                    else{
                        char temp[50];
                        sprintf(temp, "%s[%s]", $1, $3);
                        $$ = strdup(temp);
                    }
                }
                else{
                    char temp[50];
                    sprintf(temp, "%s[%s]", $1, $3);
                    $$ = strdup(temp);
                }
            }
        }
         | idf point idf bracket_1 cstInt bracket_2{
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                char temp[50];
                sprintf(temp, "%s.%s", $1, $3);
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else{
                    if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                    else if(isOutOfRange(temp, $5)) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                    else if(isAffect){
                        if(!isCompatible(sauvTypeAff, arrayElementType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                        else{
                            sprintf(temp, "%s[%d]", temp, $5);
                            $$ = strdup(temp);
                        }
                    }
                    else{
                        sprintf(temp, "%s[%d]", temp, $5);
                        $$ = strdup(temp);
                    }
                }
            }
        }
        | idf point idf bracket_1 idf bracket_2{
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                char temp[50];
                sprintf(temp, "%s.%s", $1, $3);
                if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                else{
                    if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                    else if(cmpType($5, "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                    else if(isAffect){
                        if(!isCompatible(sauvTypeAff, arrayElementType($3))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                        else{
                            sprintf(temp, "%s[%s]", temp, $5);
                            $$ = strdup(temp);
                        }
                    }
                    else{
                        sprintf(temp, "%s[%s]", temp, $5);
                        $$ = strdup(temp);
                    }
                }
            }
        }
        | idf bracket_1 cstInt bracket_2 point idf {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(isOutOfRange($1, $3)) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", $1, $6);
                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else if(isAffect){
                        if(!isCompatible(sauvTypeAff, getType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                        else{
                            sprintf(temp, "%s[%d].%s", $1, $3, $6);
                            $$ = strdup(temp);
                        }
                    }
                    else{
                        sprintf(temp, "%s[%d].%s", $1, $3, $6);
                        $$ = strdup(temp);
                    }
                    
                }
            }
        }
        | idf bracket_1 idf bracket_2 point idf {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(cmpType($3, "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", $1, $6);

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else if(isAffect){
                        if(!isCompatible(sauvTypeAff, getType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                        else{
                            sprintf(temp, "%s[%s].%s", $1, $3, $6);
                            $$ = strdup(temp);
                        }
                    }
                    else{
                        sprintf(temp, "%s[%s].%s", $1, $3, $6);
                        $$ = strdup(temp);
                    }
                    
                }
                
            }
        }
        | idf bracket_1 cstInt bracket_2 point idf bracket_1 cstInt bracket_2 {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(isOutOfRange($1, $3)) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", $1, $6);

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{

                        if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                        else if(isOutOfRange(temp, $8)) printf("\nErreur semantique %d:%d - Index out of range.\n", nb_lignes, col);
                        else if(isAffect){
                            if(!isCompatible(sauvTypeAff, arrayElementType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                            else{
                                sprintf(temp, "%s[%d].%s[%d]", $1, $3, $6, $8);
                                $$ = strdup(temp);
                            }
                        }
                        else{
                            sprintf(temp, "%s[%d].%s[%d]", $1, $3, $6, $8);
                            $$ = strdup(temp);
                        }
                    }
                    
                }
                
            }
        }
        | idf bracket_1 idf bracket_2 point idf bracket_1 idf bracket_2 {
            if(doubleDeclaration($1) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $1);
            else{
                if(!isArray($1)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, $1);
                else if(cmpType($3, "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                else{
                    char temp[50];
                    sprintf(temp, "%s.%s", $1, $6);

                    if(exists(temp) == 0) printf("\nErreur semantique %d:%d - %s: Variable n'existe pas.\n", nb_lignes, col, temp);
                    else{

                        if(!isArray(temp)) printf("\nErreur semantique %d:%d - %s: Variable n'est pas un tableau.\n", nb_lignes, col, temp);
                        else if(cmpType($8, "INTEGER") != 0) printf("\nErreur semantique %d:%d - Invalid index.\n", nb_lignes, col);
                        else if(isAffect){
                            if(!isCompatible(sauvTypeAff, arrayElementType(temp))) printf("\nErreur semantique %d:%d - Types incompatibles.\n", nb_lignes, col);
                            else{
                                sprintf(temp, "%s[%s].%s[%s]", $1, $3, $6, $8);
                                $$ = strdup(temp);
                            }
                        }
                        else{

                            sprintf(temp, "%s[%s].%s[%s]", $1, $3, $6, $8);
                            $$ = strdup(temp);
                        }
                    }
                    
                }
                
            }
        }
;


IFINST: IFINST_1 par_2 acc_1 INSTLIST acc_2 {
            char temp[50];
            sprintf(temp, "%d", qc);
            int x = pop(1);
            ajouter_quad(x, 1, temp);
}
      | IFINST_2 mc_else acc_1 INSTLIST acc_2 {
            char temp[50];
            sprintf(temp, "%d", qc);
            int x = pop(2);
            ajouter_quad(x, 1, temp);
}
;


IFINST_1: mc_if par_1 CONDITION {
            push(1, qc);
            quadr("BZ", "", $3, "");
}
;

IFINST_2: IFINST_1 par_2 acc_1 INSTLIST acc_2 {

            push(2, qc);
            quadr("BR", "", "", "");

            char temp[50];
            sprintf(temp, "%d", qc);
            
            int x = pop(1);
            ajouter_quad(x, 1, temp);
}
;



CONDITION: CONDITION and CONDITION {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("*", $1, $3, temp);

            char temp2[50];
            sprintf(temp2, "t%d", tc);
            tc++;

            char tempQc[50];
            sprintf(tempQc, "%d", qc+3);
            quadr("BZ", tempQc, temp, "");

            quadr(":=", "1", "", temp2);

            sprintf(tempQc, "%d", qc+2);
            quadr("BR", tempQc, "", "");

            quadr(":=", "0", "", temp2);

            sprintf($$, "%s", temp2);
            
        }
         | CONDITION or CONDITION {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("+", $1, $3, temp);

            char temp2[50];
            sprintf(temp2, "t%d", tc);
            tc++;

            char tempQc[50];
            sprintf(tempQc, "%d", qc+3);
            quadr("BZ", tempQc, temp, "");

            quadr(":=", "1", "", temp2);

            sprintf(tempQc, "%d", qc+2);
            quadr("BR", tempQc, "", "");

            quadr(":=", "0", "", temp2);

            sprintf($$, "%s", temp2);
         }
         | par_1 CONDITION par_2 {
            $$ = strdup($2);
         }
         | COMP {
            $$ = strdup($1);
         }
         | not par_1 CONDITION par_2 {
            char temp[50];
            sprintf(temp, "t%d", tc);
            tc++;
            quadr("NOT", $3, "", temp);
            $$ = strdup(temp);
         }
;

COMP: EXPRESSION gt EXPRESSION  {
        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);

        quadr("BLE", tempQc, $1, $3);
        quadr(":=", "1", "", temp);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp);

        sprintf($$, "%s", temp);
}
    | EXPRESSION get EXPRESSION {
        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);

        quadr("BL", tempQc, $1, $3);
        quadr(":=", "1", "", temp);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp);

        sprintf($$, "%s", temp);
} 
    | EXPRESSION lt EXPRESSION   {
        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);

        quadr("BGE", tempQc, $1, $3);
        quadr(":=", "1", "", temp);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp);

        sprintf($$, "%s", temp);
}
    | EXPRESSION let EXPRESSION {
        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);

        quadr("BG", tempQc, $1, $3);
        quadr(":=", "1", "", temp);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp);

        sprintf($$, "%s", temp);
}
    | EXPRESSION eq EXPRESSION {
        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;
        quadr("-", $1, $3, temp);

        char temp2[50];
        sprintf(temp2, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);
        quadr("BNZ", tempQc, temp, "");

        quadr(":=", "1", "", temp2);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp2);

        sprintf($$, "%s", temp2);
}
    | EXPRESSION neq EXPRESSION {

        char temp[50];
        sprintf(temp, "t%d", tc);
        tc++;
        quadr("-", $1, $3, temp);

        char temp2[50];
        sprintf(temp2, "t%d", tc);
        tc++;

        char tempQc[50];
        sprintf(tempQc, "%d", qc+3);
        quadr("BZ", tempQc, temp, "");

        quadr(":=", "1", "", temp2);

        sprintf(tempQc, "%d", qc+2);
        quadr("BR", tempQc, "", "");

        quadr(":=", "0", "", temp2);

        sprintf($$, "%s", temp2);
}
;


FORINST: FORINST_1 acc_1 INSTLIST acc_2{
    int x = pop(1);
    char temp[50];
    sprintf(temp, "%d", x);
    quadr("BR", temp, "", "");
    
    x = pop(2);
    sprintf(temp, "%d", qc);
    ajouter_quad(x, 1, temp);

}
;

FORINST_1: mc_for par_1 idf d_point EXPRESSION d_point cstInt d_point EXPRESSION par_2{
        if(doubleDeclaration($3) == 0) printf("\nErreur semantique %d:%d - %s: Variable non declaree.\n", nb_lignes, col, $3);
        else{
            quadr(":=", $5, "", $3);

            char temp[50];
            sprintf(temp, "%d", qc+2);
            quadr("BR", temp, "", "");


            push(1, qc);
            sprintf(temp, "%d", $7);
            quadr("+", $3, temp, $3);

            push(2, qc);
            quadr("BG", "", $3, $9);
        }
}

WHILEINST: WHILEINST_2 par_2 acc_1 INSTLIST acc_2 {

            int x = pop(1);
            char temp[50];
            sprintf(temp, "%d", x);
            quadr("BR", temp, "", "");

            x = pop(2);
            sprintf(temp, "%d", qc);
            ajouter_quad(x, 1, temp);

}
;

WHILEINST_1: mc_while par_1{
            push(1, qc);

}

WHILEINST_2: WHILEINST_1 CONDITION{
            push(2, qc);
            quadr("BZ", "", $2, "");
}

%%

int main()
{
  nb_lignes = 1; 
  col = 1;
  i = 0;
  t = 0;
  qc = 0;

  

  init();
  yyparse();
  afficher();
  afficher_qdr();

  Optimization();
  
  afficher_qdr();

  int x = tc;
  generer_asm(x);

  return 0;
}
int yywrap()
{}

int yyerror(char * msg){
    printf("Erreur syntaxique a la ligne %d, colonne %d\n", nb_lignes, col);
}