
void bulles(int* T, int n){
    int changement = 1;
    while(changement == 1){
        changement = 0;
        for(int i=0; i<n-1; i++){
            if(T[i] > T[i+1]){
                int temp = T[i];
                T[i] = T[i+1];
                T[i+1] = temp;
                changement = 1;
            }
                    
        }
    }
}

void bullesOpt(int* T, int n){
    int changement = 1;
    int m = n-1;
    while(changement == 1){
        changement = 0;
        for(int i=0; i<m; i++){
            if(T[i] > T[i+1]){
                int temp = T[i];
                T[i] = T[i+1];
                T[i+1] = temp;
                changement = 1;
            }          
        }
        m--;
    }
}
