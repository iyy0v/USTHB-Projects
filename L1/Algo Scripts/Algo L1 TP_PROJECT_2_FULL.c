#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <time.h>

typedef struct {
                int d,m;
                long int y;
               }date;

typedef struct {
                int ID;
                char FirstName[64],LastName[64],Nationality[32],Address[80],Email[50];
                date BirthDate;
                }author;

typedef struct {
                int Pages,RlsYear,AthNbr,AthID[10];
                char Title[64],Coast[20],Genre[64],PubHouse[64];
                }book;


void AShift ( author *a, author *b )
{
    author c;
    c = *a; *a = *b; *b = c;
}

void BShift ( book *a, book *b )
{
    book c;
    c = *a; *a = *b; *b = c;
}

void ASearch (int *sn, char c[128], char a[64], char b[64], int i)
{
    char C[129] = "";
    strcat(C,a);
    strcat(C," ");
    strcat(C,b);
    if(strcmp(C,c)==0) *sn=i;
}

void BSearch ( int *sn, char c[128], char b[128], int i)
{
    if(strcmp(b,c)==0) *sn=i;
}

void Welcome()
{
    int i,j;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

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
        Sleep(100);
    }
    sleep(2);
}

void Menu1()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

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
    printf("\n%c%c\t\t\t  %c  ",u,u,w); printf("'A' <%c%c%c%c%c To ADD New elements (Authors / Books).",z2,z2,z2,z2,z2);                                                      printf("\t\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t  %c  ",u,u,w); printf("'M' <%c%c%c%c%c To MODIFY Existing elements (Authors / Books).",z2,z2,z2,z2,z2);                                              printf("\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t  %c  ",u,u,w); printf("'D' <%c%c%c%c%c To DELETE Existing elements (Authors / Books).",z2,z2,z2,z2,z2);                                              printf("\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t  %c  ",u,u,w); printf("'I' <%c%c%c%c%c To show INFORMATIONS about the Existing elements (Authors / Books).",z2,z2,z2,z2,z2);                         printf("   %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t  %c  ",u,u,w); printf("'E' <%c%c%c%c%c To EXIT LibManager.",z2,z2,z2,z2,z2);                                                                         printf("\t\t\t\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t",u,u); printf("Choose your choice by Pressing the correspondent key.");                                                                                  printf("\t\t\t\t\t\t      %c%c",u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu2()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t  %c",u,u,u); Color(11,0); printf("  'B' <%c%c%c A Book.  ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t%c",u,u); Color(11,0); printf("  'A' <%c%c%c An Author.  ",z2,z2,z2); Color(0,11); printf("%c\t      %c%c",u,u,u);
    printf("\n%c%c\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<6;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3BA()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t",u,u); printf(" The new book has been successfully added to the Books List."); printf("\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf("  'A' <%c%c%c To Add Another Book.   ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3BM()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

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
}

void Menu3BM1()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t   ",u,u); printf(" The book has been successfully modified."); printf("\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf(" 'R' <%c%c%c To Modify Another Book. ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3BM2()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t     ",u,u); printf(" No book was found under that title !"); printf("\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf(" 'R' <%c%c%c To Modify Another Book. ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3BD1()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t   ",u,u); printf(" The book has been successfully deleted."); printf("\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf(" 'R' <%c%c%c To Delete Another Book. ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3BD2()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t     ",u,u); printf(" No book was found under that title !"); printf("\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf(" 'R' <%c%c%c To Delete Another Book. ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3AA()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t",u,u); printf(" The new author has been successfully added to the authors list."); printf("\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf(" 'A' <%c%c%c To Add Another Author.  ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3AM()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

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
}

void Menu3AM1()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t  ",u,u); printf(" The author has been successfully modified."); printf("\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf("'R' <%c%c%c To Modify Another Author.",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3AM2()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t     ",u,u); printf(" No author was found under that name !"); printf("\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf("'R' <%c%c%c To Modify Another Author.",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3AD1()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t  ",u,u); printf(" The author has been successfully deleted."); printf("\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf("'R' <%c%c%c To Delete Another Author.",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3AD2()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t     ",u,u); printf(" No author was found under that name !"); printf("\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (0,10); printf("'R' <%c%c%c To Delete Another Author.",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11);                                             printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11);                                                      printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3AI()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t   %c",u,u,u); Color(11,0); printf("'S' <%c%c%c To SEARCH for a Specific Author.",z2,z2,z2); Color(0,11); printf("%c  %c",u,u); Color(11,0); printf("'L' <%c%c%c To show a LIST of All Registered Authors.",z2,z2,z2);Color(0,11); printf("%c  %c%c",u,u,u);
    printf("\n%c%c\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<6;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    for(i=0;i<112;i++) printf("%c",u);
}

void Menu3BI()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t\t",u,u); printf("What do you want to do next ?"); printf("\t\t\t\t\t      %c%c",u,u);
    for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t   %c",u,u,u); Color(11,0); printf(" 'S' <%c%c%c To SEARCH for a Specific Book. ",z2,z2,z2); Color(0,11); printf("%c  %c",u,u); Color(11,0); printf(" 'L' <%c%c%c To show a LIST of All Registered Books. ",z2,z2,z2);Color(0,11); printf("%c  %c%c",u,u,u);
    printf("\n%c%c\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<6;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t      %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,u,u);
    printf("\n%c%c\t\t\t\t\t%c",u,u,u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11); printf("%c\t\t\t\t      %c%c",u,u,u);
    printf("\n%c%c\t\t\t\t        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\t\t      %c%c",u,u,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,u,u);
    for(i=0;i<2;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
    for(i=0;i<112;i++) printf("%c",u);
}

void NoAthFnd()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    system("mode con: cols=112 lines=28");
    system("color B0");
    system("cls");
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t    ",u,u); printf(" No Author was found under that name !"); printf("\t\t\t\t      %c%c",u,u);
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
}

void NoBookFnd()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    system("mode con: cols=112 lines=28");
    system("color B0");
    system("cls");
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
}

void NoAuthors()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    system("mode con: cols=112 lines=28");
    system("color B0");
    system("cls");
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t    ",u,u); printf(" There is no Authors !"); printf("\t\t\t\t\t      %c%c",u,u);
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
}

void NoBooks()
{
    int i;
    char ch1,ch2,ch3,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    system("mode con: cols=112 lines=28");
    system("color B0");
    system("cls");
    for(i=0;i<112;i++) printf("%c",u);
    for(i=0;i<3;i++) printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);
    printf("\n%c%c\t\t\t\t\t     ",u,u); printf(" There is no Books !"); printf("\t\t\t\t\t      %c%c",u,u);
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
}

void Exit()
{
    int i;
    char u,v,w,y,z1,z2,z3,z4,z5,z6;

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    system("mode con: cols=50 lines=11");
    Color(15,4); printf("\a%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u); Color(0,11);
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
}

void Ending()
{
    int i,j;
    char u,v,w,y,z1,z2,z3,z4,z5,z6,credits[53]="Ayoub NAIT MIHOUB & Oussama IGHIL GUITOUN Production.";

    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    system("mode con: cols=112 lines=28");
    system("color 60");
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

        Sleep(100);
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

        Sleep(100);
    }
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t    ");
    for(i=0;i<53;i++)
        {
            if(i>18&&i<21) Sleep(500);
            if(i>40&&i<42) {printf("\n\n\t\t\t\t\t\t");Sleep(500);}
            printf("%c",credits[i]);Sleep(100);
        }
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    sleep(10);

}
main()
{
    int i,j,h,n,p,sn,na,nb,np,IDC,N,New,AtrNbr;
    char ch1,ch2,ch3,ch4,Tmp[128],cln[2],u,v,w,y,z1,z2,z3,z4,z5,z6;
    u=-37; v=-33; w=-2; y=-36; z1=-70; z2=-51; z3=-69; z4=-68; z5=-55; z6=-56;

    FILE *fp;
    system("mode con: cols=112 lines=28");
    system("color B0");
    Welcome();

    void Color(int t,int f)
    {
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,f*16+t);
    }

    if(fopen("LM-User_Data.txt","r")==NULL)
        {
            fp = fopen("LM-User_Data.txt","w");
            na=0;
            nb=0;
            IDC=1;
        }
    else
        {
            fp = fopen("LM-User_Data.txt","r");
            fscanf(fp,"%d",&na);
            fscanf(fp," %d",&nb);
            fscanf(fp," %d",&IDC);
        }

    author* a = malloc(na+1 * sizeof(author));
    book* b = malloc(nb+1 * sizeof(book));

    if(na!=0 || nb!=0)
        {
            for(i=0;i<na;i++)
                {
                    fscanf(fp,"\n%d",&a[i].ID);
                    fscanf(fp,"\n%[^\n]s",&a[i].FirstName);
                    fscanf(fp,"\n%[^\n]s",&a[i].LastName);
                    fscanf(fp,"\n%d",&a[i].BirthDate.d);
                    fscanf(fp," %d",&a[i].BirthDate.m);
                    fscanf(fp," %li",&a[i].BirthDate.y);
                    fscanf(fp,"\n%[^\n]s",&a[i].Nationality);
                    fscanf(fp,"\n%[^\n]s",&a[i].Address);
                    fscanf(fp,"\n%s",&a[i].Email);
                }
            for(i=0;i<nb;i++)
                {
                    fscanf(fp,"\n%[^\n]s",&b[i].Title);
                    fscanf(fp,"\n%[^\n]s",&b[i].Coast);
                    fscanf(fp,"\n%[^\n]s",&b[i].Genre);
                    fscanf(fp,"\n%[^\n]s",&b[i].PubHouse);
                    fscanf(fp,"\n%d",&b[i].Pages);
                    fscanf(fp,"\n%d",&b[i].RlsYear);
                    fscanf(fp,"\n%d",&b[i].AthNbr);
                    for(j=0;j<b[i].AthNbr;j++)
                        {
                            fscanf("\n%d",&b[i].AthID[j]);
                        }
                }
        }
    fclose(fp);
    system("cls");
    Menu1();
    ch1=getch();
    while (ch1 != EOF && ch1 != 'e')
    {
     switch(ch1) {
                case 'a':
                case 'A':{
                        menu2a:
                        system("cls");
                        system("mode con: cols=112 lines=28");
                        system("color B0");
                        for(i=0;i<112;i++) printf("%c",u);
                        for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
                        printf("\n%c%c\t",u,u); printf("What Type of elements do you want to ADD ?"); printf("\t\t\t\t\t\t\t      %c%c",u,u);
                        Menu2();
                        ch2 = getch();
                        if (ch2 != EOF && ch2 == 'a')
                            {
                                aa:
                                system("cls");
                                system("mode con: cols=112 lines=28");
                                system("color B0");
                                printf("\n\n\n\t\tEnter the author's informations below :");
                                printf("\n\n\n\t\t\t\t%c First name : ",w);
                                scanf(" %[^\n]s",&a[na].FirstName);
                                printf("\n\t\t\t\t%c Last name : ",w);
                                scanf(" %[^\n]s",&a[na].LastName);
                                printf("\n\t\t\t\t%c Date of birth :",w);
                                do{
                                printf("\n\t\t\t\t\t- Day : ");
                                scanf(" %d",&a[na].BirthDate.d);
                                }while(a[na].BirthDate.d>31 || a[na].BirthDate.d<1);
                                do{
                                printf("\n\t\t\t\t\t- Month : ");
                                scanf(" %d",&a[na].BirthDate.m);
                                }while(a[na].BirthDate.m>12 || a[na].BirthDate.m<1);
                                printf("\n\t\t\t\t\t- Year : ");
                                scanf(" %li",&a[na].BirthDate.y);
                                printf("\n\t\t\t\t%c Nationality : ",w);
                                scanf(" %[^\n]s",&a[na].Nationality);
                                printf("\n\t\t\t\t%c Address : ",w);
                                scanf(" %[^\n]s",&a[na].Address);
                                printf("\n\t\t\t\t%c E-mail : ",w);
                                scanf(" %[^\n]s",&a[na].Email);

                                a[na].ID=IDC;
                                IDC++;

                                na=na+1;
                                author* A = realloc(a, na+1 * sizeof(author));
                                a = A;

                                menuaa:
                                system("cls");
                                system("mode con: cols=112 lines=28");
                                system("color B0");
                                Menu3AA();
                                ch3 = getch();
                                if (ch3 != EOF && ch3 == 'a') {goto aa;}
                                else if (ch3 != EOF && ch3 == 'm') {goto menu;}
                                else if (ch3 != EOF && ch3 == 'e') {goto exit;}
                                else {printf("\a"); goto menuaa;}


                            }
                        else if (ch2 != EOF && ch2 == 'b')
                            {
                                ba:
                                system("cls");
                                system("mode con: cols=112 lines=28");
                                system("color B0");
                                printf("\n\n\n\t\tEnter the book's informations below :");
                                printf("\n\n\n\t\t\t\t%c Title : ",w);
                                scanf(" %[^\n]s",&b[nb].Title);
                                printf("\n\t\t\t\t%c Coast : ",w);
                                scanf(" %[^\n]s",&b[nb].Coast);
                                printf("\n\t\t\t\t%c Genre : ",w);
                                scanf(" %[^\n]s",&b[nb].Genre);
                                do{
                                printf("\n\t\t\t\t%c Number of Pages : ",w);
                                scanf(" %d",&b[nb].Pages);
                                }while(b[nb].Pages<1);
                                printf("\n\t\t\t\t%c Released Year : ",w);
                                scanf(" %d",&b[nb].RlsYear);
                                printf("\n\t\t\t\t%c Publishing House : ",w);
                                scanf(" %[^\n]s",&b[nb].PubHouse);
                                do{
                                printf("\n\t\t\t\t%c Number of Authors : ",w);
                                scanf(" %d",&b[nb].AthNbr);
                                }while(b[nb].AthNbr<0 || b[nb].AthNbr>10);
                                for(i=0;i<b[nb].AthNbr;i++)
                                    {
                                        do{
                                        system("mode con: cols=65 lines=2");
                                        system("color F0");
                                        Color(0,11);
                                        Color(15,0);printf(" Author's %d Full name :                                          \n",i+1);
                                        Color(0,15); printf(" ");
                                        scanf(" %[^\n]s",&Tmp);
                                        }while(Tmp==EOF);
                                        sn=-1;
                                        for(j=0;j<na;j++)
                                            {
                                                ASearch (&sn,Tmp,a[j].FirstName,a[j].LastName,j);
                                            }
                                        if(sn=-1)
                                            {
                                                system("cls");
                                                system("mode con: cols=112 lines=28");
                                                system("color B0");
                                                printf("\n\n\n\t\t %s wasn't found in our list. Please enter his informations below :");
                                                printf("\n\n\n\t\t\t\t%c First name : ",w);
                                                scanf(" %[^\n]s",&a[na].FirstName);
                                                printf("\n\t\t\t\t%c Last name : ",w);
                                                scanf(" %[^\n]s",&a[na].LastName);
                                                printf("\n\t\t\t\t%c Date of birth :",w);
                                                do{
                                                printf("\n\t\t\t\t\t- Day : ");
                                                scanf(" %d",&a[na].BirthDate.d);
                                                }while(a[na].BirthDate.d>31 || a[na].BirthDate.d<1);
                                                do{
                                                printf("\n\t\t\t\t\t- Month : ");
                                                scanf(" %d",&a[na].BirthDate.m);
                                                }while(a[na].BirthDate.m>12 || a[na].BirthDate.m<1);
                                                printf("\n\t\t\t\t\t- Year : ");
                                                scanf(" %li",&a[na].BirthDate.y);
                                                printf("\n\t\t\t\t%c Nationality : ",w);
                                                scanf(" %[^\n]s",&a[na].Nationality);
                                                printf("\n\t\t\t\t%c Address : ",w);
                                                scanf(" %[^\n]s",&a[na].Address);
                                                printf("\n\t\t\t\t%c E-mail : ",w);
                                                scanf(" %[^\n]s",&a[na].Email);

                                                a[na].ID=IDC;
                                                b[nb].AthID[i]=IDC;
                                                IDC++;

                                                na=na+1;
                                                author* A = realloc(a, na+1 * sizeof(author));
                                                a = A;
                                            }
                                        else
                                            {
                                                b[nb].AthID[i]=a[sn].ID;
                                            }
                                    }
                                nb=nb+1;
                                book* B = realloc(b, nb+1 * sizeof(book));
                                b = B;

                                menuba:
                                system("cls");
                                system("mode con: cols=112 lines=28");
                                system("color B0");
                                Menu3BA();
                                ch3 = getch();
                                if (ch3 != EOF && ch3 == 'a') {goto ba;}
                                else if (ch3 != EOF && ch3 == 'm') {goto menu;}
                                else if (ch3 != EOF && ch3 == 'e') {goto exit;}
                                else {printf("\a"); goto menuba;}
                            }
                        else if (ch2 != EOF && ch2 == 'm') {goto menu;}
                        else if (ch2 != EOF && ch2 == 'e') {goto exit;}
                        else {printf("\a"); system("color 4F"); Sleep(100); goto menu2a;}
                         }
                        break;

                case 'm':
                case 'M':{
                        menu2m:
                        system("cls");
                        system("mode con: cols=112 lines=28");
                        system("color B0");
                        for(i=0;i<112;i++) printf("%c",u);
                        for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
                        printf("\n%c%c\t",u,u); printf("What Type of elements do you want to MODIFY ?"); printf("\t\t\t\t\t\t\t      %c%c",u,u);
                        Menu2();
                        ch2 = getch();
                        if (ch2 != EOF && ch2 == 'a')
                            {
                                am:
                                system("mode con: cols=65 lines=5");
                                system("color F0");
                                Color(0,11);
                                printf("                                                                 Enter the author's name in the 'SEARCH BAR', then hit 'Enter'.                                                                           ");
                                Color(15,0);printf(" Search                                                   \n");
                                Color(0,11);printf("       "); Color(0,15); printf(" ");
                                scanf(" %[^\n]s",&Tmp);
                                sn=-1;
                                for(i=0;i<na;i++)
                                    {
                                        ASearch (&sn,Tmp,a[i].FirstName,a[i].LastName,i);
                                    }
                                if(sn!=-1)
                                    {
                                        afm:
                                        Menu3AM();
                                        ch3=getch();
                                        system("mode con: cols=65 lines=5");
                                        system("color F0");
                                        switch(ch3)
                                        {
                                            case 'f':
                                            case 'F':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                   Enter the author's First name below, then hit 'Enter'.         \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %[^\n]s",&a[sn].FirstName);
                                                }
                                                break;

                                            case 'l':
                                            case 'L':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                   Enter the author's Last name below, then hit 'Enter'.          \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %[^\n]s",&a[sn].LastName);
                                                }
                                                break;

                                            case 'd':
                                            case 'D':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                   Enter the author's Day of Birth below, then hit 'Enter'.       \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %d",&a[sn].BirthDate.d);
                                                }
                                                break;
                                            case 'm':
                                            case 'M':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                  Enter the author's Month of Birth below, then hit 'Enter'.      \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %d",&a[sn].BirthDate.m);
                                                }
                                                break;

                                            case 'y':
                                            case 'Y':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                   Enter the author's Year of Birth below, then hit 'Enter'.      \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %li",&a[sn].BirthDate.y);
                                                }
                                                break;

                                            case 'n':
                                            case 'N':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                   Enter the author's Nationality below, then hit 'Enter'.        \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %[^\n]s",&a[sn].Nationality);
                                                }
                                                break;

                                            case 'a':
                                            case 'A':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                   Enter the author's Address below, then hit 'Enter'.            \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %[^\n]s",&a[sn].Address);
                                                }
                                                break;

                                            case 'e':
                                            case 'E':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                   Enter the author's E-Mail below, then hit 'Enter'.             \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %[^\n]s",&a[sn].Email);
                                                }
                                                break;

                                            default:
                                                {
                                                    printf("\a");
                                                    goto afm;
                                                }
                                        }

                                        menuam1:
                                        system("cls");
                                        system("mode con: cols=112 lines=28");
                                        system("color B0");
                                        Menu3AM1();
                                        ch4 = getch();
                                        if (ch4 != EOF && ch4 == 'r') {goto am;}
                                        else if (ch4 != EOF && ch4 == 'm') {goto menu;}
                                        else if (ch4 != EOF && ch4 == 'e') {goto exit;}
                                        else {printf("\a"); goto menuam1;}

                                    }
                                else
                                    {
                                        menuam2:
                                        system("cls");
                                        system("mode con: cols=112 lines=28");
                                        system("color B0");
                                        printf("\a");
                                        Menu3AM2();
                                        ch3 = getch();
                                        if (ch3 != EOF && ch3 == 'r') {goto am;}
                                        else if (ch3 != EOF && ch3 == 'm') {goto menu;}
                                        else if (ch3 != EOF && ch3 == 'e') {goto exit;}
                                        else {printf("\a"); goto menuam2;}
                                    }
                            }
                        else if (ch2 != EOF && ch2 == 'b')
                            {
                                bm:
                                system("mode con: cols=65 lines=5");
                                system("color F0");
                                Color(0,11);
                                printf("                                                                 Enter the book's title in the 'SEARCH BAR', then hit 'Enter'.                                                                            ");
                                Color(15,0);printf(" Search                                                   \n");
                                Color(0,11);printf("       "); Color(0,15); printf(" ");
                                scanf(" %[^\n]s",&Tmp);
                                sn=-1;
                                for(i=0;i<nb;i++)
                                    {
                                        BSearch (&sn,Tmp,b[i].Title,i);
                                    }
                                if(sn!=-1)
                                    {
                                        bfm:
                                        Menu3BM();
                                        ch3=getch();
                                        system("mode con: cols=65 lines=5");
                                        system("color F0");
                                        switch(ch3)
                                        {
                                            case 't':
                                            case 'T':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                    Enter the books's Title below, then hit 'Enter'.              \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %[^\n]s",&b[sn].Title);
                                                }
                                                break;

                                            case 'c':
                                            case 'C':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                    Enter the books's Coast below, then hit 'Enter'.              \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %[^\n]s",&b[sn].Coast);
                                                }
                                                break;

                                            case 'g':
                                            case 'G':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                    Enter the books's Genre below, then hit 'Enter'.              \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %[^\n]s",&b[sn].Genre);
                                                }
                                                break;
                                            case 'n':
                                            case 'N':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                  Enter the books's Number of Pages below, then hit 'Enter'.      \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %d",&b[sn].Pages);
                                                }
                                                break;

                                            case 'r':
                                            case 'R':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                   Enter the books's Release Year below, then hit 'Enter'.        \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %d",&b[sn].RlsYear);
                                                }
                                                break;

                                            case 'p':
                                            case 'P':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                  Enter the books's Publishing House below, then hit 'Enter'.     \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %[^\n]s",&b[sn].PubHouse);
                                                }
                                                break;

                                            case 'a':
                                            case 'A':
                                                {
                                                    Color(0,11);
                                                    printf("                                                                  Enter the books's Number of Authors below, then hit 'Enter'.    \n");
                                                    Color(0,15);
                                                    for(i=0;i<65;i++){printf("%c",v);}
                                                    scanf(" %d",&b[sn].AthNbr);

                                                    for(i=0;i<b[sn].AthNbr;i++)
                                                    {
                                                        system("mode con: cols=65 lines=2");
                                                        system("color F0");
                                                        Color(0,11);
                                                        Color(15,0);printf(" Author's %d Full name :                                          \n",i+1);
                                                        Color(0,15); printf(" ");
                                                        scanf(" %[^\n]s",&Tmp);
                                                        N=-1;
                                                        for(j=0;j<na;j++)
                                                            {
                                                                ASearch (&N,Tmp,a[j].FirstName,a[j].LastName,j);
                                                            }
                                                        if(N=-1)
                                                            {
                                                                system("cls");
                                                                system("mode con: cols=112 lines=28");
                                                                system("color B0");
                                                                printf("\n\n\n\t\t %s wasn't found in our list. Please enter his informations below :");
                                                                printf("\n\n\n\t\t\t\t%c First name : ",w);
                                                                scanf(" %[^\n]s",&a[na].FirstName);
                                                                printf("\n\t\t\t\t%c Last name : ",w);
                                                                scanf(" %[^\n]s",&a[na].LastName);
                                                                printf("\n\t\t\t\t%c Date of birth :",w);
                                                                printf("\n\t\t\t\t\t- Day : ");
                                                                scanf(" %d",&a[na].BirthDate.d);
                                                                printf("\n\t\t\t\t\t- Month : ");
                                                                scanf(" %d",&a[na].BirthDate.m);
                                                                printf("\n\t\t\t\t\t- Year : ");
                                                                scanf(" %li",&a[na].BirthDate.y);
                                                                printf("\n\t\t\t\t%c Nationality : ",w);
                                                                scanf(" %[^\n]s",&a[na].Nationality);
                                                                printf("\n\t\t\t\t%c Address : ",w);
                                                                scanf(" %[^\n]s",&a[na].Address);
                                                                printf("\n\t\t\t\t%c E-mail : ",w);
                                                                scanf(" %[^\n]s",&a[na].Email);
                                                                a[na].ID=IDC;
                                                                b[sn].AthID[i]=IDC;
                                                                IDC++;

                                                                na=na+1;
                                                                author* A = realloc(a, na+1 * sizeof(author));
                                                                a = A;
                                                            }
                                                        else
                                                            {
                                                                b[sn].AthID[i]=a[N].ID;
                                                            }
                                                    }
                                                }
                                                break;

                                            default:
                                                {
                                                    printf("\a");
                                                    goto bfm;
                                                }
                                            }
                                        menubm1:
                                        system("cls");
                                        system("mode con: cols=112 lines=28");
                                        system("color B0");
                                        Menu3BM1();
                                        ch3 = getch();
                                        if (ch3 != EOF && ch3 == 'r') {goto bm;}
                                        else if (ch3 != EOF && ch3 == 'm') {goto menu;}
                                        else if (ch3 != EOF && ch3 == 'e') {goto exit;}
                                        else {printf("\a"); goto menubm1;}

                                    }
                                else
                                    {
                                        menubm2:
                                        system("cls");
                                        system("mode con: cols=112 lines=28");
                                        system("color B0");
                                        printf("\a");
                                        Menu3BM2();
                                        ch3 = getch();
                                        if (ch3 != EOF && ch3 == 'r') {goto bm;}
                                        else if (ch3 != EOF && ch3 == 'm') {goto menu;}
                                        else if (ch3 != EOF && ch3 == 'e') {goto exit;}
                                        else {printf("\a"); goto menubm2;}
                                    }
                            }
                        else if (ch2 != EOF && ch2 == 'm') {goto menu;}
                        else if (ch2 != EOF && ch2 == 'e') {goto exit;}
                        else {printf("\a"); system("color 4F"); Sleep(100); goto menu2m;}
                         }
                        break;

                case 'd':
                case 'D':{
                        menu2d:
                        system("cls");
                        system("mode con: cols=112 lines=28");
                        system("color B0");
                        for(i=0;i<112;i++) printf("%c",u);
                        for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
                        printf("\n%c%c\t",u,u); printf("What Type of elements do you want to DELETE ?"); printf("\t\t\t\t\t\t\t   %c%c",u,u);
                        Menu2();
                        ch2 = getch();
                        if (ch2 != EOF && ch2 == 'a')
                            {
                                ad:
                                system("mode con: cols=65 lines=5");
                                system("color F0");
                                Color(0,11);
                                printf("                                                                 Enter the author's name in the 'SEARCH BAR', then hit 'Enter'.                                                                           ");
                                Color(15,0);printf(" Search                                                   \n");
                                Color(0,11);printf("       "); Color(0,15); printf(" ");
                                scanf(" %[^\n]s",&Tmp);
                                sn=-1;
                                for(i=0;i<na;i++)
                                    {
                                        ASearch (&sn,Tmp,a[i].FirstName,a[i].LastName,i);
                                    }
                                if(sn!=-1)
                                    {
                                        for(i=0;i<nb;i++)
                                            {
                                                for(j=0;j<b[i].AthNbr;j++)
                                                    {
                                                        if(a[sn].ID==b[i].AthID)
                                                            {
                                                                for(h=j;h<b[i].AthNbr-1;h++) { N=b[i].AthID[h]; b[i].AthID[h]=b[i].AthID[h+1]; b[i].AthID[h+1]=N; }
                                                                b[i].AthNbr=b[i].AthNbr-1;
                                                            }
                                                    }
                                            }
                                        for(i=sn;i<na-1;i++) { AShift(&a[i],&a[i+1]); }
                                        na=na-1;
                                        author* A = realloc(a, na+1 * sizeof(author));
                                        a = A;
                                        menuad1:
                                        system("cls");
                                        system("mode con: cols=112 lines=28");
                                        system("color B0");
                                        Menu3AD1();
                                        ch3 = getch();
                                        if (ch3 != EOF && ch3 == 'r') {goto ad;}
                                        else if (ch3 != EOF && ch3 == 'm') {goto menu;}
                                        else if (ch3 != EOF && ch3 == 'e') {goto exit;}
                                        else {printf("\a"); goto menuad1;}
                                    }
                                else
                                    {
                                        menuad2:
                                        system("cls");
                                        system("mode con: cols=112 lines=28");
                                        system("color B0");
                                        printf("\a");
                                        Menu3AD2();
                                        ch3 = getch();
                                        if (ch3 != EOF && ch3 == 'r') {goto ad;}
                                        else if (ch3 != EOF && ch3 == 'm') {goto menu;}
                                        else if (ch3 != EOF && ch3 == 'e') {goto exit;}
                                        else {printf("\a"); goto menuad2;}
                                    }
                            }
                        else if (ch2 != EOF && ch2 == 'b')
                            {
                                bd:
                                system("mode con: cols=65 lines=5");
                                system("color F0");
                                Color(0,11);
                                printf("                                                                 Enter the book's title in the 'SEARCH BAR', then hit 'Enter'.                                                                            ");
                                Color(15,0);printf(" Search                                                   \n");
                                Color(0,11);printf("       "); Color(0,15); printf(" ");
                                scanf(" %[^\n]s",&Tmp);
                                sn=-1;
                                for(i=0;i<nb;i++)
                                    {
                                        BSearch (&sn,Tmp,b[i].Title,i);
                                    }
                                if(sn!=-1)
                                    {
                                        for(i=sn;i<nb-1;i++) { BShift(&b[i],&b[i+1]); }
                                        nb=nb-1;
                                        book* B = realloc(b, nb+1 * sizeof(book));
                                        b = B;
                                        menubd1:
                                        system("cls");
                                        system("mode con: cols=112 lines=28");
                                        system("color B0");
                                        Menu3BD1();
                                        ch3 = getch();
                                        if (ch3 != EOF && ch3 == 'r') {goto bd;}
                                        else if (ch3 != EOF && ch3 == 'm') {goto menu;}
                                        else if (ch3 != EOF && ch3 == 'e') {goto exit;}
                                        else {printf("\a"); goto menubd1;}
                                    }
                                else
                                    {
                                        menubd2:
                                        system("cls");
                                        system("mode con: cols=112 lines=28");
                                        system("color B0");
                                        printf("\a");
                                        Menu3BD2();
                                        ch3 = getch();
                                        if (ch3 != EOF && ch3 == 'r') {goto bd;}
                                        else if (ch3 != EOF && ch3 == 'm') {goto menu;}
                                        else if (ch3 != EOF && ch3 == 'e') {goto exit;}
                                        else {printf("\a"); goto menubd2;}
                                    }
                            }
                        else if (ch2 != EOF && ch2 == 'm') {goto menu;}
                        else if (ch2 != EOF && ch2 == 'e') {goto exit;}
                        else {printf("\a"); system("color 4F"); Sleep(100); goto menu2d;}
                        }
                        break;

                case 'i':
                case 'I':{
                        info:
                        system("cls");
                        system("mode con: cols=112 lines=28");
                        system("color B0");
                        for(i=0;i<112;i++) printf("%c",u);
                        for(i=0;i<4;i++) {printf("\n%c%c\t\t\t\t\t\t\t\t\t\t\t\t\t      %c%c",u,u,u,u);}
                        printf("\n%c%c\t",u,u); printf("What Type of elements are you LOOKING for ?"); printf("\t\t\t\t\t\t\t      %c%c",u,u);
                        Menu2();
                        ch2 = getch();
                        if (ch2 != EOF && ch2 == 'a')
                            {
                                infoa:
                                Menu3AI();
                                ch3 = getch();
                                if (ch3 != EOF && ch3 == 's')
                                    {
                                        system("mode con: cols=65 lines=5");
                                        system("color F0");
                                        Color(0,11);
                                        printf("                                                                 Enter the book's title in the 'SEARCH BAR', then hit 'Enter'.                                                                            ");
                                        Color(15,0);printf(" Search                                                   \n");
                                        Color(0,11);printf("       "); Color(0,15); printf(" ");
                                        scanf(" %[^\n]s",&Tmp);
                                        sn=-1;
                                        for(i=0;i<na;i++)
                                            {
                                                ASearch (&sn,Tmp,a[i].FirstName,a[i].LastName,i);
                                            }
                                        if(sn!=-1)
                                            {
                                                af:
                                                system("cls");
                                                system("mode con: cols=112 lines=28");
                                                system("color B0");
                                                printf("\n\n\n\t\tThese are the %s's informations below :",Tmp);
                                                printf("\n\n\n\t\t\t\t%c First name : %s",w,a[sn].FirstName);
                                                printf("\n\t\t\t\t%c Last name : %s",w,a[sn].LastName);
                                                printf("\n\t\t\t\t%c Date of birth : %02d / %02d / %li ",w,a[sn].BirthDate.d,a[sn].BirthDate.m,a[sn].BirthDate.y);
                                                printf("\n\t\t\t\t%c Nationality : %s",w,a[sn].Nationality);
                                                printf("\n\t\t\t\t%c Address : %s",w,a[sn].Address);
                                                printf("\n\t\t\t\t%c E-mail : %s",w,a[sn].Email);
                                                ch4=getch();
                                                if (ch4 != EOF && ch4 == 'b')
                                                {
                                                    for(i=0;i<nb;i++)
                                                        {
                                                            for(j=0;j<b[i].AthNbr;j++)
                                                                {
                                                                    if (a[sn].ID==b[i].AthID[j]) {  system("cls");
                                                                                                    system("mode con: cols=112 lines=28");
                                                                                                    system("color B0");
                                                                                                    printf("\n\n\n\n\t\t\t\t%c Title : %s",w,b[i].Title);
                                                                                                    printf("\n\t\t\t\t%c Coast : %s",w,b[i].Coast);
                                                                                                    printf("\n\t\t\t\t%c Genre : %s",w,b[i].Genre);
                                                                                                    printf("\n\t\t\t\t%c Number of Pages : %d",w,b[i].Pages);
                                                                                                    printf("\n\t\t\t\t%c Released Year : %d",w,b[i].RlsYear);
                                                                                                    printf("\n\t\t\t\t%c Publishing House : %s",w,b[i].PubHouse);
                                                                                                    Tmp[0]=getch();
                                                                                                 }
                                                                }
                                                        }
                                                    goto infoa;
                                                }
                                                else if (ch4 != EOF && ch4 =='r') {goto infoa;}
                                                else if (ch4 != EOF && ch4 =='m') {goto menu;}
                                                else if (ch4 != EOF && ch4 =='e') {goto exit;}
                                                else {printf("\a");goto af;}
                                            }
                                        else
                                            {
                                                naf:
                                                NoAthFnd();
                                                ch4=getch();
                                                if (ch4 != EOF && ch4 =='r') {goto infoa;}
                                                else if (ch4 != EOF && ch4 =='m') {goto menu;}
                                                else if (ch4 != EOF && ch4 =='e') {goto exit;}
                                                else {printf("\a");goto naf;}
                                            }
                                    }
                                else if (ch3 != EOF && ch3 == 'l')
                                    {
                                        if(na==0) {
                                                noa:
                                                NoAuthors();
                                                ch4=getch();
                                                if (ch4 != EOF && ch4 =='r') {goto infoa;}
                                                else if (ch4 != EOF && ch4 =='m') {goto menu;}
                                                else if (ch4 != EOF && ch4 =='e') {goto exit;}
                                                else {printf("\a");goto noa;}
                                                  }
                                        else {
                                                j=0;
                                                p=1;
                                                if(na%10==0) np=((int)(na/10));
                                                else np=((int)(na/10)) +1;
                                                lista:
                                                system("cls");
                                                for(i=j;i<j+10;i++)
                                                    {
                                                        if(i<na) printf("\n\t\t\t\t\t%c %s %s\n",w,a[i].FirstName,a[i].LastName);
                                                        else printf("\n\n");
                                                    }
                                                if(p==1 && np>1)
                                                    {
                                                        printf("\n\t\t\t\t\t\t\t%d / %d\t\t\t\t",p,np);
                                                        Color(11,0);
                                                        printf(" [N]ext ==> ");
                                                        Color(0,11);
                                                    }
                                                else if(p==np && np>1)
                                                    {
                                                        Color(11,0);
                                                        printf("\n\t <== [P]revious ");
                                                        Color(0,11);
                                                        printf("\t\t\t\t%d / %d\t\t\t\t",p,np);
                                                    }
                                                else if(np==1)
                                                    {
                                                        printf("\n\t\t\t\t\t\t\t%d / %d\t\t\t\t",p,np);
                                                    }
                                                else
                                                    {
                                                        Color(11,0);
                                                        printf("\n\t <== [P]revious ");
                                                        Color(0,11);
                                                        printf("\t\t\t\t%d / %d\t\t\t\t",p,np);
                                                        Color(11,0);
                                                        printf(" [N]ext ==> ");
                                                        Color(0,11);
                                                    }
                                                printf("\n\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y);
                                                printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y);
                                                printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y);
                                                printf("\n%c",u,u); Color (0,10); printf("  'R' <%c%c%c To RETURN or go back.  ",z2,z2,z2); Color(0,11); printf("%c",u);
                                                printf("    %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11); printf("%c",u);
                                                printf("    %c",u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11); printf("%c",u);
                                                printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v);
                                                printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v);
                                                printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v);
                                                ch4=getch();
                                                if(ch4 != EOF && ch4 == 'n' && j < na-10) {j=j+10;p++;goto lista;}
                                                else if (ch4 != EOF && ch4 == 'p' && j != 0) {j=j-10;p--;goto lista;}
                                                else if (ch4 != EOF && ch4 =='r') {goto infoa;}
                                                else if (ch4 != EOF && ch4 =='m') {goto menu;}
                                                else if (ch4 != EOF && ch4 =='e') {goto exit;}
                                                else {printf("\a");goto lista;}
                                             }
                                    }
                            }
                        else if (ch2 != EOF && ch2 == 'b')
                            {
                                infob:
                                Menu3BI();
                                ch3 = getch();
                                if (ch3 != EOF && ch3 == 's')
                                    {
                                        system("mode con: cols=65 lines=5");
                                        system("color F0");
                                        Color(0,11);
                                        printf("                                                                 Enter the book's title in the 'SEARCH BAR', then hit 'Enter'.                                                                            ");
                                        Color(15,0);printf(" Search                                                   \n");
                                        Color(0,11);printf("       "); Color(0,15); printf(" ");
                                        scanf(" %[^\n]s",&Tmp);
                                        sn=-1;
                                        for(i=0;i<nb;i++)
                                        {
                                            BSearch (&sn,Tmp,b[i].Title,i);
                                        }
                                        if(sn!=-1)
                                            {
                                                bf:
                                                system("cls");
                                                system("mode con: cols=112 lines=28");
                                                system("color B0");
                                                printf("\n\n\n\t\tThe book's informations :");
                                                printf("\n\n\n\t\t\t\t%c Title : %s",w,b[sn].Title);
                                                printf("\n\t\t\t\t%c Coast : %s",w,b[sn].Coast);
                                                printf("\n\t\t\t\t%c Genre : %s",w,b[sn].Genre);
                                                printf("\n\t\t\t\t%c Number of Pages : %d",w,b[sn].Pages);
                                                printf("\n\t\t\t\t%c Released Year : %d",w,b[sn].RlsYear);
                                                printf("\n\t\t\t\t%c Publishing House : %s",w,b[sn].PubHouse);
                                                printf("\n\t\t\t\t%c Authors :",w);
                                                if(b[sn].AthNbr==0) { printf("No Author registered !");}
                                                else
                                                {
                                                for(i=0;i<b[sn].AthNbr;i++)
                                                    {
                                                        for(j=0;j<na;j++)
                                                            {
                                                                if(b[sn].AthID[i]==a[j].ID)
                                                                    {
                                                                        printf("\n\t\t\t\t\t- %s %s",a[j].FirstName,a[j].LastName);
                                                                    }
                                                            }
                                                    }
                                                }
                                                ch4=getch();
                                                if (ch4 != EOF && ch4 =='r') {goto infob;}
                                                else if (ch4 != EOF && ch4 =='m') {goto menu;}
                                                else if (ch4 != EOF && ch4 =='e') {goto exit;}
                                                else {printf("\a");goto bf;}
                                            }
                                        else
                                            {
                                                nbf:
                                                NoBookFnd();
                                                ch4=getch();
                                                if (ch4 != EOF && ch4 =='r') {goto infob;}
                                                else if (ch4 != EOF && ch4 =='m') {goto menu;}
                                                else if (ch4 != EOF && ch4 =='e') {goto exit;}
                                                else {printf("\a");goto nbf;}
                                            }
                                    }
                                else if (ch3 != EOF && ch3 == 'l')
                                    {
                                        if(nb==0) {
                                                nob:
                                                NoBooks();
                                                ch4=getch();
                                                if (ch4 != EOF && ch4 =='r') {goto infob;}
                                                else if (ch4 != EOF && ch4 =='m') {goto menu;}
                                                else if (ch4 != EOF && ch4 =='e') {goto exit;}
                                                else {printf("\a");goto nob;}
                                                  }
                                        else
                                            {
                                                j=0;
                                                p=1;
                                                if(nb%10==0) np=((int)(nb/10));
                                                else np=((int)(nb/10)) +1;
                                                listb:
                                                system("cls");
                                                for(i=j;i<j+10;i++)
                                                    {
                                                        if(i<nb) printf("\n\t\t\t\t\t%c %s\n",w,b[i].Title);
                                                        else printf("\n\n");
                                                    }
                                                if(p==1 && np>1)
                                                    {
                                                        printf("\n\t\t\t\t\t\t\t%d / %d\t\t\t\t",p,np);
                                                        Color(11,0);
                                                        printf(" [N]ext ==> ");
                                                        Color(0,11);
                                                    }
                                                else if(p==np && np>1)
                                                    {
                                                        Color(11,0);
                                                        printf("\n\t <== [P]revious ");
                                                        Color(0,11);
                                                        printf("\t\t\t\t%d / %d\t\t\t\t",p,np);
                                                    }
                                                else if(np<=1)
                                                    {
                                                        printf("\n\t\t\t\t\t\t\t%d / %d\t\t\t\t",p,np);
                                                    }
                                                else
                                                    {
                                                        Color(11,0);
                                                        printf("\n\t <== [P]revious ");
                                                        Color(0,11);
                                                        printf("\t\t\t\t%d / %d\t\t\t\t",p,np);
                                                        Color(11,0);
                                                        printf(" [N]ext ==> ");
                                                        Color(0,11);
                                                    }
                                                printf("\n\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y);
                                                printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y);
                                                printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y,y);
                                                printf("\n%c",u,u); Color (0,10); printf("  'R' <%c%c%c To RETURN or go back.  ",z2,z2,z2); Color(0,11); printf("%c",u);
                                                printf("    %c",u,u,u); Color (15,12); printf(" 'M' <%c%c%c To return to the MENU.  ",z2,z2,z2); Color(0,11); printf("%c",u);
                                                printf("    %c",u); Color (15,4); printf(" 'E' <%c%c%c To EXIT LibManager. ",z2,z2,z2); Color(0,11); printf("%c",u);
                                                printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v);
                                                printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v);
                                                printf("    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v,v);
                                                ch4=getch();
                                                if(ch4 != EOF && ch4 == 'n' && j < nb-10) {j=j+20;p++;goto listb;}
                                                else if (ch4 != EOF && ch4 == 'p' && j != 0) {j=j-20;p--;goto listb;}
                                                else if (ch4 != EOF && ch4 =='r') {goto infob;}
                                                else if (ch4 != EOF && ch4 =='m') {goto menu;}
                                                else if (ch4 != EOF && ch4 =='e') {goto exit;}
                                                else {printf("\a");goto listb;}
                                            }
                                    }
                            }
                        else if (ch2 != EOF && ch2 == 'm') {goto menu;}
                        else if (ch2 != EOF && ch2 == 'e') {goto exit;}
                        else {printf("\a"); system("color 4F"); Sleep(100); goto info;}
                         }
                        break;

                default:{
                        printf("\a");
                        system("color 4F");
                        Sleep(100);
                        }
                        break;
                }
    menu:
    system("mode con: cols=112 lines=28");
    system("color B0");
    Menu1();
    ch1=getch();
    }
    exit:
    Exit();
    ch1=getch();
    if (ch1 != EOF && ch1 == 'y') {goto end;}
    else if (ch1 != EOF && ch1 == 'n') {goto menu;}
    else {goto exit;}

    end:
    fp = fopen("LM-User_Data.txt","w");
    fprintf(fp,"%d",na);
    fprintf(fp," %d",nb);
    fprintf(fp," %d",IDC);

    for(i=0;i<na;i++)
        {
            fprintf(fp,"\n%d",a[i].ID);
            fprintf(fp,"\n%s",a[i].FirstName);
            fprintf(fp,"\n%s",a[i].LastName);
            fprintf(fp,"\n%d",a[i].BirthDate.d);
            fprintf(fp," %d",a[i].BirthDate.m);
            fprintf(fp," %li",a[i].BirthDate.y);
            fprintf(fp,"\n%s",a[i].Nationality);
            fprintf(fp,"\n%s",a[i].Address);
            fprintf(fp,"\n%s",a[i].Email);
        }

    for(i=0;i<nb;i++)
        {
            fprintf(fp,"\n%s",b[i].Title);
            fprintf(fp,"\n%s",b[i].Coast);
            fprintf(fp,"\n%s",b[i].Genre);
            fprintf(fp,"\n%s",b[i].PubHouse);
            fprintf(fp,"\n%d",b[i].Pages);
            fprintf(fp,"\n%d",b[i].RlsYear);
            fprintf(fp,"\n%d",b[i].AthNbr);
            for(j=0;j<b[i].AthNbr;j++)
                {
                    fprintf(fp,"\n%d",b[i].AthID[j]);
                }
        }

    fclose(fp);
    Ending();
    return 0;
}
