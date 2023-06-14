#include <stdio.h>

main()
{
    char x,n;
    x=-128;
    while ( x<127 ) {printf(" %d - %c \n",x,x);x++;};
    printf(" %d - %c \n",x,x);

    top:
        printf("enter the char : ");
        scanf("%c",&n);
        printf(" \n %d - %c \n",n,n);
    goto top;
}
