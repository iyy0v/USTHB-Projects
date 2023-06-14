#include<stdio.h>
int main()
{
    int n,x,i;
    float s,m,b;
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter x\n");
    scanf("%d",&x);
    b=1; m=1; s=-1;
    for(i=1;i<=n;i++)
    {
        b=b*(-1);
        m=m*x;
        s=s-b/m;
    }
    printf("\n Sn = %f ",s);

    return 0;
}
