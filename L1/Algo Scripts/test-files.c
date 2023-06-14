#include <stdio.h>

main()
{
    FILE *fp;
    char s[7],c[7];


    if ((fopen("C://Users/Ayoub Nait Mihoub/Desktop/file.txt","r"))!= NULL) printf("no file !");
    fp = fopen("C://Users/Ayoub Nait Mihoub/Desktop/file.txt","w");
    scanf("%[^\n]s",&c);
    fprintf(fp,"%s",c);
    fclose(fp);
    fp = fopen("C://Users/Ayoub Nait Mihoub/Desktop/file.txt","r");
    fscanf(fp,"%[^\n]s",s);
    printf("the string in the file is : %s",s);

    fclose(fp);


    //remove("C://Users/Ayoub Nait Mihoub/Desktop/file.txt");

}
