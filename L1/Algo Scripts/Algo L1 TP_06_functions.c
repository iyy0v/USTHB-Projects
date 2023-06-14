#include <stdio.h>
#include <windows.h>
#include <time.h>

void intro ()
{
    printf("___________________________________________________ MultiSoft :___________________________________________________\n\n\n");
    printf("\n\n\t   Hi there! This is MultiSoft, it's a software that has Multiple Math tools to help you. Press 'ENTER' to continue...\n");
    printf("\n\t  First, You have to choose a tool between these tools :");
}

void menu ()
{
    printf("\n\t\t 1 <--- PGCD tool : To find the GREATEST COMMON DIVISOR (PGCD) of 2 numbers.");Sleep(700);
    printf("\n\t\t 2 <--- SPN tool : To calculate the SUM of PRIME NUMBERS '<= X' (you choose X).");Sleep(700);
    printf("\n\t\t 9 <--- To CLEAR the history.\n");Sleep(700);
    printf("\n\t\t 0 <--- To EXIT MultiSoft.\n");Sleep(700);
    printf("\n\t  Enter the number of the tool that you want to use : ");
}

int pgcd (int a, int b)
{
    int p,i;

    for(i=1;i<=a && i<=b;i++) {if (a%i==0 && b%i==0) p=i;}

    return p;
}

int spn (int N)
{
    int I,i,s,X;
            s=0;
            for (I=1;I<=N;I++) {
                                i=0;
                                for (X=1;X<=I;X++) {
                                                    if (I%X==0) {i++;}
                                                    }
                                if (i==2) {s=s+I;}
                                }
    return s;
}

main()
{
    int choice,i,run,a,b,N;
    run=1;
    intro();
    while (run==1) {
            menu();
            scanf("%d",&choice);
            printf("\n");
            switch (choice) {
                                case 0: run=0;
                                break;

                                case 9: system("cls");
                                break;

                                case 1: printf("___________________________________________________ PGCD Tool :___________________________________________________\n\n\n");
                                        printf("\n\t  First, Enter A : ");
                                        scanf("%d",&a);
                                        printf("\t  Now, Enter B : ");
                                        scanf("%d",&b);
                                        printf("___________________________________________________ Results :___________________________________________________\n\n\n");
                                        printf("\n\n\t  PGCD ( %d ; %d ) = %d\n\n",a,b,pgcd(a,b));
                                break;

                                case 2: printf("___________________________________________________ SPN Tool :___________________________________________________\n\n\n");
                                        N=-1;
                                        while (N<0){
                                                    printf("\n\t  Enter the number : ");
                                                    scanf("%d",&N);
                                                    };
                                        printf("___________________________________________________ Results :___________________________________________________\n\n\n");
                                        printf("\n\n\t  The SUM of prime numbers that is '<=%d' is = %d\n\n",N,spn(N));
                                break;

                                default: printf("\t\t\t Uknown value :( please read the hints carefully");
                                break;
                             }

}
}
