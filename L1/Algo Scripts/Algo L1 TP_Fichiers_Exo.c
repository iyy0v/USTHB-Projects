#include <stdio.h>

typedef struct {
                    int value,lenght;
                   }number;

void Compress (FILE *f)
{

    int x,i;
    number n;
    FILE *g;

    g = fopen("G.txt","w");
    fscanf(f,"%d",&x);
    i=0;
    do
    {
        if(x==0)
            {
                n.lenght = i;
                fprintf(g,"%d",n.value);
                fprintf(g," %d\n",n.lenght);
                i=0;
            }
        else
            {
                n.value = x;
                i++;
            }
    } while (fscanf(f,"%d",&x) != EOF);
    n.lenght = i;
    fprintf(g,"%d",n.value);
    fprintf(g," %d\n",n.lenght);
    fclose(g);
}

void Position (FILE *g)
{
    int max, mpos, pos;
    number n;

    fscanf(g,"%d %d",&n.value,&n.lenght);
    max = 0;
    pos = 1;
    do
    {
        if (n.value > max)
            {
                max = n.value;
                mpos = pos;
            }
        pos = pos + n.lenght + 1;

    } while (fscanf(g,"%d %d",&n.value,&n.lenght) != EOF);

    printf ("\n The position of the longest sequence in the file F is : %d", mpos);
}

void Decompress (FILE *g)
{
    int i;
    number n;
    FILE *h;

    h = fopen("H.txt","w");
    fscanf(g,"%d %d",&n.value,&n.lenght);
    for(i=0;i<n.lenght;i++)
    {
        fprintf(h,"%d\n",n.value);
    }
    fscanf(g,"%d %d",&n.value,&n.lenght);
    do
    {
        fprintf(h,"0\n");
        for(i=0;i<n.lenght;i++)
        {
            fprintf(h,"%d\n",n.value);
        }
    }while (fscanf(g,"%d %d",&n.value,&n.lenght) != EOF);
    fclose(h);
}
main()
{
    FILE *f,*g;
    f = fopen("F.txt","r");
    Compress (f);
    fclose(f);
    g = fopen("G.txt","r");
    Position (g);
    fclose(g);
    g = fopen("G.txt","r");
    Decompress(g);
    fclose(g);


}
