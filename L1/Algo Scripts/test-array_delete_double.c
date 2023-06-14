#include <stdio.h>

main()
{
    int n,t[10],i,j,k,x;
    printf(" Enter the array values : ");
    for(i=0;i<10;i++){scanf("%d",&t[i]);}
    x=10;
    for(i=0;i<10;i++){for(j=9;i<j;j--){ if(t[i]==t[j]){
                                                      for(k=j;k<10;k++) {t[k]=t[k+1];}
                                                      x--;
                                                     }
                                     }
                    }
    printf("\n The new array is : ");
    for(i=0;i<x;i++){printf("%d ",t[i]);}

}
