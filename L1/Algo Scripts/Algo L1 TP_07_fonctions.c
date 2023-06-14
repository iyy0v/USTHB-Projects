#include <stdio.h>
#include <windows.h>
#include <time.h>

void menu ()
{
    printf("\n_______________________________________________________ Menu :_______________________________________________________\n\n\n");
    printf("\n\t\t 1 <--- Permut with adress.");Sleep(700);
    printf("\n\t\t 2 <--- Permut and print inside function.");Sleep(700);
    printf("\n\t\t 3 <--- Permut and print outside function.\n");Sleep(700);
    printf("\n\t\t 9 <--- To EXIT Program.\n");Sleep(700);
    printf("\n\t  Enter the number of the tool that you want to use : ");
}

void permut1(int *a, int *b)
{
    int c;
    c=*a; *a=*b; *b=c;
}

void permut2(int a, int b)
{
    int c;
    c=a; a=b; b=c;
    printf("\n Numbers after permutation : A = %d , B = %d",a,b);
}

void permut3(int a, int b)
{
    int c;
    c=a; a=b; b=c;
}

main ()
{
    int x,y,run,choice;
    run=1;
    while(run==1) {
            menu();
            scanf("%d",&choice);
    switch (choice)
        {

          case 1:   printf("___________________________________________________ Permut 1 :___________________________________________________\n\n\n");
                    printf("\n\t  First, Enter A : ");
                    scanf("%d",&x);
                    printf("\n\t  First, Enter B : ");
                    scanf("%d",&y);
                    printf("\n Numbers before permutation : A = %d , B = %d",x,y);
                    permut1 (&x,&y);
                    printf("\n Numbers after permutation : A = %d , B = %d",x,y);
                    break;

          case 2:   printf("___________________________________________________ Permut 2 :___________________________________________________\n\n\n");
                    printf("\n\t  First, Enter A : ");
                    scanf("%d",&x);
                    printf("\n\t  First, Enter B : ");
                    scanf("%d",&y);
                    printf("\n Numbers before permutation : A = %d , B = %d",x,y);
                    permut2 (x,y);
                    break;

          case 3:   printf("___________________________________________________ Permut 3 :___________________________________________________\n\n\n");
                    printf("\n\t  First, Enter A : ");
                    scanf("%d",&x);
                    printf("\n\t  First, Enter B : ");
                    scanf("%d",&y);
                    printf("\n Numbers before permutation : A = %d , B = %d",x,y);
                    permut3 (x,y);
                    printf("\n Numbers after permutation : A = %d , B = %d",x,y);
                    break;

          case 9:   run=0;
                    break;

          default:  printf("\n unknown choice !");
                    break;
        }
    }





}
