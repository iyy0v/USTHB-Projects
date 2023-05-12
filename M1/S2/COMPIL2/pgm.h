#include <string.h>
#include <stdio.h>
#include <stdbool.h>


typedef struct{
    char oper[100];
    char op1[100];
    char op2[100];
    char res[100];
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

    qc++;
}

void ajouter_quad(int num_quad, int colon_quad, char val[]){
    if(colon_quad == 0) strcpy(quad[num_quad].oper, val);
    else if(colon_quad == 1) strcpy(quad[num_quad].op1, val);
    else if(colon_quad == 2) strcpy(quad[num_quad].op2, val);
    else if(colon_quad == 3) strcpy(quad[num_quad].res, val);
}


char* getColumn(int n, int c){
    char val[50];
    if(c == 0) strcpy(val, quad[n].oper);
    else if(c == 1) strcpy(val, quad[n].op1);
    else if(c == 2) strcpy(val, quad[n].op2);
    else if(c == 3) strcpy(val, quad[n].res);

    return val;
}


void afficher_qdr(){
    printf("\n\n\n*********************LesQuadruplets***********************\n");
    int i; 
    for(i=0;i<qc;i++){
        printf("\n %d - ( %s , %s , %s , %s )",i,quad[i].oper,quad[i].op1,quad[i].op2,quad[i].res); 
        printf("\n---------------------------------------------------\n"); 
    }
}
