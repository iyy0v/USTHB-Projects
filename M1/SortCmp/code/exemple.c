#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "h/utils.h"
#include "h/bulles.h"
#include "h/distribution.h"
#include "h/gnome.h"
#include "h/rapide.h"
#include "h/tas.h"

int valeurs_1[40] = {2500, 5000, 7500, 10000, 12500, 15000, 17500, 20000, 22500, 25000, 27500, 30000, 32500, 35000, 37500, 40000, 42500, 45000, 47500, 50000, 52500, 55000, 57500, 60000, 62500, 65000, 67500, 70000, 72500, 75000, 77500, 80000, 82500, 85000, 87500, 90000, 92500, 95000, 97500, 100000};
int valeurs_2[40] = {250000,500000,750000,1000000,1250000,1500000,1750000,2000000,2250000,2500000,2750000,3000000,3250000,3500000,3750000,4000000,4250000,4500000,4750000,5000000,5250000,5500000,5750000,6000000,6250000,6500000,6750000,7000000,7250000,7500000,7750000,8000000,8250000,8500000,8750000,9000000,9250000,9500000,9750000,10000000};  

int nb_val = 40;
int debut = 0; 

int main(){

    int *valeurs = valeurs_1;

    int n;
    int* T = (int*)malloc(valeurs[39] * sizeof(int));

    char lines[nb_val][255];
   

    for(int k=debut; k<nb_val; k++){

        n = valeurs[k];
        printf("N = %d\n", n);

        
        float times[5] = {0, 0, 0, 0, 0};
        
        for(int j=0; j<5; j++){

            remplir(T, n);


            double time_spent = 0;
            clock_t begin = clock();


            gnome(T, n);


            clock_t end = clock();
            time_spent += (double) (end - begin);
            times[j] = time_spent/CLOCKS_PER_SEC;

            printf("%fs", times[j]);

            if(j==4) printf("\n");
            else printf(", ");

            }

            printf("Temps moyen d'execution: %fs.\n\n", moyenne(times));
            sprintf(lines[k], "%d,%f,%f,%f\n", n, moyenne(times), meilleur(times), pire(times));
    }


    FILE* fp = fopen("results/gnome.txt", "w");

    for(int i=debut; i<nb_val; i++){
        fprintf(fp, lines[i]);
    }

    fclose(fp);

    getchar();

    return 0;

}