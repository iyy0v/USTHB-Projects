#include <stdio.h>

main()
{
    int i,I,x,n;
    float s,p,q;
    printf(" Enter N = ");
    scanf("%d",&n);
    printf("\n Enter X = ");
    scanf("%d",&x);
    s=0;
    p=-1;
    q=1;
    i=0;
    while (i<=n) {
                        for(I=0;I<=(i+1);I++)
                            { p=p*(-1); };
                        if (i>0) {for(I=0;I<=i;I++)
                                    q=q*x;}
                        else {q=1;};

                        s=s+(p/q);
                        i++;
                 };
    printf("\n Sn = %f",s);
}
