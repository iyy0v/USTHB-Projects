#include <stdio.h>

int N,i,n;
main()
{
    printf("Enter the number : ");
    scanf("%d",&N);
    i=N;
    n=0;
    while (i>0) {n=n+i;i--;};
    printf("%d",n);
}

/*              OR :
int N,i,n;
main()
{
    printf("Enter the number : ");
    scanf("%d",&N);
    i=0;
    n=0;
    while (i<=N) {n=n+i;i++;};
    printf("%d",n);
}
*/
