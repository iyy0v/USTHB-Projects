#include <stdio.h>

main()
{
    char str[100];
    char x,v,X;
    int i,k;
    /*
    scanf("%c%c",&x,&v);

    str[0]=x;
    str[1]=v;
    str[2]='\0';
    printf("%s",str);
    */
// THIS SECTION IS STILL UNDER TESTING
    printf("enter key :");
    scanf("%d",&k);
    i=0;
    x=0;
    v='#';
    while (x != v){
                    scanf("%c",&x);
                    {
                        if ( (int)x>=33 && (int)x<=126)
                            {X=-(int)x+k;}
                        else if( (int)x==10 || (int)x==32 || (int)x<=-2 && (int)x>=-18 )
                            {X=x;}
                        else { X=-(int)x;};
                    }
                    str[i]=X; i++;
                  }
    str[i-1]='\0';
    printf("%s",str);
//



}
