#include <stdio.h>

main()
{
    system("mode con: cols=30 lines=10");
    int run,t,p,w;
    char a,b,c,d,e,f,g,h,i,z1,z2,z3;
    a='1';
    b='2';
    c='3';
    d='4';
    e='5';
    f='6';
    g='7';
    h='8';
    i='9';
    z1='!';z1=z1-84;
    z2='!';z2=z2-103;
    z3='!';z3=z3-83;

    run=1;
    t=0;
    while(run==1) {
            system("cls");
            t++;
            if(t%2==0) printf("\n PLAYER 2's turn : \n");
            else printf("\n PLAYER 1's turn : \n");

            printf("\n\t %c %c %c %c %c",a,z2,b,z2,c);
            printf("\n\t %c%c%c%c%c%c%c%c%c",z1,z1,z3,z1,z1,z1,z3,z1,z1);
            printf("\n\t %c %c %c %c %c",d,z2,e,z2,f);
            printf("\n\t %c%c%c%c%c%c%c%c%c",z1,z1,z3,z1,z1,z1,z3,z1,z1);
            printf("\n\t %c %c %c %c %c",g,z2,h,z2,i);

            if(a==b && b==c){w=1;break;}
            else if(d==e && e==f){w=1;break;}
            else if(g==h && h==i){w=1;break;}
            else if(a==d && d==g){w=1;break;}
            else if(b==e && e==h){w=1;break;}
            else if(c==f && f==i){w=1;break;}
            else if(a==e && e==i){w=1;break;}
            else if(c==e && e==g){w=1;break;}
            else if(a!='1' && b!='2' && c!='3' && d!='4' && e!='5' && f!='6' && g!='7' && h!='8' && i!='9'){w=0;break;}

            printf("\n\n Enter your position : ");
            scanf("%d",&p);

            switch(p) {
                        case 1: if(t%2==0 && a=='1') {a='X';}
                                else if(t%2!=0 && a=='1') {a='O';}
                                else printf("\n Position already taken !");
                                break;

                        case 2: if(t%2==0 && b=='2') {b='X';}
                                else if(t%2!=0 && b=='2') {b='O';}
                                else printf("\n Position already taken !");
                                break;

                        case 3: if(t%2==0 && c=='3') {c='X';}
                                else if(t%2!=0 && c=='3') {c='O';}
                                else printf("\n Position already taken !");
                                break;

                        case 4: if(t%2==0 && d=='4') {d='X';}
                                else if(t%2!=0 && d=='4') {d='O';}
                                else printf("\n Position already taken !");
                                break;

                        case 5: if(t%2==0 && e=='5') {e='X';}
                                else if(t%2!=0 && e=='5') {e='O';}
                                else printf("\n Position already taken !");
                                break;

                        case 6: if(t%2==0 && f=='6') {f='X';}
                                else if(t%2!=0 && f=='6') {f='O';}
                                else printf("\n Position already taken !");
                                break;

                        case 7: if(t%2==0 && g=='7') {g='X';}
                                else if(t%2!=0 && g=='7') {g='O';}
                                else printf("\n Position already taken !");
                                break;

                        case 8: if(t%2==0 && h=='8') {h='X';}
                                else if(t%2!=0 && h=='8') {h='O';}
                                else printf("\n Position already taken !");
                                break;

                        case 9: if(t%2==0 && i=='9') {i='X';}
                                else if(t%2!=0 && i=='9') {i='O';}
                                else printf("\n Position already taken !");
                                break;

                        default: printf("\n Unknown position !");
                                 sleep(2);
                                 break;
                      }
                }
    system("cls");
    if(t%2==0 && w==1){printf("\n\n The winner is : PLAYER 1");}
    else if(t%2!=0 && w==1){printf("\n\n The winner is : PLAYER 2");}
    else printf("\n\n\t Tie !");
































}
