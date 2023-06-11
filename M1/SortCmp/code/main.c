#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "h2/utils.h"
#include "h2/bulles.h"
#include "h2/distribution.h"
#include "h2/gnome.h"
#include "h2/rapide.h"
#include "h2/tas.h"

char* options_1[100] = {"Tri a bulles", "Tri a bulles optimise", "Tri Gnome", "Tri par distribution", "Tri rapide", "Tri par tas", "Quitter"};
char* options_2[100] = {"Cas arbitraire", "Pire cas", "Meilleur cas"};



int afficherMenu(char* title, char** options, int d){

    system("cls");
    printf("\n%s\n", title);
    printf("\n");

    for(int i=0; i<d; i++){
        printf(" %d- %s\n", i+1, options[i]);
    }

    int c = -1;

    do{
        printf("\n\n> Choisir une option: ");
        scanf("%d", &c);
    } while(c>d);


    return c-1;
}


void executer(int a, int c, int n){
    

    int d = (a == 5) ? 1 : 0;

    int* T = (int*)malloc((n+d) * sizeof(int));


    switch(c){
        case 0:
            remplir(T, n+d);
            break;
        case 1:
            decroissant(T, n);
            break;
        case 2:
            croissant(T, n);
            break;
        default:
            remplir(T, n);
    }

   

    if(n<=20){
        printf("\n\n> Tableau avant tri:\n");
        afficher(T, d, n+d);
    }


    printf("\n\n\n> Execution de l'algorihtme %s...\n\n", options_1[a]);

    double time_spent = 0;
    clock_t begin = clock();

    switch(a){
        case 0:
            bulles(T, n);
            break;
        case 1:
            bullesOpt(T, n);
            break;
        case 2:
            gnome(T, n);
            break;
        case 3:
            TriBase(T, n, 9);
            break;
        case 4:
            rapide(T, 0, n-1, n);
            break;
        case 5:
            tas(T, n+1, n+1);
            break;
    }

    clock_t end = clock();
    time_spent += (double) (end - begin);
    time_spent = time_spent/CLOCKS_PER_SEC;

   printf("\n\n> Fin.", options_1[a]);


    if(n<=20){
        printf("\n\n\n> Tableau apres tri:\n");
        afficher(T, d, n+d);
    }

    printf("\n\n\n\n> Temps d'execution: %fs\n", time_spent);

}



void interface(){

    int c=0, c2=0, n=0;

    c = afficherMenu("Choisissez un algorithme a executer:", options_1, 7);

    switch(c){
        case 0:
            c2 = afficherMenu("Cas d'execution:", options_2, 3);
            break;
        case 1:
            c2 = afficherMenu("Cas d'execution:", options_2, 3);
            break;
        case 2:
            c2 = afficherMenu("Cas d'execution:", options_2, 3);
            break;
        case 4:
            c2 = afficherMenu("Cas d'execution:", options_2, 2);
            break;
        case 6:
            exit(0);
        default:
            c2 = 0;
    }



    system("cls");

    do{
        printf("\n\n> Donnez la valeur de N: ");
        scanf("%d", &n);
    } while(n<=0);

    system("cls");

    executer(c, c2, n);

    getchar();
    printf("\n\n\nAppuyez sur ENTRER pour continuer...");
    getchar();
}




int main(){

    while(1){
        interface();
    }



    return 0;
}