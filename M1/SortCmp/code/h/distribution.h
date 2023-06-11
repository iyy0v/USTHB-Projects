#include <math.h>

int cle(int i, int j){

    int k1 = pow(10, j+1);
    int k2 = k1/10;

    int t = ((i % k1) - (i % k2))/k2;

    return t;
}

void triAux(int* T, int n, int i){
    int cles[10];
    int *resultat = (int*)malloc(n * sizeof(int));

    for(int k=0; k<10; k++) cles[k] = 0;

    for(int j=0; j<n; j++){
        cles[cle(T[j], i)]++;
    }

    for(int k=1; k<10; k++) cles[k] += cles[k-1];

    for(int j=n-1; j>=0; j--){
        resultat[cles[cle(T[j], i)] - 1] = T[j];
        cles[cle(T[j], i)]--;
    }

    for(int j=0; j<n; j++) T[j] = resultat[j];

}

void TriBase(int* T, int n, int k){
    for(int i=0; i<k; i++){
        triAux(T, n, i);
    }
}