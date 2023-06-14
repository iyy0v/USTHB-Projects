#include <stdio.h>

main()
{
    int N;
    float r;
    printf ("Entrer N=");
    scanf ("%d",&N);
    r=N%2;
    if (r==0)

        printf ("N est Pair");

    else
        printf ("N est Impair");

}
