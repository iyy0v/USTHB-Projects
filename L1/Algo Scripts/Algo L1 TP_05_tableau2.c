#include <stdio.h>

main()
{   int x,i,j,h,t[10],t_p[10],t_i[10];
    j=0;
    h=0;
    for(i=0;i<5;i++) {do { printf("entrer un nombre pair : ");
         scanf("%d",&x);
        } while(x%2!=0);
        t_p[j]=x;j++;
    }
    j=0;
    for(i=0;i<5;i++) {do { printf("entrer un nombre impair : ");
         scanf("%d",&x);
        } while(x%2==0);
        t_i[j]=x;j++;
    }
    for(i=0;i<5;i++){t[i]=t_p[i];}
    for(i=0;i<5;i++){t[i+5]=t_i[i];}
    printf(" the numbers are : ");
    for(i=0;i<10;i++){printf("%d ",t[i]);}
}
