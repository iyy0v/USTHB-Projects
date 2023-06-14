#include <stdio.h>

main()
{
    int a,b,c;
    printf("\n_____________________________________________ SOFTMAX v2.0 _________________________________________________\n ");
    printf("Hi there! This is SoftMax, it's a software that will help you to detecte the Max & Min between 3 numbers...\n\n");
    printf("\n First, please enter the first number : ");
    scanf("%d",&a);
    printf("\n Now, please enter the second number : ");
    scanf("%d",&b);
    printf("\n Finaly, please enter the third number : ");
    scanf("%d",&c);
    printf("\n\n");
    printf("_______________________________________________Results :____________________________________________________\n\n\n");
    if (a<b)
        if (b<c) printf("\n The Max is : %d\n",c);
        else if (b>c) printf("\n The Max is : %d\n",b);
        else printf("\n There is no Max !\n");
    else if (a>b)
        if (a>c) printf("\n The Max is : %d\n",a);
        else if (a<c) printf("\n The Max is : %d\n",c);
        else printf("\n There is no Max !\n");
    else if (a==b)
        if (a<c) printf("\n The Max is : %d\n",c);
    else printf("\n There is no Max !\n");

      if (a<b)
        if (a<c) printf("\n The Min is : %d\n",a);
        else if (a>c) printf("\n The Min is : %d\n",c);
        else printf("\n There is no Min !\n");
    else if (a>b)
        if (b>c) printf("\n The Min is : %d\n",c);
        else if (b<c) printf("\n The Min is : %d\n",b);
        else printf("\n There is no Min !\n");
    else if (a==b)
        if (a>c) printf("\n The Min is : %d\n",c);
    else printf("\n There is no Min !\n");

    printf("\n\n");
    printf("\n____________________________________________________________________________________________________________\n ");
    printf("                                               Thank\n ");
    printf("                                                You\n ");
    printf("                                                for\n ");
    printf("                                               using\n ");
    printf("                                              SoftMax\n ");
    printf("                                               v2.0\n ");
    printf("____________________________________________________________________________________________________________\n ");
}
