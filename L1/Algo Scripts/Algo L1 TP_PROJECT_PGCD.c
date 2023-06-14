#include <stdio.h>

main()
{
    int a,b,p,i;
    printf(" First, Enter A : ");
    scanf("%d",&a);
    printf(" Now, Enter B : ");
    scanf("%d",&b);

    for(i=1;i<=a && i<=b;i++) {if (a%i==0 && b%i==0) p=i;}

    printf(" PGCD( %d ; %d )= %d",a,b,p);

}
