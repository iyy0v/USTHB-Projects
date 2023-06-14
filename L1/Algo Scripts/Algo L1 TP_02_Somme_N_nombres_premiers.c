#include <stdio.h>

int main()
{
int s,x,X,i,I,N,n;
float a;
N=-1;
while (N<0){
            printf("Enter the number : ");
            scanf("%d",&N);
           };
s=0;
x=1;
n=0;
for (I=1;I<=N;I++) {
                    i=0;
                    for (X=1;X<=I;X++) {
                                        a=I%X;
                                        if (a==0) {i++;};
                                       };
                    if (i==2) {s=s+I;n++};
                   };
printf(" There is %d prime number that is <=%d\n",n,N);
printf("Their totale is = %d",s);
}
