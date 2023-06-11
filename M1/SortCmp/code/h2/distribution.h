#include <math.h>


int max(int* T, int n){
    int m = T[0];

    for(int i=1; i<n; i++){
        if(T[i] > m){
            m = T[i];
        }
    }
    int x = m;
    int i = 0;
    while(x>=1){
        i++;
        x = x / 10;
    }

    return i;
}

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

    if(n<=20){
        printf("\nCreation du tableau des cles\n> ");
        afficher(cles, 0, 10);
    }
   

    for(int k=1; k<10; k++) cles[k] += cles[k-1];


    if(n<=20){
        printf("\nIncrermentation des valeurs cles\n> ");
        afficher(cles, 0, 10);
        printf("\ncreation du tableau resultat...\n");
        for(int s=0; s<n; s++) resultat[s] = 0;
    }


    

    for(int j=n-1; j>=0; j--){
        resultat[cles[cle(T[j], i)] - 1] = T[j];
        cles[cle(T[j], i)]--;

        if(n<=20){
            printf("\nTableau resultat: \n> ");
            afficher(resultat, 0, n);

            printf("\nTableau des cles: \n> ");
            afficher(cles, 0, 10);
        }
        
    }

    for(int j=0; j<n; j++) T[j] = resultat[j];

}

void TriBase(int* T, int n, int k){
    int x = max(T, n);
    k = x;

    if(n<=20)
    printf("\n\nChoix de k: %d\n", k);


    for(int i=0; i<k; i++){
        if(n<=20){
            printf("\nTri selon le chiffre n%d du numero.\n", i+1);
        }

        triAux(T, n, i);

        if(n<=20){
            printf("\n\nApres TriAux k = %d:\n> ", i+1);
            afficher(T, 0, n);
        }
    }

}