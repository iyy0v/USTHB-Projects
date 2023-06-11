#include <stdio.h>
#include <math.h>
#include "utils.h"
#include "distribution.h"


int main(){
    int x;

    int T[10] = {1, 2, 1000, 5, 33, 10, 11, 11, 9, 77};

    x = max(T, 10);

    printf("%d\n", x);

    return 0;
}