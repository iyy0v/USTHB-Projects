#include <stdio.h>

main ()
{
    int a;
    printf(" Please enter your age : ");
    scanf("%d",&a);
    if ((a==7) || (a==6)) printf(" Your category is : Poussin");
    else if ((a==8) || (a==9)) printf(" Your category is : Pupille");
    else if ((a==10) || (a==11)) printf(" Your category is : Minime");
    else if ((a>=12) && (a<=15)) printf(" Your category is : Cadet");
    else if ((a>=16) && (a<=18)) printf(" Your category is : Junior");
    else if ((a>=19) && (a<=40)) printf(" Your category is : Senior");
    else printf(" Unknown category !");

}



/* switch( expression )
{
	case value-1:
			Block-1;
			Break;
	case value-2:
			Block-2;
			Break;
	case value-n:
			Block-n;
			Break;
	default:
			Block-1;
			Break;
}
Statement-x;
*/
