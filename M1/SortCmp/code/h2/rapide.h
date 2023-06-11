int partitionner(int* T, int d, int f, int x){
    int eltPivot = d;
    int i = d+1;
    int j = f;


    if(x <= 20){
        printf("\n\nPivot choisi: %d\n\n", T[eltPivot]);
    }


    while(i<j){
        while (i<=f && T[i]<=T[eltPivot]) i++;
        while (j>=d && T[j]>T[eltPivot]) j--;

        if(i<j){
            swap(T, i, j);
            j--;
            i++;
            if(x<=20){
                printf("\nPermutation entre %d et %d:\n> ", T[j+1], T[i-1]);
                afficher(T, d, f+1);
            }
        }
    }

    if(i==j){
        if(T[j] > T[eltPivot]) j--;
    }
    
    swap(T, j, eltPivot);

    return j;
}


void rapide(int* T, int p, int r, int x){
    int q;
    if(p<r){
        q = partitionner(T, p, r, x);

        if(x<=20){
            printf("\n\nAffichage apres partitionnement:\n> ");
            afficher(T, p, r+1);
        }

        rapide(T, p, q-1, x);
        rapide(T, q+1, r, x);
    }
}