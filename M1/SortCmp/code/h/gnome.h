void gnome(int* T, int n){
    int i = 1;
    while(i<n){
        if(T[i] >= T[i-1]){
            i++;
        }
        else{
            swap(T, i, i-1);
            if(i>1) i--;
        }
    }
}