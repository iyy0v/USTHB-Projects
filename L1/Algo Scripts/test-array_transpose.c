#include <stdio.h>

main()
{
        int l,c,i,j,k,x;
    do {
        printf(" Enter the number of lines : ");
        scanf("%d",&l);
       } while(l<0);
    do {
        printf(" Enter the number of columns : ");
        scanf("%d",&c);
       } while(c<0);
    if(l<c)x=c;
    else x=l;
    int t[x][x];
    printf("\n Now enter the values : \n");
    for(i=0;i<l;i++){ for(j=0;j<c;j++) { printf("\n Enter t[%d,%d]= ",i,j);scanf("%d",&t[i][j]); } }

    printf("\n The matrix before transposation is :\n");
    for(i=0;i<l;i++) { for(j=0;j<c;j++) { printf(" t[%d,%d] = %d |",i,j,t[i][j]); } printf("\n"); }

    printf("\n The matrix after transposation is :\n");
    for(j=0;j<c;j++) { for(i=0;i<l;i++) { printf(" t[%d,%d] = %d |",j,i,t[i][j]); } printf("\n"); }

}
