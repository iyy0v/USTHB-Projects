#include <stdio.h>


main()
{
    int i,j,t[10],x;
    printf(" Enter the variables : ");
    for(i=0;i<10;i++){scanf("%d",&t[i]);}
    printf(" The array before sorting : ");
    for(i=0;i<10;i++){printf("%d ",t[i]);}

    for(i=0;i<10;i++){for(j=9;i<j;j--){if(t[i]>t[j]) {x=t[i];
                                                      t[i]=t[j];
                                                      t[j]=x;
                                                       }
                                       }
                     }
    printf("\n The array after sorting : ");
    for(i=0;i<10;i++){printf("%d ",t[i]);}
}
