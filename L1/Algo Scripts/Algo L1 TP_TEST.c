#include <stdio.h>

main()
{
    int i,n,s;
    s=0;
    printf(" Enter N : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
                        s=s+i;
                      }
    printf(" La somme Sn = %d",s);

}
