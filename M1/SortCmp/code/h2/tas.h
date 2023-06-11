void remonter(int* T, int i, int n, int x){
    if(i==1) return;

    if(T[i] < T[i/2]){
        swap(T, i, i/2);

        if(x<=21){
            printf("\nPermutation entre %d et %d: \n> ", T[i], T[i/2]);
            afficher(T, 1, n);
        }

        remonter(T, i/2, n, x);
    }
}

void entasser(int* T, int n, int x){
    for(int i=1; i<n; i++){
        remonter(T, i, n, x);
    }
}



void redescendre(int* T, int i, int n, int x){
    int imin;

    if(2*i+1 >= n) return;
    if(T[2*i+1] < T[2*i]) imin = 2*i + 1;
    else imin = 2*i;

    if(T[imin] < T[i])
    {
        swap(T, i, imin);
        if(x<=21){
            printf("\nPermutation entre %d et %d: \n> ", T[i], T[imin]);
            afficher(T, 1, n);
        }

        redescendre(T, imin, n, x);
    }
}

void inverser(int* T, int n){
    for(int i=1, j=n-1; i<j; i++, j--){
        swap(T, i, j);
    }
}

void tas(int* T, int n, int x){

    if(x<=21){
       printf("\nCreation de la structure de l'arbre...\n> ");
    }

    entasser(T, n, x);

    if(x<=21){
        printf("\n\nArbre cree:\n> ");
        afficher(T, 1, n);
    }

    for(int i=n-1; i>0; i--){

        if(x<=21){
            printf("\nTirage du minimum...\n");
        }

        swap(T, 1, i);
        redescendre(T, 1, i, x);

        if(x<=21){
            printf("\n\nEtat du tableau apres tirage:\n> ");
            afficher(T, 1, n);
        }
    }

    if(T[2] > T[1]){
        swap(T, 1, 2);
    }

    inverser(T, n);

    if(x<=21){
        printf("\n\nTableau trie:\n> ");
        afficher(T, 1, n);
    }
}

