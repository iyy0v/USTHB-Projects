#include <stdio.h>

main()
{
    int n1,n2,n3,i,j,k,t;
      do {
            printf(" Enter N1 : ");
            scanf("%d",&n1);
         } while(n1<0);
      printf(" Now enter the values of the first vector : ");
      int t1[n1];
      for(i=0;i<n1;i++) {scanf("%d",&t1[i]);}

      do {
            printf(" Enter N2 : ");
            scanf("%d",&n2);
         } while(n2<0);
      printf(" Now enter the values of the second vector : ");
      int t2[n2];
      for(i=0;i<n2;i++) {scanf("%d",&t2[i]);}

      if(n1<n2) n3=n1;
      else n3=n2;

      int t3[n3];
      k=0;
      for(i=0;i<n1;i++){
                        j=0;t=0;
                        while(j<n2 && t==0) {
                                             if(t1[i]==t2[j]){t3[k]=t1[i]; k++; t++;}
                                             j++;
                                            }
                       }
      printf("\n The common values are :");
      for(i=0;i<k;i++){printf(" %d",t3[i]);}
}
