#include <stdio.h>

main()
{
    int t[5][5];
    int i,j,x;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        printf("\n");
        for(j=0;j<5;j++)
        {
            printf(" %d ",t[i][j]);
        }
    }
    j=0,
    i=0;
    while(i<5&&j<5)
    {
        x=t[1][j];
        t[1][j]=t[j][2];
        t[j][2]=x;
        j++;
        i++;
    }
    for(i=0;i<5;i++)
    {
        printf("\n");
        for(j=0;j<5;j++)
        {
            printf(" %d ",t[i][j]);
        }
    }

}
