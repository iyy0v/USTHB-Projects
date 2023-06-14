#include <stdio.h>

main()
{
    int t[5],t_p[5],t_i[5],i,j,h;
    printf(" Enter the numbers : ");
    for(i=0;i<5;i++) {
                        scanf("%d",&t[i]);
                     }
    j=0;
    h=0;
    for(i=0;i<5;i++) {
                        if(t[i]%2==0) {t_p[j]=t[i];j++;}
                        else {t_p[j]=0;j++;}
                        if(t[i]%2!=0) {t_i[h]=t[i];h++;}
                        else {t_i[h]=0;h++;}
                     }
    printf(" Les nombres pairs sont : ");
    for(i=0;i<5;i++)
        {
         if(t_p[i]!=0){printf("%d ",t_p[i]);}
        }
    printf(" Les nombres impairs sont : ");
    for(h=0;h<5;h++)
        {
         if(t_i[h]!=0){printf("%d ",t_i[h]);}
        }
}
