#include <stdio.h>
#include <windows.h>
#include <time.h>

main()
{
    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }
    int i,j,n,p,m;
    char u,v,w,y,z1,z2,z3,z4,z5,z6,s,Tmp[30],credits[53]="Ayoub NAIT MIHOUB & Oussama IGHIL GUITOUN Production.";

    u=-37; v=-33; w=-2; y=-36;
    z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    system("mode con: cols=112 lines=28");
    system("color B0");

    /*
    for(i=0;i<28;i++) {printf("%c%c%c%c",v,w,y,w);}
    for(i=0;i<28;i++) {printf("%c%c%c%c",y,w,v,w);}
    */

    /*
    printf("%c   %c",u,u); printf(" %c%c%c",u,v,v); printf(" %c",u); printf("   %c%c%c",u,v,v); printf(" %c%c%c",u,v,u); printf(" %c%c%c%c%c",u,w,y,w,u); printf(" %c%c%c",u,v,v);
    printf("\n%c %c %c",u,y,u); printf(" %c%c%c",u,v,v); printf(" %c",u); printf("   %c",u); printf("   %c %c",u,u); printf(" %c %c %c",u,v,u); printf(" %c%c%c",u,v,v);
    printf("\n%c%c%c%c%c",u,w,v,w,u); printf(" %c%c%c",u,y,y); printf(" %c%c%c",u,y,y); printf(" %c%c%c",u,y,y); printf(" %c%c%c",u,y,u); printf(" %c   %c",u,u); printf(" %c%c%c",u,y,y);
    */

    /*
    for(i=0;i<41;i++)
    {
        system("cls");
        if(i>0) printf("\n\n\t\t\t\t\t\t      %c%c%c",y,v,y);
        if(i>1) printf("\n\t\t\t\t\t\t    %c%c   %c%c",y,v,v,y);
        if(i>2) printf("\n\t\t\t\t\t\t  %c%c       %c%c",y,v,v,y);
        if(i>3) printf("\n\t\t\t\t\t\t%c%c           %c%c",y,v,v,y);
        if(i>4) printf("\n\t\t\t\t\t      %c%c\t       %c%c",y,v,v,y);
        if(i>5) printf("\n\t\t\t\t\t    %c%c\t\t\t %c%c",y,v,v,y);
        if(i>6) printf("\n\t\t\t\t\t  %c%c\t\t\t   %c%c",y,v,v,y);
        if(i>7) printf("\n\t\t\t\t\t%c%c\t\t\t     %c%c",y,v,v,y);
        if(i>8) printf("\n\t\t\t\t      %c%c\t\t\t       %c%c",y,v,v,y);
        if(i>9) printf("\n\t\t\t\t    %c%c\t\t\t\t\t %c%c",y,v,v,y);
        if(i>10) printf("\n\t\t\t\t  %c%c\t\t\t\t\t   %c%c",y,v,v,y);
        if(i>11) printf("\n\t\t\t\t%c%c\t\t\t\t\t     %c%c",y,v,v,y);
        if(i>12) printf("\n\t\t\t      %c%c\t\t\t\t\t       %c%c",y,v,v,y);
        if(i>13) printf("\n\t\t\t    %c%c\t\t\t\t\t\t\t %c%c",y,v,v,y);
        if(i>14) printf("\n\t\t\t  %c%c\t\t\t\t\t\t\t   %c%c",y,v,v,y);
        if(i>15) printf("\n\t\t\t%c%c\t\t\t\t\t\t\t     %c%c",y,v,v,y);
        if(i>16) printf("\n\t\t      %c%c\t\t\t\t\t\t\t       %c%c",y,v,v,y);
        if(i>17) printf("\n\t\t    %c%c\t\t\t\t\t\t\t\t\t %c%c",y,v,v,y);
        if(i>18) printf("\n\t\t  %c%c\t\t\t\t\t\t\t\t\t   %c%c",y,v,v,y);
        if(i>19) printf("\n\t\t%c%c\t\t\t\t\t\t\t\t\t     %c%c",y,v,v,y);
        if(i>20) printf("\n\t\t%c%c\t\t\t\t\t\t\t\t\t     %c%c",v,y,y,v);
        if(i>21) printf("\n\t\t  %c%c\t\t\t\t\t\t\t\t\t   %c%c",v,y,y,v);
        if(i>22) printf("\n\t\t    %c%c\t\t\t\t\t\t\t\t\t %c%c",v,y,y,v);
        if(i>23) printf("\n\t\t      %c%c\t\t\t\t\t\t\t       %c%c",v,y,y,v);
        if(i>24) printf("\n\t\t\t%c%c\t\t\t\t\t\t\t     %c%c",v,y,y,v);
        if(i>25) printf("\n\t\t\t  %c%c\t\t\t\t\t\t\t   %c%c",v,y,y,v);
        if(i>26) printf("\n\t\t\t    %c%c\t\t\t\t\t\t\t %c%c",v,y,y,v);
        if(i>27) printf("\n\t\t\t      %c%c\t\t\t\t\t       %c%c",v,y,y,v);
        if(i>28) printf("\n\t\t\t\t%c%c\t\t\t\t\t     %c%c",v,y,y,v);
        if(i>29) printf("\n\t\t\t\t  %c%c\t\t\t\t\t   %c%c",v,y,y,v);
        if(i>30) printf("\n\t\t\t\t    %c%c\t\t\t\t\t %c%c",v,y,y,v);
        if(i>31) printf("\n\t\t\t\t      %c%c\t\t\t       %c%c",v,y,y,v);
        if(i>32) printf("\n\t\t\t\t\t%c%c\t\t\t     %c%c",v,y,y,v);
        if(i>33) printf("\n\t\t\t\t\t  %c%c\t\t\t   %c%c",v,y,y,v);
        if(i>34) printf("\n\t\t\t\t\t    %c%c\t\t\t %c%c",v,y,y,v);
        if(i>35) printf("\n\t\t\t\t\t      %c%c\t       %c%c",v,y,y,v);
        if(i>36) printf("\n\t\t\t\t\t\t%c%c           %c%c",v,y,y,v);
        if(i>37) printf("\n\t\t\t\t\t\t  %c%c       %c%c",v,y,y,v);
        if(i>38) printf("\n\t\t\t\t\t\t    %c%c   %c%c",v,y,y,v);
        if(i>39) printf("\n\t\t\t\t\t\t      %c%c%c",v,y,v);
    }
    */
    /*
    for(i=0;i<21;i++)
    {
        system("cls");
        for(j=21;j>i;j--) {printf("\n");}
        if(i>0) printf("\n\n\t\t\t\t\t\t      %c%c%c",y,v,y);
        if(i>1) printf("\n\t\t\t\t\t\t    %c%c   %c%c",y,v,v,y);
        if(i>2) printf("\n\t\t\t\t\t\t  %c%c       %c%c",y,v,v,y);
        if(i>3) printf("\n\t\t\t\t\t\t%c%c           %c%c",y,v,v,y);
        if(i>4) printf("\n\t\t\t\t\t      %c%c\t       %c%c",y,v,v,y);
        if(i>5) printf("\n\t\t\t\t\t    %c%c\t\t\t %c%c",y,v,v,y);
        if(i>6) printf("\n\t\t\t\t\t  %c%c\t\t\t   %c%c",y,v,v,y);
        if(i>7) printf("\n\t\t\t\t\t%c%c\t\t\t     %c%c",y,v,v,y);
        if(i>8) printf("\n\t\t\t\t      %c%c\t\t\t       %c%c",y,v,v,y);
        if(i>9) printf("\n\t\t\t\t    %c%c\t\t\t\t\t %c%c",y,v,v,y);
        if(i>10) printf("\n\t\t\t\t  %c%c\t\t\t\t\t   %c%c",y,v,v,y);
        if(i>11) printf("\n\t\t\t\t%c%c\t\t\t\t\t     %c%c",y,v,v,y);
        if(i>12) printf("\n\t\t\t      %c%c\t\t\t\t\t       %c%c",y,v,v,y);
        if(i>13) printf("\n\t\t\t    %c%c\t\t\t\t\t\t\t %c%c",y,v,v,y);
        if(i>14) printf("\n\t\t\t  %c%c\t\t\t\t\t\t\t   %c%c",y,v,v,y);
        if(i>15) printf("\n\t\t\t%c%c\t\t\t\t\t\t\t     %c%c",y,v,v,y);
        if(i>16) printf("\n\t\t      %c%c\t\t\t\t\t\t\t       %c%c",y,v,v,y);
        if(i>17) printf("\n\t\t    %c%c\t\t\t\t\t\t\t\t\t %c%c",y,v,v,y);
        if(i>18) printf("\n\t\t  %c%c\t\t\t\t\t\t\t\t\t   %c%c",y,v,v,y);
        if(i>19) printf("\n\t\t%c%c\t\t\t\t\t\t\t\t\t     %c%c",y,v,v,y);
        if(i>19) printf("\n\t\t%c%c\t\t\t\t\t\t\t\t\t     %c%c",v,y,y,v);
        if(i>18) printf("\n\t\t  %c%c\t\t\t\t\t\t\t\t\t   %c%c",v,y,y,v);
        if(i>17) printf("\n\t\t    %c%c\t\t\t\t\t\t\t\t\t %c%c",v,y,y,v);
        if(i>16) printf("\n\t\t      %c%c\t\t\t\t\t\t\t       %c%c",v,y,y,v);
        if(i>15) printf("\n\t\t\t%c%c\t\t\t\t\t\t\t     %c%c",v,y,y,v);
        if(i>14) printf("\n\t\t\t  %c%c\t\t\t\t\t\t\t   %c%c",v,y,y,v);
        if(i>13) printf("\n\t\t\t    %c%c\t\t\t\t\t\t\t %c%c",v,y,y,v);
        if(i>12) printf("\n\t\t\t      %c%c\t\t\t\t\t       %c%c",v,y,y,v);
        if(i>11) printf("\n\t\t\t\t%c%c\t\t\t\t\t     %c%c",v,y,y,v);
        if(i>10) printf("\n\t\t\t\t  %c%c\t\t\t\t\t   %c%c",v,y,y,v);
        if(i>9) printf("\n\t\t\t\t    %c%c\t\t\t\t\t %c%c",v,y,y,v);
        if(i>8) printf("\n\t\t\t\t      %c%c\t\t\t       %c%c",v,y,y,v);
        if(i>7) printf("\n\t\t\t\t\t%c%c\t\t\t     %c%c",v,y,y,v);
        if(i>6) printf("\n\t\t\t\t\t  %c%c\t\t\t   %c%c",v,y,y,v);
        if(i>5) printf("\n\t\t\t\t\t    %c%c\t\t\t %c%c",v,y,y,v);
        if(i>4) printf("\n\t\t\t\t\t      %c%c\t       %c%c",v,y,y,v);
        if(i>3) printf("\n\t\t\t\t\t\t%c%c           %c%c",v,y,y,v);
        if(i>2) printf("\n\t\t\t\t\t\t  %c%c       %c%c",v,y,y,v);
        if(i>1) printf("\n\t\t\t\t\t\t    %c%c   %c%c",v,y,y,v);
        if(i>0) printf("\n\t\t\t\t\t\t      %c%c%c",v,y,v);
    }
    */
    /*
    for(i=0;i<21;i++)
    {
        system("cls");
        if(i>0) printf("\n\n\t\t\t\t\t\t      %c%c%c",y,v,y);
        else printf("\n");
        if(i>1) printf("\n\t\t\t\t\t\t    %c%c   %c%c",y,v,v,y);
        else printf("\n");
        if(i>2) printf("\n\t\t\t\t\t\t  %c%c       %c%c",y,v,v,y);
        else printf("\n");
        if(i>3) printf("\n\t\t\t\t\t\t%c%c           %c%c",y,v,v,y);
        else printf("\n");
        if(i>4) printf("\n\t\t\t\t\t      %c%c\t       %c%c",y,v,v,y);
        else printf("\n");
        if(i>5) printf("\n\t\t\t\t\t    %c%c\t\t\t %c%c",y,v,v,y);
        else printf("\n");
        if(i>6) printf("\n\t\t\t\t\t  %c%c\t\t\t   %c%c",y,v,v,y);
        else printf("\n");
        if(i>7) printf("\n\t\t\t\t\t%c%c\t\t\t     %c%c",y,v,v,y);
        else printf("\n");
        if(i>8) printf("\n\t\t\t\t      %c%c\t\t\t       %c%c",y,v,v,y);
        else printf("\n");
        if(i>9) printf("\n\t\t\t\t    %c%c\t\t\t\t\t %c%c",y,v,v,y);
        else printf("\n");
        if(i>10) printf("\n\t\t\t\t  %c%c\t\t\t\t\t   %c%c",y,v,v,y);
        else printf("\n");
        if(i>11) printf("\n\t\t\t\t%c%c\t\t\t\t\t     %c%c",y,v,v,y);
        else printf("\n");
        if(i>12) printf("\n\t\t\t      %c%c\t\t\t\t\t       %c%c",y,v,v,y);
        else printf("\n");
        if(i>13) printf("\n\t\t\t    %c%c\t\t\t\t\t\t\t %c%c",y,v,v,y);
        else printf("\n");
        if(i>14) printf("\n\t\t\t  %c%c\t\t\t\t\t\t\t   %c%c",y,v,v,y);
        else printf("\n");
        if(i>15) printf("\n\t\t\t%c%c\t\t\t\t\t\t\t     %c%c",y,v,v,y);
        else printf("\n");
        if(i>16) printf("\n\t\t      %c%c\t\t\t\t\t\t\t       %c%c",y,v,v,y);
        else printf("\n");
        if(i>17) printf("\n\t\t    %c%c\t\t\t\t\t\t\t\t\t %c%c",y,v,v,y);
        else printf("\n");
        if(i>18) printf("\n\t\t  %c%c\t\t\t\t\t\t\t\t\t   %c%c",y,v,v,y);
        else printf("\n");
        if(i>19) printf("\n\t\t%c%c\t\t\t\t\t\t\t\t\t     %c%c",y,v,v,y);
        else printf("\n");
        if(i>19) printf("\n\t\t%c%c\t\t\t\t\t\t\t\t\t     %c%c",v,y,y,v);
        else printf("\n");
        if(i>18) printf("\n\t\t  %c%c\t\t\t\t\t\t\t\t\t   %c%c",v,y,y,v);
        else printf("\n");
        if(i>17) printf("\n\t\t    %c%c\t\t\t\t\t\t\t\t\t %c%c",v,y,y,v);
        else printf("\n");
        if(i>16) printf("\n\t\t      %c%c\t\t\t\t\t\t\t       %c%c",v,y,y,v);
        else printf("\n");
        if(i>15) printf("\n\t\t\t%c%c\t\t\t\t\t\t\t     %c%c",v,y,y,v);
        else printf("\n");
        if(i>14) printf("\n\t\t\t  %c%c\t\t\t\t\t\t\t   %c%c",v,y,y,v);
        else printf("\n");
        if(i>13) printf("\n\t\t\t    %c%c\t\t\t\t\t\t\t %c%c",v,y,y,v);
        else printf("\n");
        if(i>12) printf("\n\t\t\t      %c%c\t\t\t\t\t       %c%c",v,y,y,v);
        else printf("\n");
        if(i>11) printf("\n\t\t\t\t%c%c\t\t\t\t\t     %c%c",v,y,y,v);
        else printf("\n");
        if(i>10) printf("\n\t\t\t\t  %c%c\t\t\t\t\t   %c%c",v,y,y,v);
        else printf("\n");
        if(i>9) printf("\n\t\t\t\t    %c%c\t\t\t\t\t %c%c",v,y,y,v);
        else printf("\n");
        if(i>8) printf("\n\t\t\t\t      %c%c\t\t\t       %c%c",v,y,y,v);
        else printf("\n");
        if(i>7) printf("\n\t\t\t\t\t%c%c\t\t\t     %c%c",v,y,y,v);
        else printf("\n");
        if(i>6) printf("\n\t\t\t\t\t  %c%c\t\t\t   %c%c",v,y,y,v);
        else printf("\n");
        if(i>5) printf("\n\t\t\t\t\t    %c%c\t\t\t %c%c",v,y,y,v);
        else printf("\n");
        if(i>4) printf("\n\t\t\t\t\t      %c%c\t       %c%c",v,y,y,v);
        else printf("\n");
        if(i>3) printf("\n\t\t\t\t\t\t%c%c           %c%c",v,y,y,v);
        else printf("\n");
        if(i>2) printf("\n\t\t\t\t\t\t  %c%c       %c%c",v,y,y,v);
        else printf("\n");
        if(i>1) printf("\n\t\t\t\t\t\t    %c%c   %c%c",v,y,y,v);
        else printf("\n");
        if(i>0) printf("\n\t\t\t\t\t\t      %c%c%c",v,y,v);
    }
    */
    /*
        system("cls");
        printf("\n\n\t\t\t\t\t\t      %c%c%c",y,v,y);Sleep(100);
        printf("\n\t\t\t\t\t\t    %c%c   %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t\t\t\t  %c%c       %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t\t\t\t%c%c           %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t\t\t      %c%c\t       %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t\t\t    %c%c\t\t\t %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t\t\t  %c%c\t\t\t   %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t\t\t%c%c\t\t\t     %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t\t      %c%c\t\t\t       %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t\t    %c%c\t\t\t\t\t %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t\t  %c%c\t\t\t\t\t   %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t\t%c%c\t\t\t\t\t     %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t      %c%c\t\t\t\t\t       %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t    %c%c\t\t\t\t\t\t\t %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t  %c%c\t\t\t\t\t\t\t   %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t\t%c%c\t\t\t\t\t\t\t     %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t      %c%c\t\t\t\t\t\t\t       %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t    %c%c\t\t\t\t\t\t\t\t\t %c%c",y,v,v,y);Sleep(100);
        printf("\n\t\t  %c%c\t\t\t%c   %c %c%c%c %c   %c%c%c %c%c%c %c%c%c%c%c %c%c%c\t\t\t   %c%c",y,v,u,u,u,v,v,u,u,v,v,u,v,u,u,w,y,w,u,u,v,v,v,y);Sleep(100);
        printf("\n\t\t%c%c\t\t\t%c %c %c %c%c%c %c   %c   %c %c %c %c %c %c%c%c\t\t\t     %c%c",y,v,u,y,u,u,v,v,u,u,u,u,u,v,u,u,v,v,v,y);Sleep(100);
        printf("\n\t\t%c%c\t\t\t%c%c%c%c%c %c%c%c %c%c%c %c%c%c %c%c%c %c   %c %c%c%c\t\t\t     %c%c",v,y,u,w,v,w,u,u,y,y,u,y,y,u,y,y,u,y,u,u,u,u,y,y,y,v);Sleep(100);
        printf("\n\t\t  %c%c\t\t\t\t\t\t\t\t\t   %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t    %c%c\t\t\t\t\t\t\t\t\t %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t      %c%c\t\t\t\t\t\t\t       %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t%c%c\t\t\t\t\t\t\t     %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t  %c%c\t\t\t\t\t\t\t   %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t    %c%c\t\t\t\t\t\t\t %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t      %c%c\t\t\t\t\t       %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t%c%c\t\t\t\t\t     %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t  %c%c\t\t\t\t\t   %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t    %c%c\t\t\t\t\t %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t      %c%c\t\t\t       %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t\t%c%c\t\t\t     %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t\t  %c%c\t\t\t   %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t\t    %c%c\t\t\t %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t\t      %c%c\t       %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t\t\t%c%c           %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t\t\t  %c%c       %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t\t\t    %c%c   %c%c",v,y,y,v);Sleep(100);
        printf("\n\t\t\t\t\t\t      %c%c%c",v,y,v);Sleep(100);
    */
    /*
        for(i=0;i<15;i++)
    {
        Sleep(25);system("cls");
        for(j=13;j>i;j--) {printf("\n");}
        if(i>0) {printf("\n\n\t\t\t\t\t\t      %c%c%c",y,u,y);}
        if(i>1) {printf("\n\t\t\t\t\t\t    %c%c",y,u);Color(0,0);printf("   ");Color(0,11);printf("%c%c",u,y);}
        if(i>2) {printf("\n\t\t\t\t\t\t  %c%c",y,u);Color(0,0);printf("       ");Color(0,11);printf("%c%c",u,y);}
        if(i>3) {printf("\n\t\t\t\t\t\t%c%c",y,u);Color(0,0);printf("           ");Color(0,11);printf("%c%c",u,y);}
        if(i>4) {printf("\n\t\t\t\t\t      %c%c",y,u);Color(0,0);printf("               ");Color(0,11);printf("%c%c",u,y);}
        if(i>5) {printf("\n\t\t\t\t\t    %c%c",y,u);Color(0,0);printf("                   ");Color(0,11);printf("%c%c",u,y);}
        if(i>6) {printf("\n\t\t\t\t\t  %c%c",y,u);Color(0,0);printf("                       ");Color(0,11);printf("%c%c",u,y);}
        if(i>7) {printf("\n\t\t\t\t\t%c%c",y,u);Color(0,0);printf("                           ");Color(0,11);printf("%c%c",u,y);}
        if(i>8) {printf("\n\t\t\t\t      %c%c",y,u);Color(0,0);printf("                               ");Color(0,11);printf("%c%c",u,y);}
        if(i>9) {printf("\n\t\t\t\t    %c%c",y,u);Color(0,0);printf("                                   ");Color(0,11);printf("%c%c",u,y);}
        if(i>10) {printf("\n\t\t\t\t  %c%c",y,u);Color(0,0);printf("                                       ");Color(0,11);printf("%c%c",u,y);}
        if(i>11) {printf("\n\t\t\t\t%c%c",y,u);Color(0,0);printf("    ");Color(0,11);printf("                                   ");Color(0,0);printf("    ");Color(0,11);printf("%c%c",u,y);}
        if(i>12) {printf("\n\t\t\t      %c%c",y,u);Color(0,0);printf("      ");Color(0,11);printf("  %c   %c %c%c%c %c   %c%c%c %c%c%c %c%c%c%c%c %c%c%c  ",u,u,u,v,v,u,u,v,v,u,v,u,u,w,y,w,u,u,v,v);Color(0,0);printf("      ");Color(0,11);printf("%c%c",u,y);}
        if(i>13) {printf("\n\t\t\t    %c%c",y,u);Color(0,0);printf("        ");Color(0,11);printf("  %c %c %c %c%c%c %c   %c   %c %c %c %c %c %c%c%c  ",u,y,u,u,v,v,u,u,u,u,u,v,u,u,v,v);Color(0,0);printf("        ");Color(0,11);printf("%c%c",u,y);}
        if(i>13) {printf("\n\t\t\t    %c%c",v,u);Color(0,0);printf("        ");Color(0,11);printf("  %c%c%c%c%c %c%c%c %c%c%c %c%c%c %c%c%c %c   %c %c%c%c  ",u,w,v,w,u,u,y,y,u,y,y,u,y,y,u,y,u,u,u,u,y,y);Color(0,0);printf("        ");Color(0,11);printf("%c%c",u,v);}
        if(i>12) {printf("\n\t\t\t      %c%c",v,u);Color(0,0);printf("      ");Color(0,11);printf("                                   ");Color(0,0);printf("      ");Color(0,11);printf("%c%c",u,v);}
        if(i>11) {printf("\n\t\t\t\t%c%c",v,u);Color(0,0);printf("                                           ");Color(0,11);printf("%c%c",u,v);}
        if(i>10) {printf("\n\t\t\t\t  %c%c",v,u);Color(0,0);printf("                                       ");Color(0,11);printf("%c%c",u,v);}
        if(i>9) {printf("\n\t\t\t\t    %c%c",v,u);Color(0,0);printf("                                   ");Color(0,11);printf("%c%c",u,v);}
        if(i>8) {printf("\n\t\t\t\t      %c%c",v,u);Color(0,0);printf("                               ");Color(0,11);printf("%c%c",u,v);}
        if(i>7) {printf("\n\t\t\t\t\t%c%c",v,u);Color(0,0);printf("                           ");Color(0,11);printf("%c%c",u,v);}
        if(i>6) {printf("\n\t\t\t\t\t  %c%c",v,u);Color(0,0);printf("                       ");Color(0,11);printf("%c%c",u,v);}
        if(i>5) {printf("\n\t\t\t\t\t    %c%c",v,u);Color(0,0);printf("                   ");Color(0,11);printf("%c%c",u,v);}
        if(i>4) {printf("\n\t\t\t\t\t      %c%c",v,u);Color(0,0);printf("               ");Color(0,11);printf("%c%c",u,v);}
        if(i>3) {printf("\n\t\t\t\t\t\t%c%c",v,u);Color(0,0);printf("           ");Color(0,11);printf("%c%c",u,v);}
        if(i>2) {printf("\n\t\t\t\t\t\t  %c%c",v,u);Color(0,0);printf("       ");Color(0,11);printf("%c%c",u,v);}
        if(i>1) {printf("\n\t\t\t\t\t\t    %c%c",v,u);Color(0,0);printf("   ");Color(0,11);printf("%c%c",u,v);}
        if(i>0) {printf("\n\t\t\t\t\t\t      %c%c%c",v,u,v);Color(0,11);}
    }
    */

    /*
    for(i=0;i<21;i++)
    {
        Sleep(25);system("cls");
        if(i>0) printf("\n\n\t\t\t\t\t\t      %c%c%c",y,v,y);
        else printf("\n");
        if(i>1) printf("\n\t\t\t\t\t\t    %c%c   %c%c",y,v,v,y);
        else printf("\n");
        if(i>2) printf("\n\t\t\t\t\t\t  %c%c       %c%c",y,v,v,y);
        else printf("\n");
        if(i>3) printf("\n\t\t\t\t\t\t%c%c           %c%c",y,v,v,y);
        else printf("\n");
        if(i>4) printf("\n\t\t\t\t\t      %c%c\t       %c%c",y,v,v,y);
        else printf("\n");
        if(i>5) printf("\n\t\t\t\t\t    %c%c\t\t\t %c%c",y,v,v,y);
        else printf("\n");
        if(i>6) printf("\n\t\t\t\t\t  %c%c\t\t\t   %c%c",y,v,v,y);
        else printf("\n");
        if(i>7) printf("\n\t\t\t\t\t%c%c\t\t\t     %c%c",y,v,v,y);
        else printf("\n");
        if(i>8) printf("\n\t\t\t\t      %c%c\t\t\t       %c%c",y,v,v,y);
        else printf("\n");
        if(i>9) printf("\n\t\t\t\t    %c%c\t\t\t\t\t %c%c",y,v,v,y);
        else printf("\n");
        if(i>10) printf("\n\t\t\t\t  %c%c\t\t\t\t\t   %c%c",y,v,v,y);
        else printf("\n");
        if(i>11) printf("\n\t\t\t\t%c%c\t\t\t\t\t     %c%c",y,v,v,y);
        else printf("\n");
        if(i>12) printf("\n\t\t\t      %c%c\t\t\t\t\t       %c%c",y,v,v,y);
        else printf("\n");
        if(i>13) printf("\n\t\t\t    %c%c\t\t\t\t\t\t\t %c%c",y,v,v,y);
        else printf("\n");
        if(i>14) printf("\n\t\t\t  %c%c\t\t\t\t\t\t\t   %c%c",y,v,v,y);
        else printf("\n");
        if(i>15) printf("\n\t\t\t%c%c\t\t\t\t\t\t\t     %c%c",y,v,v,y);
        else printf("\n");
        if(i>16) printf("\n\t\t      %c%c\t\t\t\t\t\t\t       %c%c",y,v,v,y);
        else printf("\n");
        if(i>17) printf("\n\t\t    %c%c\t\t\t\t\t\t\t\t\t %c%c",y,v,v,y);
        else printf("\n");
        if(i>18) printf("\n\t\t  %c%c\t\t\t%c   %c %c%c%c %c   %c%c%c %c%c%c %c%c%c%c%c %c%c%c\t\t\t   %c%c",y,v,u,u,u,v,v,u,u,v,v,u,v,u,u,w,y,w,u,u,v,v,v,y);
        else printf("\n");
        if(i>19) printf("\n\t\t%c%c\t\t\t%c %c %c %c%c%c %c   %c   %c %c %c %c %c %c%c%c\t\t\t     %c%c",y,v,u,y,u,u,v,v,u,u,u,u,u,v,u,u,v,v,v,y);
        else printf("\n");
        if(i>19) printf("\n\t\t%c%c\t\t\t%c%c%c%c%c %c%c%c %c%c%c %c%c%c %c%c%c %c   %c %c%c%c\t\t\t     %c%c",v,y,u,w,v,w,u,u,y,y,u,y,y,u,y,y,u,y,u,u,u,u,y,y,y,v);
        else printf("\n");
        if(i>18) printf("\n\t\t  %c%c\t\t\t\t\t\t\t\t\t   %c%c",v,y,y,v);
        else printf("\n");
        if(i>17) printf("\n\t\t    %c%c\t\t\t\t\t\t\t\t\t %c%c",v,y,y,v);
        else printf("\n");
        if(i>16) printf("\n\t\t      %c%c\t\t\t\t\t\t\t       %c%c",v,y,y,v);
        else printf("\n");
        if(i>15) printf("\n\t\t\t%c%c\t\t\t\t\t\t\t     %c%c",v,y,y,v);
        else printf("\n");
        if(i>14) printf("\n\t\t\t  %c%c\t\t\t\t\t\t\t   %c%c",v,y,y,v);
        else printf("\n");
        if(i>13) printf("\n\t\t\t    %c%c\t\t\t\t\t\t\t %c%c",v,y,y,v);
        else printf("\n");
        if(i>12) printf("\n\t\t\t      %c%c\t\t\t\t\t       %c%c",v,y,y,v);
        else printf("\n");
        if(i>11) printf("\n\t\t\t\t%c%c\t\t\t\t\t     %c%c",v,y,y,v);
        else printf("\n");
        if(i>10) printf("\n\t\t\t\t  %c%c\t\t\t\t\t   %c%c",v,y,y,v);
        else printf("\n");
        if(i>9) printf("\n\t\t\t\t    %c%c\t\t\t\t\t %c%c",v,y,y,v);
        else printf("\n");
        if(i>8) printf("\n\t\t\t\t      %c%c\t\t\t       %c%c",v,y,y,v);
        else printf("\n");
        if(i>7) printf("\n\t\t\t\t\t%c%c\t\t\t     %c%c",v,y,y,v);
        else printf("\n");
        if(i>6) printf("\n\t\t\t\t\t  %c%c\t\t\t   %c%c",v,y,y,v);
        else printf("\n");
        if(i>5) printf("\n\t\t\t\t\t    %c%c\t\t\t %c%c",v,y,y,v);
        else printf("\n");
        if(i>4) printf("\n\t\t\t\t\t      %c%c\t       %c%c",v,y,y,v);
        else printf("\n");
        if(i>3) printf("\n\t\t\t\t\t\t%c%c           %c%c",v,y,y,v);
        else printf("\n");
        if(i>2) printf("\n\t\t\t\t\t\t  %c%c       %c%c",v,y,y,v);
        else printf("\n");
        if(i>1) printf("\n\t\t\t\t\t\t    %c%c   %c%c",v,y,y,v);
        else printf("\n");
        if(i>0) printf("\n\t\t\t\t\t\t      %c%c%c",v,y,v);
    }
    */

    /*
    for(i=0;i<112;i++) printf("%c",u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u);             printf(" %c%c%c%c%c",u,w,y,w,u); printf("  %c%c%c%c",u,v,v,v); printf("  %c%c  %c",u,u,u);   printf("  %c  %c",u,u);          printf("\t\t\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t  %c%c    ",u,u,u,u); printf(" %c %c %c",u,v,u);       printf("  %c%c%c%c",u,v,v,v); printf("  %c %c %c",u,u,u,u); printf("  %c  %c",u,u);          printf("     %c%c\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u);             printf(" %c   %c",u,u);          printf("  %c%c%c%c",u,y,y,y); printf("  %c  %c%c",u,u,u);   printf("  %c%c%c%c",u,y,y,u);    printf("\t\t\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t",u,u); printf("These are all the availble choices in the current version of LibManager :");                                                              printf("\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t  %c  ",u,u,w); printf("'N' <%c%c%c%c%c To ADD New elements (Authors / Books).",z2,z2,z2,z2,z2);                                                      printf("\t\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t  %c  ",u,u,w); printf("'M' <%c%c%c%c%c To MODIFY Existing elements (Authors / Books).",z2,z2,z2,z2,z2);                                              printf("\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t  %c  ",u,u,w); printf("'D' <%c%c%c%c%c To DELETE Existing elements (Authors / Books).",z2,z2,z2,z2,z2);                                              printf("\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t  %c  ",u,u,w); printf("'I' <%c%c%c%c%c To show INFORMATIONS about the Existing elements (Authors / Books).",z2,z2,z2,z2,z2);                         printf("   %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t  %c  ",u,u,w); printf("'Q' <%c%c%c%c%c To QUIT LibManager.",z2,z2,z2,z2,z2);                                                                         printf("\t\t\t\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t",u,u); printf("Choose your choice by Pressing the correspondent key.");                                                                                  printf("\t\t\t\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    sleep(5);
    system("mode con: cols=112 lines=40");
    */

    /*
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t",u,u); printf("What Type of elements do you want to ADD ?");                                                                                             printf("\t\t\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t  %c  ",u,u,u); printf("'B' <%c%c%c A Book.",z2,z2,z2); printf("  %c\t\t\t\t%c  ",u,u); printf("'A' <%c%c%c An Author.",z2,z2,z2);                      printf("  %c\t      %c%c",u,u,u);
    printf("\n%c%c\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<6;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'R' <%c%c%c To RETURN to the Menu.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'Q' <%c%c%c To QUIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    for(i=0;i<112;i++) printf("%c",u);sleep(5);
    */

    /*
    system("mode con: cols=50 lines=11");
    Color(15,4); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u); Color(0,11);
    Color(15,4); printf("\n%c%c                                              %c%c",u,u,u,u); Color(0,11);
    Color(15,4); printf("\n%c%c                                              %c%c",u,u,u,u); Color(0,11);
    Color(15,4); printf("\n%c%c      Are you sure that you want to EXIT ?    %c%c",u,u,u,u); Color(0,11);
    Color(15,4); printf("\n%c%c                                              %c%c",u,u,u,u); Color(0,11);
    Color(15,4); printf("\n%c%c                                              %c%c",u,u,u,u); Color(0,11);
    Color(15,4); printf("\n%c%c         %c%c%c%c%c%c%c%c%c         %c%c%c%c%c%c%c%c%c          %c%c",u,u,z5,z2,z2,z2,z2,z2,z2,z2,z3,z5,z2,z2,z2,z2,z2,z2,z2,z3,u,u); Color(0,11);
    Color(15,4); printf("\n%c%c         %c [Y]es %c         %c [N]o  %c          %c%c",u,u,z1,z1,z1,z1,u,u); Color(0,11);
    Color(15,4); printf("\n%c%c         %c%c%c%c%c%c%c%c%c         %c%c%c%c%c%c%c%c%c          %c%c",u,u,z6,z2,z2,z2,z2,z2,z2,z2,z4,z6,z2,z2,z2,z2,z2,z2,z2,z4,u,u); Color(0,11);
    Color(15,4); printf("\n%c%c                                              %c%c",u,u,u,u); Color(0,11);
    Color(15,4); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u); Color(0,11);
    */

    /*
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t     ",u,u); printf(" No book was found under that title !"); printf("\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf(" 'M' <%c%c%c To Modify Another Book. ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'R' <%c%c%c To RETURN to the Menu.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'Q' <%c%c%c To QUIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    */

    /*
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t     ",u,u); printf(" No Book was found under that name !"); printf("\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf(" 'R' <%c%c%c To return to last page. ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    */

    /*
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t   %c",u,u,u); Color(11,0); printf("'S' <%c%c%c To SEARCH for a Specific Author.",z2,z2,z2); Color(0,11); printf("%c  %c",u,u); Color(11,0); printf("'L' <%c%c%c To show a LIST of All Registered Authors.",z2,z2,z2);Color(0,11); printf("%c  %c%c",u,u,u);
    printf("\n%c%c\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<6;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'R' <%c%c%c To RETURN to the Menu.  ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'Q' <%c%c%c To QUIT LibManager. ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    for(i=0;i<112;i++) printf("%c",u);
    */

    /*
    system("mode con: cols=65 lines=5");
    system("color F0");
    Color(0,11);
    printf("                                                                 Enter the book's title in the 'SEARCH BAR', then hit 'Enter'.                                                                            ");
    Color(15,0);printf(" Search                                                   \n");
    Color(0,11);printf("       "); Color(0,15); printf(" ");
    scanf(" %s",&s);
    */

    /*
    for(i=0;i<56;i++)
    {
        system("cls");
        printf("\n\n\n\n\n");
        if(i>=0)
        {
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
        }

        if(i>=1)
        {
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
                for(j=0;j<i-1;j++) {printf(" ");} printf("%c",u); for(j=0;j<112-2*i+2;j++) {printf(" ");} printf("%c\n",u);
        }
        Sleep(100);
        Sleep(100);

    }
    */

    /*
    printf("\n\n");
    for(i=0;i<28;i++)
    {
        system("cls");
        printf("\n\n");
        for(j=0;j<28-i;j++) {printf("\n");}
        if(i>1) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf("\n");}
        if(i>2) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>3) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>4) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>5) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>6) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>7) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>8) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>9) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>10) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);}
        if(i>11) {printf("\n");}
        if(i>12) {printf("\n");}
        if(i>13) {printf("\n");}
        if(i>14) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>15) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>16) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" "   );printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");printf("    ");printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("\n");}
        if(i>17) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("\n");}
        if(i>18) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>19) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>20) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("\n");}
        if(i>21) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" "   );printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("\n");}
        if(i>22) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>23) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);}

        Sleep(200);
    }

    sleep(3);

    for(i=28;i>0;i--)
    {
        system("cls");
        printf("\n\n");
        for(j=0;j<28-i;j++) {printf("\n");}
        if(i>1) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf("\n");}
        if(i>2) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>3) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>4) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>5) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>6) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>7) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>8) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>9) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>10) {printf("\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);}
        if(i>11) {printf("\n");}
        if(i>12) {printf("\n");}
        if(i>13) {printf("\n");}
        if(i>14) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>15) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>16) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" "   );printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");printf("    ");printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("\n");}
        if(i>17) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("\n");}
        if(i>18) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>19) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>20) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("\n");}
        if(i>21) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" "   );printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("\n");}
        if(i>22) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("\n");}
        if(i>23) {printf("\t\t\t    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");printf("    ");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");printf("    ");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);}

        Sleep(200);
    }
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t    ");
    for(i=0;i<53;i++)
        {
            if(i>18&&i<21) Sleep(500);
            if(i>40&&i<42) {printf("\n\n\t\t\t\t\t\t");Sleep(500);}
            printf("%c",credits[i]);Sleep(100);
        }
    */
 /*
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);

    printf("\n\n");

    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);

    printf("\n\n");

    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");

    printf("\n\n");

    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" "   );printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" "   );printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");

    printf("\n\n");

    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",y);printf("%c",y);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");
    printf("\n");printf(" ");   printf(" ");   printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",v);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",v);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");

    printf("\n\n");

    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");   printf(" ");
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);
    printf("\n");printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);printf("%c",u);

    */
    /*
    n=51;
    j=0;
    m=1;
    if(n%10==0) p=((int)(n/10));
    else p=((int)(n/10)) +1;
    A:
    system("cls");



    for(i=j;i<j+10;i++)
    {

        if(i<n) printf("\n\t\t\t\t%c this is just a test %d\n",w,i+1);
        else printf("\n\n");
    }
    if(j==0)
    {
        printf("\n\t\t\t\t\t\t\t%d / %d\t\t\t\t",m,p);
        Color(11,0);
        printf(" [N]ext ==> ");
        Color(0,11);
    }
    else if(j>=n-10)
    {
        Color(11,0);
        printf("\n\t <== [P]revious ");
        Color(0,11);
        printf("\t\t\t\t%d / %d\t\t\t\t",m,p);
    }
    else
    {
        Color(11,0);
        printf("\n\t <== [P]revious ");
        Color(0,11);
        printf("\t\t\t\t%d / %d\t\t\t\t",m,p);
        Color(11,0);
        printf(" [N]ext ==> ");
        Color(0,11);
    }

    printf("\n\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y);
    printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y);
    printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y);
    printf("\n%c",u,u); Color (0,10); printf("  'R' <%c%c%c To RETURN or go back.  ",z2,z2,z2); Color(0,11); printf("%c",u);
    printf("    %c",u,u,u); Color (15,12); printf(" 'R' <%c%c%c To RETURN to the Menu.  ",z2,z2,z2); Color(0,11); printf("%c",u);
    printf("    %c",u); Color (15,4); printf(" 'Q' <%c%c%c To QUIT LibManager. ",z2,z2,z2); Color(0,11); printf("%c",u);
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v);
    printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v);
    printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v);

    s=getch();
    if( s!= EOF && s=='n' && j < n-10) {j=j+10;m++;goto A;}
    else if ( s!= EOF && s=='p' && j!= 0) {j=j-10;m--;goto A;}
    else {goto A;}
    */

    /*
    system("mode con: cols=65 lines=2");
    system("color F0");
    Color(0,11);
    Color(15,0);printf(" Author's   Full name :                                          \n");
    Color(0,15); printf(" ");
    */

    /*
    system("cls");
    system("mode con: cols=112 lines=28");
    system("color B0");

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to change ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t\t    %c [F]irst Name\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    %c [L]ast Name\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    %c [B]irth Date\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    %c [N]ationality\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    %c [A]ddress\t\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    %c [E]mail\t\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    for(i=0;i<6;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    for(i=0;i<112;i++) printf("%c",u);
    */


    system("mode con: cols=65 lines=5");
    system("color F0");
                                                    Color(0,11);
                                                    printf("                                                                  Enter the books's Number of Authors below, then hit 'Enter'.    \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %[^\n]s",&Tmp);


    /*
    system("cls");
    system("mode con: cols=112 lines=28");
    system("color B0");
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to change ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t\t    %c [T]itle\t\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    %c [C]oast\t\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    %c [G]enre\t\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    %c [N]umber of Pages\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    %c [R]elease Year\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    %c [P]ublishing House\t\t\t\t\t      %c%c",u,u,w,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    %c [A]uthors\t\t\t\t\t\t\t      %c%c",u,u,w,u,u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    for(i=0;i<112;i++) printf("%c",u);
    */
    sleep(10);



}
