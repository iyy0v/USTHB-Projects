#include <stdio.h>

main()
{
/*
    int i,j,k,g,d,m,a,tr,t[25],c[4];

    printf(" Enter the array values : ");
    for(i=0;i<25;i++){scanf("%d",&t[i]);}

    printf("\n The array is :");
    for(i=0;i<25;i++){if(t[i]!=0) printf(" %d",t[i]);}

    j=0;g=0;d=0;m=0;a=0;

    for(i=1;i<5;i++) {
                        while (t[j]!=0 && j<25) {
                                                 switch (i) {
                                                             case 1: g++;break;
                                                             case 2: d++;break;
                                                             case 3: m++;break;
                                                             case 4: a++;break;
                                                            }
                                                 j++;
                                                }
                        j++;
                     }
    if( g<1 || g>3 || d<5 || d>8 || m<5 || m>8 || a<4 || a>6 || (g+d+m+a)!=22 ) printf("\n NOT VALIDE !");
    else printf("\n VALIDE !");

    k=1;
    c[0]=t[0];
    for(i=1;i<24;i++) {
                    if(t[i]==0) { c[k]=t[i+1];k++; }
                  }
    printf("\n The COMPRESSED array is :");
    for(i=0;i<4;i++){ printf (" %d",c[i]); }

    printf("\n Defensers numbers are :");
    i=0;tr=0;
    while (i<25 && tr==0) {
                        if(t[i]==c[1]) {
                                        while (t[i]!=0) {printf(" %d",t[i]);i++;}
                                        tr=1;
                                       }
                        i++;
    }
    */
    int x,s,n,i;

    printf(" Enter N= ");
    scanf("%d",&n);

    i=3;s=0;
    printf("\n Sn= ");
    while(i<=n) {
                 if(i<10) {x=i+(i-2)*10;}
                 else {x=i+(i-2)*100;}
                 s=s+x;
                 printf("%d%d + ",i-2,i);
                 i=i+4;
                }
    if(i>n && i<=n+2) {s=s+n*100;printf("%d00",i-2);}
    printf("\n Sn = %d",s);
}
