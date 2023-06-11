void gnome(int* T, int n){
    int i = 1;
    while(i<n){
        if(T[i] >= T[i-1]){
            i++;
        }
        else{
            swap(T, i, i-1);
            if(i>1) i--;

            if(n<=20){
                printf("Permutation entre %d et %d:\n> ", T[i-1] , T[i]);
                afficher(T, 0, n);
                printf("\n");
            }
        }
    }
}