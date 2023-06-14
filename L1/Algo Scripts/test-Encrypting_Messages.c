#include <stdio.h>

main()
{
    printf("\n___________________________________________________ ENCRYPTWARE ___________________________________________________\n ");
    printf(" Hi there! This is EncryptWare, it's a software that will ENCRYPT your messages for more SECURITY and PRIVACY ...\n\n");
    printf(" Enter the message that you want to encrypt then the encryption will appear below the message :\n");
    char x;
    top:
     scanf("%c",&x);
     if ( (int)x>=33 && (int)x<=126)
        { x=-(int)x+14;}
     else if( (int)x==10 || (int)x==32 || (int)x<=-2 && (int)x>=-18 ) {x=x;}
     else { x=-(int)x;};
     printf("%c",x);
    goto top;

//Ayoub Nait Mihoub Production :)
}
