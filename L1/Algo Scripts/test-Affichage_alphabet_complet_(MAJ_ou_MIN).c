#include <stdio.h>

char X,a='a',z='z',A='A',Z='Z';
main()
{
     printf("\n_________________________________________ SOFTBET __________________________________________\n");
     printf(" Hi there! This is SoftBet, it's a software that will write the Alphabet letters for you...\n\n");
     printf(" For UPPERCASE Alphabet enter 'A' , for LOWERCASE Alphabet enter 'a' : ");
 top:
     scanf("%c",&X);
     printf("\n");
     if (X==a || X==A) {while ((X<=z && X>=a) || (X<=Z && X>=A))
                                             {
                                               printf(" %c ",X);
                                               X=X+1;
                                             };
                     }
     else printf(" ---! Unknown character :( Please read the instruction before typing !---\n");
     printf("\n____________________________________________________________________________________________\n");
     getchar();
     printf("\n For UPPERCASE enter 'A' , for LOWERCASE enter 'a' : ");
 goto top;


}
