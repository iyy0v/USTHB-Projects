#include <stdio.h>

main()
{
    int s,t,fl,fc,fb,i,j,k,c;
    printf(" Enter the size : ");
    scanf("%d",&s);
    int v[s][s];

    printf(" Now enter the known values (PS: if the case is blank enter 0 instead) : case (line,column)\n");
    for(i=0;i<s;i++){
                    for(j=0;j<s;j++) {
                                      printf(" case(%d , %d)= ",i+1,j+1);
                                      scanf("%d",&v[i][j]);
                                     }
                    }


    for(i=0;i<s;i++) {
                    for(j=0;j<s;j++) {
                                        fl=0; fc=0; fb=0; t=1;
                                        if(v[i][j]==0) {
                                                        while (t<=9) {
                                                                        for(k=0;k<j;k++) { if(t==v[i][k]) fl=1;}
                                                                        for(k=s;k>j;k--) { if(t==v[i][k]) fl=1;}
                                                                        for(k=0;k<i;k++) { if(t==v[k][j]) fc=1;}
                                                                        for(k=s;k>i;k--) { if(t==v[k][j]) fc=1;}
                                                                        if(fc==0 && fl==0 && fb==0) { v[i][j]=t; }
                                                                        t++;
                                                                     }
                                                       }
                                     }
                     }






    for(i=0;i<s;i++){
                    printf("\n");
                    for(j=0;j<s;j++) {
                                      printf(" %d |",v[i][j]);
                                     }
                    printf("\n");
                    for(k=0;k<s;k++) { printf("----");}
                    }

}
