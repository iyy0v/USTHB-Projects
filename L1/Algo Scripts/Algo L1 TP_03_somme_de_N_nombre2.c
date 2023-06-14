#include <stdio.h>

main()
{
    int i,n;
    float s,x;
    printf(" Enter how many numbers do you want to calculate : ");
    scanf("%d",&n);
    i=1;
    s=0;
    while (i<=n) {
                    printf(" Enter X%d = ",i);
                    scanf("%f",&x);
                    s=s+x;
                    i++;
                 }
    printf(" The solution is : %f",s);
}
