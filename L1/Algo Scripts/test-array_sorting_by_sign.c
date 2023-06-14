#include <stdio.h>

main()
{
    int n,i,j,x;
    printf(" Enter N : ");
    scanf("%d",&n);

    int t[n];

    printf(" Enter the %d values : ",n);
    for(i=0;i<n;i++){scanf("%d",&t[i]);}

    printf("\n The values before sorting are :");
    for(i=0;i<n;i++){printf(" %d",t[i]);}

    for(i=0;i<n;i++){
                     if(t[i]>0 && i!=n-1) {
                                 x=t[i];
                                 for(j=i;j<n-1;j++) t[j]=t[j+1];
                                 t[n-1]=x;
                                 i--;
                                }
                     if(t[i]<0 && i!=0) {
                                 x=t[i];
                                 j=i;
                                 while(j<=i && j>0) { t[j]=t[j-1]; j--; }
                                 t[0]=x;
                                 i++;
                                }
                                    printf("%d",t[i]);

                    }
    printf("\n The values after sorting are :");
    for(i=0;i<n;i++){printf(" %d",t[i]);}
}
