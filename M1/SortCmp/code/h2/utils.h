#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void swap(int* T, int i, int j){
    int temp = T[i];
    T[i] = T[j];
    T[j] = temp;
}

void afficher(int* T, int d, int n){
    for(int i=d; i<n; i++) printf("%d ", T[i]);
    printf("\n");
}


void remplir(int* T, int n){
    srand(time(NULL));
    for(int i=0; i<n; i++) T[i] = rand() % n;
}


void croissant(int* T, int n){
    for(int i=0; i<n; i++) T[i] = i;
}


void decroissant(int* T, int n){
    for(int i=0; i<n; i++) T[i] = n-i;
}


float pire(float* val){
    float p = val[0];
    for(int i=1; i<5; i++){
        if(val[i] > p) p = val[i];
    }
    return p;
}

float moyenne(float* val){
    float m = 0;
    for(int i=0; i<5; i++){
        m += val[i];
    }
    return m/5;
}

float meilleur(float* val){
    float m = val[0];
    for(int i=1; i<5; i++){
        if(val[i] < m) m = val[i];
    }
    return m;
}
