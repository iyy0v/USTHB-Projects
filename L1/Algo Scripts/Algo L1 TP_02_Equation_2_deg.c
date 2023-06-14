#include <stdio.h>
#include <math.h>
float a,b,c,d,D;
main()

{
    printf("\n_________________________________________________ SOFTLUTION _____________________________________________________\n ");
    printf(" Hi there! This is SoftLution, it's a software that will help you calculate solution for second degree equations...\n");
    printf("\n First, please enter a = ");
    scanf("%f",&a);
    printf("\n Now, please enter b = ");
    scanf("%f",&b);
    printf("\n Finaly, please enter c = ");
    scanf("%f",&c);
    D=b*b-4*a*c;
    d=sqrt(D);
    printf("\n\n");
    printf("_________________________________________________ Results : _______________________________________________________\n\n\n");
    if (a==0) {
              if (b==0 || c==0) printf(" There is NO SOLUTION !\n");
              else printf(" The solution is : X=%f\n",-c/b);
             }
    else if (D<0) printf(" There is NO SOLUTION !\n");
    else if (D==0) printf(" The solution is 1 solution : X=%f\n",-b/2*a);
    else if (D>0) printf(" There is 2 solutions : X1=%f , X2=%f\n",(-b-d)/(2*a) , (-b+d)/(2*a) );
    printf("\n\n");
    printf("\n_____________________________________________________________________________________________________________________\n ");
    printf("                                                 Thank\n ");
    printf("                                                  You\n ");
    printf("                                                  for\n ");
    printf("                                                 using\n ");
    printf("                                               SoftLution\n ");
    printf("________________________________________________________________________________________________________________________\n ");
}
