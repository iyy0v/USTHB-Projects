#include <stdio.h>
#include <math.h>

main()
{
   int a,b,c;

    printf("enter A:");
    scanf("%d",&a);
    printf("enter B:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("A=%d\n",a);
    printf("B=%d",b);

}


/*
comments:

_ use "%_" even in printf
_ \n is used inside "" even if the "" isn't at the end of the line
_ \a for an ALERT
_ "float/%f" for ex: 6.9
_ "char/%c" for characteres



*/
