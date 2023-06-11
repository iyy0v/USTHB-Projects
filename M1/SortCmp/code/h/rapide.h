int partitionner(int* T, int d, int f){
    int eltPivot = d;
    int i = d+1;
    int j = f;

    while(i<j){
        while (i<=f && T[i]<=T[eltPivot]) i++;
        while (j>=d && T[j]>T[eltPivot]) j--;

        if(i<j){
            swap(T, i, j);
            j--;
            i++;
        }
    }

    if(i==j){
        if(T[j] > T[eltPivot]) j--;
    }
    
    swap(T, j, eltPivot);

    return j;
}


void rapide(int* T, int p, int r){
    int q;
    if(p<r){
        q = partitionner(T, p, r);
        rapide(T, p, q-1);
        rapide(T, q+1, r);
    }
}