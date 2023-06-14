#include <stdio.h>

main()
{
    int l,c,i,j,v,f;
    do {
        printf(" Enter the number of lines : ");
        scanf("%d",&l);
       } while(l<0);
    do {
        printf(" Enter the number of columns : ");
        scanf("%d",&c);
       } while(c<0);
    int t[l][c];
    printf("\n Now enter the values : \n");
    for(i=0;i<l;i++){ for(j=0;j<c;j++) { printf("\n Enter t[%d,%d]= ",i,j);scanf("%d",&t[i][j]); } }
     printf("\n Enter the value that you're looking for : ");
     scanf("%d",&v);

    f=0;i=0;j=0;
    while(i>=0 && i<l && f==0){ while(j>=0 && j<c && f==0) { if(t[i][j]==v) {f++;} j++; } i++; }
    i--;j--;

    if(f==1) {printf("\n The value was found t[%d,%d]= %d",i,j,t[i][j]);}
    else printf("\n The value was not found !");
}
