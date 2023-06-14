#include <stdio.h>

typedef struct {
                int d,m,y;
               } birth_date;

typedef struct {
                char First_name[20],Last_name[30];
                birth_date BirthDate;
                int N1,N2;
                }student;

main ()
/*
{
    student x;
    printf(" Enter First name : ");
    scanf("%s",&x.First_name);
    printf(" Enter Last name : ");
    scanf("%s",&x.Last_name);
    printf(" Enter Birth Date Day : ");
    scanf("%d",&x.BirthDate.d);
    printf(" Enter Birth Date Month : ");
    scanf("%d",&x.BirthDate.m);
    printf(" Enter Birth Date Year : ");
    scanf("%d",&x.BirthDate.y);
    printf(" Enter First Note : ");
    scanf("%d",&x.N1);
    printf(" Enter Second Note : ");
    scanf("%d",&x.N2);
    printf("\n First name : %s \n Last name : %s \n birth Date : %d / %d / %d \n Note1 : %d / Note2 : %d",x.First_name,x.Last_name,x.BirthDate.d,x.BirthDate.m,x.BirthDate.y,x.N1,x.N2);
}
*/

{
    int i;
    student L1[30];

    for(i=0;i<30;i++) {
                            printf("\n_______Student number %d_______",i+1);
                            printf("\n Enter First name : ");
                            scanf("%s",&L1[i].First_name);
                            printf(" Enter Last name : ");
                            scanf("%s",&L1[i].Last_name);
                            printf(" Enter Birth Date Day : ");
                            scanf("%d",&L1[i].BirthDate.d);
                            printf(" Enter Birth Date Month : ");
                            scanf("%d",&L1[i].BirthDate.m);
                            printf(" Enter Birth Date Year : ");
                            scanf("%d",&L1[i].BirthDate.y);
                            printf(" Enter First Note : ");
                            scanf("%d",&L1[i].N1);
                            printf(" Enter Second Note : ");
                            scanf("%d",&L1[i].N2);
                            printf("_______________________________\n");
                      }

}
