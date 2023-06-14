#include <stdio.h>

main()
{
    int n,i,j,t[10];
    printf(" Enter the values sorted : ");
    for(i=0;i<9;i++){scanf("%d",&t[i]);}
    printf("\n Now enter the value that you want to insert : ");
    scanf("%d",&n);

    for(i=0;i<10;i++){ if(t[i]>n){ for(j=9;i<j;j--) {t[j]=t[j-1];}
                                   t[i]=n;
                                   break;
                                 }
                     }
    printf("\n The new array is : ");
    for(i=0;i<10;i++) {printf("%d ",t[i]);}
}
