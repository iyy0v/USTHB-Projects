  #include <stdio.h>

  main()
  {
      int n,i,j,x;
      do {
            printf(" Enter N : ");
            scanf("%d",&n);
         } while(n<0);
      printf(" Now enter the values : ");
      int t[n];
      for(i=0;i<n;i++) {scanf("%d",&t[i]);}
      /*
      for(i=n;i>=0;i--){
                        if(t[i]==0){
                                    for(j=i;j<n;j++){t[j]=t[j+1];}
                                    n=n-1;
                                   }
                       }
      printf("\n The vector without 0's is :");
      for(i=0;i<n;i++){printf(" %d",t[i]);}
      */
      for(i=n-1;i>=0;i--) {
                        if(t[i]>0){
                                    x=t[i];
                                    for(j=i;j<n;j++){t[j]=t[j+1];}
                                    t[n-1]=x;
                        }
      }
      printf("\n The vector after sorting is :");
      for(i=0;i<n;i++){printf(" %d",t[i]);}
  }
