#include <stdio.h>
#include <windows.h>
#include <time.h>

int main()
{
    int a,b,i,n,p,s,x,I,N,X,d[99999],run,choice,t,f;

    char u,v,w,y,z1,z2,z3,z4,z5,z6;

    void Color(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

    /*for the interface*/
    u='!';u=u-70;
    v='!';v=v-35;
    w='!';w=w-112;
    y='!';y=y-113;
    z1='!';z1=z1-84;
    z2='!';z2=z2-103;
    z3='!';z3=z3-89;
    z4='!';z4=z4-88;
    z5='!';z5=z5-102;
    z6='!';z6=z6-101;
    system("mode con: cols=112 lines=48");
    system("color B0");
    for(i=0;i<112;i++){printf("%c",u);}
    for(i=0;i<49;i++){printf("%c",u);}
    printf("%c MULTISOFT %c",w,w);
    for(i=0;i<50;i++){printf("%c",u);}
    for(i=0;i<112;i++){printf("%c",u);}
    printf("\n\n\t   Hi there! This is MultiSoft, it's a software that has Multiple Math tools to help you. Press 'ENTER' to continue...\n");
    for(i=0;i<3;i++){
                        system("color 0B");Sleep(300);
                        system("color B0");Sleep(300);
                    }
    getchar();
    printf("\n\t  First, You have to choose a tool between these tools :");
    run=1;
    while(run==1)
    {
        system("color B0");sleep(1);
        printf("\n\n\t\t 1 <--- PERF tool : To check if a number is PERFECT or NOT PERFECT.");Sleep(700);
        printf("\n\t\t 2 <--- PGCD tool : To find the GREATEST COMMON DIVISOR (PGCD) of 2 numbers.");Sleep(700);
        printf("\n\t\t 3 <--- SPN tool : To calculate the SUM of PRIME NUMBERS '<= X' (you choose X).");Sleep(700);
        printf("\n\t\t 4 <--- DSP tool : To show the DIVISORS of a number and calculate their SUM & PRODUCT.\n");Sleep(700);
        printf("\n\t\t 9 <--- To CLEAR the history.\n");Sleep(700);
        printf("\n\t\t 0 <--- To EXIT MultiSoft.\n");Sleep(700);

        printf("\n\t  Enter the number of the tool that you want to use : ");
        scanf("%d",&choice);
        printf("\n");

        switch (choice)
        {

            case 0:
                run=0;
            break;

            case 9:
                system("cls");
                for(i=0;i<112;i++){printf("%c",u);}
                for(i=0;i<49;i++){printf("%c",u);}
                printf("%c MULTISOFT %c",w,w);
                for(i=0;i<50;i++){printf("%c",u);}
                for(i=0;i<112;i++){printf("%c",u);}
            break;

            case 1:
                for(i=0;i<24;i++){printf("%c ",v);}
                system("color 0B");
                printf("%c PERF tool %c ",w,w);
                system("color B0");
                for(i=0;i<25;i++){printf("%c ",v);}
                printf("\n\n\t  Enter the number : ");
                scanf("%d",&N);
                n=0;
                for (i=1;i<N;i++) {
                                    if (N%i==0) n=n+i;
                                  }
                system("color 2F");
                for(i=0;i<49;i++){printf("%c",z1);}
                printf("%c Results %c",y,y);
                for(i=0;i<52;i++){printf("%c",z1);}
                if (N==n) printf("\n\n\t  %d is a Perfect Number.",N);
                else printf("\n\t  %d is NOT a Perfect Number.\n\n",N);
                sleep(2);
                for(i=0;i<56;i++){printf("%c ",v);}
            break;

            case 2:
                for(i=0;i<24;i++){printf("%c ",v);}
                printf("%c PGCD tool %c ",w,w);
                for(i=0;i<25;i++){printf("%c ",v);}
                printf("\n\t  First, Enter A : ");
                scanf("%d",&a);
                printf("\t  Now, Enter B : ");
                scanf("%d",&b);
                for(i=1;i<=a && i<=b;i++) { if (a%i==0 && b%i==0) p=i; }
                system("color 2F");
                for(i=0;i<49;i++){printf("%c",z1);}
                printf("%c Results %c",y,y);
                for(i=0;i<52;i++){printf("%c",z1);}
                printf("\n\n\t  PGCD ( %d ; %d ) = %d\n\n",a,b,p);
                sleep(2);
                for(i=0;i<56;i++){printf("%c ",v);}
            break;

            case 3:
                for(i=0;i<25;i++){printf("%c ",v);}
                printf("%c SPN tool %c ",w,w);
                for(i=0;i<25;i++){printf("%c ",v);}
                N=-1;
                while (N<0){
                            printf("\n\t  Enter the number : ");
                            scanf("%d",&N);
                           };
                s=0;
                x=1;
                n=0;
                for (I=1;I<=N;I++) {
                                    i=0;
                                    for (X=1;X<=I;X++) {
                                                        if (I%X==0) {i++;}
                                                       }
                                    if (i==2) {s=s+I;n=n+1;}
                                   }
                system("color 2F");
                for(i=0;i<50;i++){printf("%c",z1);}
                printf("%c Results %c",y,y);
                for(i=0;i<51;i++){printf("%c",z1);}
                printf("\n\n\t  There is %d prime number that is '<=%d', Their totale is = %d\n\n",n,N,s);
                sleep(2);
                for(i=0;i<56;i++){printf("%c ",v);}
            break;

            case 4:
                for(i=0;i<25;i++){printf("%c ",v);}
                printf("%c DSP tool %c ",w,w);
                for(i=0;i<25;i++){printf("%c ",v);}
                printf("\n\t Enter the number : ");
                scanf("%d",&x);
                s=0;
                p=1;
                I=0;
                for(i=1;i<=x;i++) {
                                   if(x%i==0) {
                                               d[I]=i;
                                               s=s+i;
                                               p=p*i;
                                               I++;
                                              }
                                  }
                system("color 2F");
                for(i=0;i<50;i++){printf("%c",z1);}
                printf("%c Results %c",y,y);
                for(i=0;i<51;i++){printf("%c",z1);}
                printf("\n\n\t The number %d have %d Divisors which are : ",x,I);
                for(i=0;i<I;i++) { printf("%d ",d[i]);}
                printf("\n\t Their SUM is : %d",s);                               /* '%lli' is for 'long long signed integer (really big numbers) */
                printf("\n\t Their PRODUCT is :%d\n\n",p);
                sleep(2);
                for(i=0;i<56;i++){printf("%c ",v);}
            break;


            default:
                for(i=0;i<56;i++){printf("%c ",v);}
                Color(0,11);
                printf("\n\t\t\t %c",z4);
                for(i=0;i<55;i++){printf("%c",z1);}
                printf("%c\n",z5);
                printf("\t\t\t %c Uknown value :( please read the hints carefully",z2);
                system("color 4F");
                printf(" ! ");
                Color(0,11);
                system("color 4F");
                printf("! ");
                Color(0,11);
                system("color 4F");
                printf("! %c",z2);
                printf("\n\t\t\t %c",z3);
                for(i=0;i<55;i++){printf("%c",z1);}
                printf("%c\n",z6);
                sleep(2);
                system("color B0");
                for(i=0;i<56;i++){printf("%c ",v);}
            break;
        }
    }
        system("cls");
        for(i=0;i<112;i++){printf("%c",u);};Color(1,11);Sleep(500);
        printf("\n\t\t\t\t\t\t       *\n");Color(10,11);Sleep(500);
        printf("\t\t\t\t\t\t      ***\n");Color(12,11);Sleep(500);
        printf("\t\t\t\t\t\t     *****\n");Color(6,11);Sleep(500);
        printf("\t\t\t\t\t\t    *******\n");Color(1,11);Sleep(500);
        printf("\t\t\t\t\t\t   * Thank *\n ");Color(10,11);Sleep(500);
        printf("\t\t\t\t\t\t  **  You  **\n ");Color(12,11);Sleep(500);
        printf("\t\t\t\t\t\t ***  for  ***\n ");Color(6,11);Sleep(500);
        printf("\t\t\t\t\t\t**** using ****\n");Color(1,11);Sleep(500);
        printf("\t\t\t\t\t       *** MultiSoft ***\n ");Color(10,11);Sleep(500);
        printf("\t\t\t\t\t\t****  see  ****\n");Color(12,11);Sleep(500);
        printf("\t\t\t\t\t\t ***  you  ***\n");Color(6,11);Sleep(500);
        printf("\t\t\t\t\t\t  **  next **\n");Color(1,11);Sleep(500);
        printf("\t\t\t\t\t\t   *  time *\n");Color(10,11);Sleep(500);
        printf("\t\t\t\t\t\t    *******\n");Color(12,11);Sleep(500);
        printf("\t\t\t\t\t\t     *****\n");Color(6,11);Sleep(500);
        printf("\t\t\t\t\t\t      ***\n");Color(1,11);Sleep(500);
        printf("\t\t\t\t\t\t       *\n");Color(10,11);Sleep(500);
        for(i=0;i<112;i++){system("color BB");printf("%c",v);Color(0,11);}
        system("color B4");printf("\n\t\t\t\t     N");
        system("color B6");printf("A");
        system("color B2");printf("I");
        system("color B1");printf("T");
        system("color B4");printf(" ");
        system("color B6");printf("M");
        system("color B2");printf("I");
        system("color B1");printf("H");
        system("color B4");printf("O");
        system("color B6");printf("U");
        system("color B2");printf("B");
        system("color B1");printf(" ");
        system("color B4");printf("A");
        system("color B6");printf("Y");
        system("color B2");printf("O");
        system("color B1");printf("U");
        system("color B4");printf("B");Sleep(300);
        system("color B1");printf(" ");
        system("color B4");printf("&");Sleep(300);
        system("color B1");printf(" ");
        system("color B6");printf("M");
        system("color B2");printf("O");
        system("color B1");printf("H");
        system("color B4");printf("A");
        system("color B6");printf("M");
        system("color B2");printf("M");
        system("color B1");printf("E");
        system("color B4");printf("D");
        system("color B6");printf("I");
        system("color B2");printf(" ");
        system("color B1");printf("T");
        system("color B4");printf("A");
        system("color B6");printf("K");
        system("color B2");printf("F");
        system("color B1");printf("A");
        system("color B6");printf("R");
        system("color B1");printf("I");
        system("color B4");printf("N");
        system("color B6");printf("E");
        system("color B2");printf("S");sleep(1);
        system("color B2");printf("\n\t\t\t\t\t\t  P");
        system("color B1");printf("r");
        system("color B4");printf("o");
        system("color B6");printf("d");
        system("color B2");printf("u");
        system("color B1");printf("c");
        system("color B4");printf("t");
        system("color B6");printf("i");
        system("color B2");printf("o");
        system("color B1");printf("n\n");
        sleep(1);
        system("color B0");
        for(i=0;i<112;i++){Color(0,11);printf("%c",v);Color(0,11);}
        sleep(1);
        getchar();
        system("exit");
}
