#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"


int main()
{
    int i,j,h,len;
    char s[100] = "",t[100][10],c[10],x1[10],x2[10],result[10];
    stack P,R;

    //------------------------------Conversion--------------------------
    printf("\n Enter an Infixed expression please : ");
    scanf("%[^\n]s",&s);

    j = 0;
    h = 0;

    for(i = 0; i < strlen(s); i++)
    {
        switch(s[i])
        {
            case '+':
            case '*':
            case '/':
            case '%':
            case '(':
            case ')':
                t[j][0] = s[i];
                t[j][1] = '\0';
                j++;
                h = 0;
                break;

            case '-':
                t[j][0] = '-';
                if (s[i+1] == ' ')
                {
                    t[j][1] = '\0';
                    j++;
                }
                else
                {
                    h++;
                }
                break;

            case ' ':
                h = 0;
                break;

            default:
                t[j][h] = s[i];
                h++;
                if (s[i+1] == '+' || s[i+1] == '-' || s[i+1] == '*' || s[i+1] == '/' || s[i+1] == '%' || s[i+1] == '(' || s[i+1] == ')' || s[i+1] == ' ' || s[i+1] == '\0')
                {
                    t[j][h] = '\0';
                    j++;
                }
                break;
        }
    }

    len = j;

    printf("\n\n The table of the expression after separating it is :\n");
    for(i = 0; i < len; i++)
    {
        printf(" %s |",t[i]);
    }

    //----------------------------------------------------------------------

    //------------------------------Verification----------------------------

    if (ValidCheck(t, len) == true)
    {
        printf("\n\n The Expression is Valid !\n\n");
    }
    else
    {
        printf("\n\n The Expression is Invalid !\n\n");
        goto TheEnd;
    }

    //----------------------------------------------------------------------

    //-----------------------------Transformation---------------------------

    P = NewStack();
    R = NewStack();

    for(i = 0; i < len; i++)
    {
        if(OprndCheck(t[i]) == true) { R = Stack(R,t[i]); }

        if(t[i] == "(") { P = Stack(P,t[i]); }

        if(OprtrCheck(t[i]) == true)
        {
            while(EmptyStack(P) == false && OprtrCheck(P->value) == true && Priority(t[i]) <= Priority(P->value))
            {
                P = UnStack(P,c);
                R = Stack(R,c);
            }
            P = Stack(P,t[i]);
        }

        if(t[i] == ")")
        {
            while(EmptyStack(P) == false && P->value != "(")
            {
                P = UnStack(P,c);
                R = Stack(R,c);
            }
            P = UnStack(P,c);
        }
    }

    while(EmptyStack(R) == false)
    {
        R = UnStack(R,c);
        P = Stack(P,c);
    }

    R = P;

    printf("The Postfixed form of the previous expression is :\n");
    while(R != NULL)
    {
        printf(" %s",R->value);
        R = R->next;
    }

    //-----------------------------------------------------------------------

    //------------------------------Evaluation-------------------------------

    R = NewStack();

    while(EmptyStack(P) == false)
    {
        P = UnStack(P,c);

        if(OprndCheck(c) == true) { R = Stack(R,c); }
        else
        {
            R = UnStack(R,x1);
            R = UnStack(R,x2);
            strcpy(result , Calculate(x2,x1,c));
            R = Stack(R,result);

        }
    }

    printf("\n\n The Result = %s\n\n", R->value);
    //------------------------------------------------------------------------

    TheEnd:
    getchar();
    getchar();
    return 0;
}
