void remonter(int* T, int i, int n){
    if(i==1) return;

    if(T[i] < T[i/2]){
        swap(T, i, i/2);
        remonter(T, i/2, n);
    }
}

void entasser(int* T, int n){
    for(int i=1; i<n; i++){
        remonter(T, i, n);
    }
}



void redescendre(int* T, int i, int n){
    int imin;

    if(2*i+1 >= n) return;
    if(T[2*i+1] < T[2*i]) imin = 2*i + 1;
    else imin = 2*i;

    if(T[imin] < T[i])
    {
        swap(T, i, imin);
        redescendre(T, imin, n);
    }
}

void inverser(int* T, int n){
    for(int i=1, j=n-1; i<j; i++, j--){
        swap(T, i, j);
    }
}

void tas(int* T, int n){
    entasser(T, n);

    for(int i=n-1; i>0; i--){
        swap(T, 1, i);
        redescendre(T, 1, i);
    }

    if(T[2] > T[1]){
        swap(T, 1, 2);
    }

    inverser(T, n);
}

