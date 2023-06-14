#include <stdio.h>

int X,i,a,c;
main ()
{
    printf("\n___________________________________________________ SOFTPRIME ___________________________________________________\n ");
    printf("Hi there! This is SoftPrime, it's a software that will help you to determinine whether a number is PRIME or NOT.\n\n");
    printf("\n First, please enter the number : ");
    scanf("%d",&X);
    printf("\n\n\n");
    printf("___________________________________________________ Results :___________________________________________________\n\n\n");
    i=2;
    c=0;
    while (i<X && c==0) {
                          a=X%i;
                          if (a==0) {c=1;}
                          i=i+1;
                        };
    if (c==0) printf("\n %d is PRIME.\n\n\n\n",X);
    else printf("\n %d is NOT PRIME.\n\n\n\n",X);
    printf("\n_________________________________________________________________________________________________________________\n ");
    printf("                                                    Thank\n ");
    printf("                                                     You\n ");
    printf("                                                     for\n ");
    printf("                                                    using\n ");
    printf("                                                  SoftPrime\n ");
    printf("________________________________________________________________________________________________________________\n ");
}



/* "||" and " && " is written inside the "( )" */
