#include <stdio.h>

main()
{
    int n,i,I;
    n=0;
    printf(" The perfect numbers which are '<=500' are :");
    for (I=1;I<500;I++) {
                        for(i=1;i<I;i++){
                                         if (I%i==0) {n=n+i;}
                                        }
                        if (I==n) {printf("%d ",I);}
                        }
}
