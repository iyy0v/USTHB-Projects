#include <stdio.h>
#include <math.h>

main()    /* STILL UNDER CONSTRUCTION */
{
    int P,i,X,s,N;
    float q;
    printf(" Enter the Binary number that you want to convert : ");
    scanf("%d",&N);
    P=0;
    q=2;
    while(q>=1) { q=N/pow(10,P);
                 P++;
               }
    i=0;
    s=0;
    for(i=P-1;i>=0;i--) {
                         q=N/pow(10,i);
                         X=((int)q)*pow(2,i);
                         s=s+X;
                         N=N-(int)(q*pow(10,i));
                         printf("%d-%d-%d ",N,X,(int)q);
                        }
    printf(" the Integer number is : %d",s);
}


// " continue; " restart the loop without exec the rest of the loop
// " pow(X,Y) " = " X**Y " with math.h header
