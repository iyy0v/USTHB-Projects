#include <stdio.h>

main()
{
    printf("\n___________________________________________________ DECRYPTWARE _____________________________________________________\n ");
    printf(" Hi there! This is DecryptWare, it's a software that will DECRYPT your encrypted messages (encrypted by EncryptWare).\n\n");
    printf(" Enter the message that you want to decrypt then the decryption will appear below the message :\n");
    char x;
    top:
     scanf("%c",&x);
     if ( (int)x<=-19 && (int)x>=-112)
        { x=-((int)x-14);}
     else if( (int)x==10 || (int)x==32 || (int)x<=-2 && (int)x>=-18 ) {x=x;}
     else { x=-(int)x;};
     printf("%c",x);
    goto top;

//Ayoub Nait Mihoub Production :)
}
