#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "ts.h"


typedef struct{
    char oper[100];
    char op1[100];
    char op2[100];
    char res[100];
    char etq[20];
} qdr;




#define N 1000

int top1 = -1;
int top2 = -1;
int top3 = -1;

int stack1[N];
int stack2[N];
int stack3[N];



void push(int c, int x){

    int *stack, top;
    if(c==1){
        stack = stack1;
        top = top1;
    } 
    else if (c==2){
        stack = stack2;
        top = top2;
    } 
    else{
        stack = stack3;
        top = top3;
    }

    if(top == N-1)
        printf("Overflow State: can't add more elements into the stack\n");
    else{
        top+=1;
        stack[top] = x;
    }

    if(c==1) top1 = top; 
    else if(c==2) top2 = top;
    else top3 = top;
}

int pop(int c){
    int *stack, top;
    if(c==1){
        stack = stack1;
        top = top1;
    } 
    else{
        stack = stack2;
        top = top2;
    } 


    int x = -1;

    if(top == -1)
        printf("Underflow State: Stack already empty, can't remove any element\n");
    else{
        x = stack[top];
        top-=1;
    }


    if(c==1){
        top1--; 
    } 
    else if(c==2) {
        top2--; 
    }
    else top3 = top;

    return x;
}


void printStacks(){
    printf("Stack 1:\n");
    printf("TOP 1: %d\n", top1);
    int i = top1;
    while(i>=0){
        printf("%d ", stack1[i]);
        i--;
    }

    printf("\nStack 2:\n");
    printf("TOP 2: %d\n", top2);
    i = top2;
    while(i>=0){
        printf("%d ", stack2[i]);
        i--;
    }

    printf("\n");

}



qdr quad[1000];
extern int qc;

void quadr(char opr[], char op1[], char op2[], char res[]){
    strcpy(quad[qc].oper, opr);
    strcpy(quad[qc].op1, op1);
    strcpy(quad[qc].op2, op2);
    strcpy(quad[qc].res, res);
    strcpy(quad[qc].etq, "");

    qc++;
}

void ajouter_quad(int num_quad, int colon_quad, char val[]){
    if(colon_quad == 0) strcpy(quad[num_quad].oper, val);
    else if(colon_quad == 1) strcpy(quad[num_quad].op1, val);
    else if(colon_quad == 2) strcpy(quad[num_quad].op2, val);
    else if(colon_quad == 3) strcpy(quad[num_quad].res, val);
}



void afficher_qdr(){
    printf("\n\n\n\t\tLesQuadruplets\n\n");
    int i; 
    for(i=0;i<qc;i++){
        printf("\n %d - ( %s , %s , %s , %s )",i,quad[i].oper,quad[i].op1,quad[i].op2,quad[i].res); 
        printf("\n---------------------------------------------------\n"); 
    }
}




char* trim(char* val){
    if(strlen(val)>4){
        int s = strlen(val);
        return val + (s - 4);
    }
    return val;
}


int is_direct(char* op){
    if((op[0] >= 'A' && op[0] <= 'Z') || (op[0] >= 'a' && op[0] <= 'z')) return 0;
    return 1;
}


int is_array(char* op){
    return strstr(op, "[") != NULL;
}

void array_elements(char* op, char* arr, char* ind){
    int i = 0;
    while(op[i] != '['){
        arr[i] = op[i];
        i++;
    }
    arr[i] = '\0';

    i++;
    int j = 0;
    while(op[i+j] != ']'){
        ind[j] = op[i+j];
        j++;
    }
    ind[j] = '\0';
}


void arr_to_qsm(FILE* fptr, char* op){
    char arr[50], offset[50];
    array_elements(op, arr, offset);

    if(is_direct(offset)){
        char temp[50];
        sprintf(temp, "%x", atoi(offset));
        sprintf(offset, "%sh", temp); 
    }

    fprintf(fptr, "\tMOV SI, %s\n", offset);
    fprintf(fptr, "\tADD SI, SI\n");
    sprintf(op, "%s[SI]", arr);
}




int e = 0;
char* ax;

int in_acc(char* var, FILE* fptr){
    
    if(ax == NULL) return 0;

    if(strcmp(var, ax)==0){
        return 1;
    }
    else{
        fprintf(fptr, "\tMOV %s, AX\n", ax);
        ax = NULL;
        return 0;
    }
}


void qdr_to_asm(FILE* fptr, int i){

    if(ax != NULL && (strcmp(quad[i].oper, "+") == 0 || strcmp(quad[i].oper, "*") == 0) && strcmp(quad[i].op2, ax) == 0){
        char* temp = strdup(quad[i].op2);
        sprintf(quad[i].op2, "%s", quad[i].op1);
        sprintf(quad[i].op1, "%s", temp);
    }

    // if(ax != NULL && ((strcmp(quad[0].op1, ax) == 0 || strcmp(quad[0].op2, ax) == 0) || quad[i].oper[0] == 'B')){
    //     fprintf(fptr, "\tMOV %s, AX\n", ax);
    //     ax = NULL;
    // }

    char* op1 = strdup(quad[i].op1);
    char* op2 = strdup(quad[i].op2);
    char* res = strdup(quad[i].res);
    char* oper = strdup(quad[i].oper);
    char* etq = strdup(quad[i].etq);

    if(strcmp(etq, "") != 0){
        fprintf(fptr, "%s:\n", etq);
    }


    if(strcmp(oper, ":=") == 0){
        if(is_direct(op1)){
            char temp[50];
            sprintf(temp, "%x", atoi(op1));
            fprintf(fptr, "\tMOV %s, %sh\n", res, trim(temp));  
        }
        else{
            if(is_array(op1)){
                arr_to_qsm(fptr, op1);
                fprintf(fptr, "\tMOV AX, %s\n", op1);
                ax = NULL;
            }
            else{
                if(!in_acc(op1, fptr)){
                    fprintf(fptr, "\tMOV AX, %s\n", op1);
                }
                
            }

            if(is_array(res)){
                arr_to_qsm(fptr, res);
                fprintf(fptr, "\tMOV %s, AX\n", res);
            }
            else{
                in_acc("", fptr);
                fprintf(fptr, "\tMOV %s, AX\n", res);
                ax = NULL;
            }
        }
    }
    else if(strcmp(oper, "BR") == 0){
        int d = atoi(op1);

        fprintf(fptr, "\tJMP %s\n", quad[d].etq);

    }
    else if(strcmp(oper, "BNZ") == 0){
        int d = atoi(op1);
        
        if(is_direct(op2)){
            char temp[50];
            sprintf(temp, "%x", atoi(op2));
            sprintf(op2, "%sh", trim(temp));  
        }
        
        if(is_array(op2)){
            arr_to_qsm(fptr, op2);
        }

        if(in_acc(op2, fptr)){
            op2 = strdup("AX");
        }

        fprintf(fptr, "\tMOV BX, %s\n", op2);
        fprintf(fptr, "\tCMP BX, 0h\n");
        fprintf(fptr, "\tJNE %s\n", quad[d].etq);
    }
    else if(strcmp(oper, "BZ") == 0){
        int d = atoi(op1);

        if(is_direct(op2)){
            char temp[50];
            sprintf(temp, "%x", atoi(op2));
            sprintf(op2, "%sh", trim(temp));  
        }

        if(is_array(op2)){
            arr_to_qsm(fptr, op2);
        }

        if(in_acc(op2, fptr)){
            op2 = strdup("AX");
        }
        
        fprintf(fptr, "\tMOV BX, %s\n", op2);
        fprintf(fptr, "\tCMP BX, 0h\n");
        fprintf(fptr, "\tJE %s\n", quad[d].etq);
    }
    else if(strcmp(oper, "BGE") == 0){
        int d = atoi(op1);

        if(is_direct(op2)){
            char temp[50];
            sprintf(temp, "%x", atoi(op2));
            sprintf(op2, "%sh", trim(temp));  
        }
        if(is_direct(res)){
            char temp[50];
            sprintf(temp, "%x", atoi(res));
            sprintf(res, "%sh", trim(temp));  
        }

        if(is_array(op2)){
            arr_to_qsm(fptr, op2);
        }
        
        fprintf(fptr, "\tMOV AX, %s\n", op2);
        ax = NULL;

        if(is_array(res)){
            arr_to_qsm(fptr, res);
        }

        fprintf(fptr, "\tMOV BX, %s\n", res);
        fprintf(fptr, "\tCMP AX, BX\n");
        fprintf(fptr, "\tJAE %s\n", quad[d].etq);
    }
    else if(strcmp(oper, "BG") == 0){

        int d = atoi(op1);

        if(is_direct(op2)){
            char temp[50];
            sprintf(temp, "%x", atoi(op2));
            sprintf(op2, "%sh", trim(temp));  
        }
        if(is_direct(res)){
            char temp[50];
            sprintf(temp, "%x", atoi(res));
            sprintf(res, "%sh", trim(temp));  
        }

        if(is_array(op2)){
            arr_to_qsm(fptr, op2);
        }


        fprintf(fptr, "\tMOV AX, %s\n", op2);
        ax = NULL;

        if(is_array(res)){
            arr_to_qsm(fptr, res);
        }

        fprintf(fptr, "\tMOV BX, %s\n", res);
        fprintf(fptr, "\tCMP AX, BX\n");
        fprintf(fptr, "\tJA %s\n", quad[d].etq);
    }
    else if(strcmp(oper, "BLE") == 0){
        int d = atoi(op1);

        if(is_direct(op2)){
            char temp[50];
            sprintf(temp, "%x", atoi(op2));
            sprintf(op2, "%sh", trim(temp));  
        }
        if(is_direct(res)){
            char temp[50];
            sprintf(temp, "%x", atoi(res));
            sprintf(res, "%sh", trim(temp));  
        }

        if(is_array(op2)){
            arr_to_qsm(fptr, op2);
        }

        fprintf(fptr, "\tMOV AX, %s\n", op2);
        ax = NULL;

        if(is_array(res)){
            arr_to_qsm(fptr, res);
        }

        fprintf(fptr, "\tMOV BX, %s\n", res);
        fprintf(fptr, "\tCMP AX, BX\n");
        fprintf(fptr, "\tJBE %s\n", quad[d].etq);
    }
    else if(strcmp(oper, "BL") == 0){
        int d = atoi(op1);

        if(is_direct(op2)){
            char temp[50];
            sprintf(temp, "%x", atoi(op2));
            sprintf(op2, "%sh", trim(temp));  
        }
        if(is_direct(res)){
            char temp[50];
            sprintf(temp, "%x", atoi(res));
            sprintf(res, "%sh", trim(temp));  
        }

        if(is_array(op2)){
            arr_to_qsm(fptr, op2);
        }

        fprintf(fptr, "\tMOV AX, %s\n", op2);
        ax = NULL;

        if(is_array(res)){
            arr_to_qsm(fptr, res);
        }

        fprintf(fptr, "\tMOV BX, %s\n", res);
        fprintf(fptr, "\tCMP AX, BX\n");
        fprintf(fptr, "\tJB %s\n", quad[d].etq);
    }
    else if(strcmp(oper, "+") == 0 && strcmp(op2, "1") == 0 && strcmp(res, op1) == 0 && !is_array(res)){
        fprintf(fptr, "\tINC %s\n", res);
        ax = strdup(res);

    }
    else if(strcmp(oper, "+") == 0){

        if(is_direct(op1)) {
            char temp[50];
            sprintf(temp, "%xh", atoi(op1));
            op1 = strdup(temp);
        }
        if(is_direct(op2)) {
            char temp[50];
            sprintf(temp, "%xh", atoi(op2));
            op2 = strdup(temp);
        }

        if(is_array(op1)){
            arr_to_qsm(fptr, op1);
            fprintf(fptr, "\tMOV AX, %s\n", op1);
            ax = NULL;
        }
        else{
            if(!in_acc(op1, fptr)){
                fprintf(fptr, "\tMOV AX, %s\n", op1);
            }
        }

        

        if(is_array(op2)){
            arr_to_qsm(fptr, op2);
        }
        
        fprintf(fptr, "\tADD AX, %s\n", op2);

        if(is_array(res)){
            arr_to_qsm(fptr, res);
            fprintf(fptr, "\tMOV %s, AX\n", res);
        }
        else{
            ax = strdup(res);
        }

        
    }
    else if(strcmp(oper, "-") == 0){

        if(is_direct(op1)) {
            char temp[50];
            sprintf(temp, "%xh", atoi(op1));
            op1 = strdup(temp);
        }
        if(is_direct(op2)) {
            char temp[50];
            sprintf(temp, "%xh", atoi(op2));
            op2 = strdup(temp);
        }

        if(is_array(op1)){
            arr_to_qsm(fptr, op1);
            fprintf(fptr, "\tMOV AX, %s\n", op1);
            ax = NULL;
        }
        else{
            if(!in_acc(op1, fptr)){
                fprintf(fptr, "\tMOV AX, %s\n", op1);
            }
        }

        if(is_array(op2)){
            arr_to_qsm(fptr, op2);
        }
        
        fprintf(fptr, "\tSUB AX, %s\n", op2);

        if(is_array(res)){
            arr_to_qsm(fptr, res);
            fprintf(fptr, "\tMOV %s, AX\n", res);
        }
        else{
            ax = strdup(res);
        }
    }
    else if(strcmp(oper, "*") == 0){

        if(is_direct(op1)) {
            char temp[50];
            sprintf(temp, "%xh", atoi(op1));
            op1 = strdup(temp);
        }
        if(is_direct(op2)) {
            char temp[50];
            sprintf(temp, "%xh", atoi(op2));
            op2 = strdup(temp);
        }

        if(is_array(op1)){
            arr_to_qsm(fptr, op1);
            fprintf(fptr, "\tMOV AX, %s\n", op1);
            ax = NULL;
        }
        else{
            if(!in_acc(op1, fptr)){
                fprintf(fptr, "\tMOV AX, %s\n", op1);
            }
        }

        if(is_array(op2)){
            arr_to_qsm(fptr, op2);
        }
        
        fprintf(fptr, "\tMUL AX, %s\n", op2);

        if(is_array(res)){
            arr_to_qsm(fptr, res);
            fprintf(fptr, "\tMOV %s, AX\n", res);
        }
        else{
            ax = strdup(res);
        }
    }
    else if(strcmp(oper, "/") == 0){

        if(is_direct(op1)) {
            char temp[50];
            sprintf(temp, "%xh", atoi(op1));
            op1 = strdup(temp);
        }
        if(is_direct(op2)) {
            char temp[50];
            sprintf(temp, "%xh", atoi(op2));
            op2 = strdup(temp);
        }

        if(is_array(op1)){
            arr_to_qsm(fptr, op1);
            fprintf(fptr, "\tMOV AX, %s\n", op1);
            ax = NULL;
        }
        else{
            if(!in_acc(op1, fptr)){
                fprintf(fptr, "\tMOV AX, %s\n", op1);
            }
        }

        if(is_array(op2)){
            arr_to_qsm(fptr, op2);
        }
        
        fprintf(fptr, "\tDIV AX, %s\n", op2);

        if(is_array(res)){
            arr_to_qsm(fptr, res);
            fprintf(fptr, "\tMOV %s, AX\n", res);
        }
        else{
            ax = strdup(res);
        }
    }
}




void generer_etiquettes(){
    for(int i=0; i<qc; i++){
        if(quad[i].oper[0] == 'B'){
            int d = atoi(quad[i].op1);
            char temp[20];
            if(strcmp(quad[d].etq, "") == 0){
                sprintf(temp, "E%d", e);
                e++;
                sprintf(quad[d].etq, "%s", temp);
            }
        }
    }

}


void generer_asm(int tc){

    node* pgm_id;
    int x = tc;

   FILE *fptr = fopen("objet/pgm.asm","w");

   fprintf(fptr,"Pile segment stack ;\n\tdw 100 dup(?)\nPile ends\nDATA segment\n");
   for(int i=0; i<TABLE_SIZE; i++){
        if(tab[i] != NULL){
            node* t = tab[i];
            while(t != NULL){
                if(strcmp(t->elt.type, "") != 0){
                    if(strcmp(t->elt.code, "IDF") == 0){
                        if(strcmp(t->elt.type, "PROGRAM ID") == 0){
                            pgm_id = t;
                        }
                        else if(strcmp(t->elt.type, "STRUCT") == 0);
                        else if(t->elt.size > 0){
                            fprintf(fptr, "\t%-8s  DW\t%d\tDUP(?)\n", t->elt.name, t->elt.size);
                        }
                        else{
                            fprintf(fptr, "\t%-8s  DW\t?\n", t->elt.name);
                        }
                    }
                    else if(strcmp(t->elt.code, "CST") == 0 && strcmp(t->elt.val, "/NULL/") != 0){
                        char temp[50];
                        sprintf(temp, "%x", atoi(t->elt.val));
                        fprintf(fptr, "\t%-8s  %sh\n", t->elt.name, trim(temp));   
                    }
                }
                t = t->nxt;
            }
        }
    }
    
    for(int i=0; i<x; i++){
        char temp[50];
        sprintf(temp, "t%d", i);
        fprintf(fptr, "\t%-8s  DW\t?\n", temp);
    }

   fprintf(fptr, "DATA ends\nCODE SEGMENT\n\t%s:\n\tASSUME CS:CODE, DS:DATA\n\tMOV AX,DATA\n\tMOV DS, AX\n", pgm_id->elt.name);

    generer_etiquettes();

    for(int i=0; i<qc; i++){
        qdr_to_asm(fptr, i);
    }

   fprintf(fptr, "\tMOV AH, 4Ch\n\tINT 21h\nCODE ENDS\nEND %s", pgm_id->elt.name);
   fclose(fptr);
}



void removeQuad(int pos) {
  for (int i = pos; i < qc - 1; i++) {
    strcpy(quad[i].oper, quad[i+1].oper);
    strcpy(quad[i].op1, quad[i+1].op1);
    strcpy(quad[i].op2, quad[i+1].op2);
    strcpy(quad[i].res, quad[i+1].res);
  }
  qc--;
}

void Propagation_common_expressions() 
{
    char OPER[200];
    char OP1[200];
    char OP2[200];
    char RES[200];
    char RES2[200];

    int changed;

    printf("\n\t\t< === Propagation of common expressions : === >\n");
    for(int i=0; i<qc; i++) {
        if(strcmp(quad[i].oper ,":=") != 0 && strcmp(quad[i].oper ,"BZ") != 0 && strcmp(quad[i].oper ,"BR") != 0) {
            for(int j=i+1; j<qc; j++) {
                changed = 0;
                
                if(strcmp(quad[i].op1 ,quad[j].op1)== 0 && strcmp(quad[i].op2 ,quad[j].op2) == 0 && strcmp(quad[i].oper ,quad[j].oper) == 0) {
                    for(int k=i+1; k<j; k++) {
                        if(strcmp(quad[k].res, quad[i].op1) == 0 || strcmp(quad[k].res, quad[i].op2) == 0) changed = 1;
                    }
                    if(!changed) {
                        strcpy(quad[j].oper,":=");
                        strcpy(quad[j].op1,quad[i].res);
                        strcpy(quad[j].op2,"");

                        printf(" Redundancy : %d - %s := %d - %s \n",i,quad[j].res,j,quad[i].res);
                    }
                }
            }
        }
    }
}

void Propagation_copie() 
{
    int changed;

    printf("\n\t\t< === Propagation of copies : === >\n");
    for(int i=0; i<qc; i++) {
        if(strcmp(quad[i].oper ,":=") == 0) {
            for(int j=i+1; j<qc; j++) {
                changed = 0;
                
                if(strcmp(quad[i].res ,quad[j].op1)== 0 || strcmp(quad[i].res ,quad[j].op2) == 0) {
                    for(int k=i+1; k<j; k++) {
                        if(strcmp(quad[k].res, quad[i].res) == 0) changed = 1;
                    }
                    if(!changed) {
                        if(strcmp(quad[i].res ,quad[j].op1)== 0)  strcpy(quad[j].op1,quad[i].op1);
                        if(strcmp(quad[i].res ,quad[j].op2)== 0)  strcpy(quad[j].op2,quad[i].op1);
                        
                        printf(" Copie : %d - %s := %d - %s \n",i,quad[i].res,j,quad[i].op1);
                    }
                }
            }
        }
    }
}

void Elimination_useless_code() {
    int used;

    printf("\n\t\t< === Elimination of useless code : === >\n");
    int i = 0;
    while(i<qc) {
        if(!exists(quad[i].res)) {
           used = 0;
           for(int j=i+1; j<qc; j++) {
               if(strcmp(quad[i].res,quad[j].op1)== 0 || strcmp(quad[i].res,quad[j].op2) == 0) used = 1;
           } 
           if(!used) {
               printf(" Useless : %d - %s := %s \n",i,quad[i].res,quad[i].op1);
               removeQuad(i);
           }
           else {
               i++;
           }
        }
        else i++;
    }
}

void Optimization() {
    Propagation_common_expressions();
    Propagation_copie();
    Elimination_useless_code();
}