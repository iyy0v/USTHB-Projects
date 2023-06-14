#include <stdio.h>

main ()
{
    int a,b,c,i,N;
    b=1;
    c=1;
    printf("Enter the N'th Un value of FIBONACCI sequence that you are looking for : ");
    scanf("%d",&N);
    if (i==1) printf("U1 = %d",c);
    else if (i==2) printf("U2 = %d",b);
    else {for (i=3;i<=N;i++) {
                                a=b+c;
                                c=b;
                                b=a;
                              }
         };
    printf("U%d = %d",N,a);
}
