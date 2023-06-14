#include <stdio.h>

main()
{
    int i,I,r;
    I=1;
    while (I<=9) {
                   printf(" |                    |\n |__________%d_________|\n |                    |\n",I);
                   for (i=1; i<=9; i++)
                   {
                       r=I*i;
                       /* ignore the IF it's just for the design */
                       if (r<10) printf(" |      %d x %d = %d     | \n",I,i,r);
                       else printf(" |      %d x %d = %d    | \n",I,i,r);
                   }
                   I=I+1;
                 }
    printf(" |____________________|\n");
}
