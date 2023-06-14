#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"



stack NewStack(void)
 {
 	return NULL ;
 }

bool EmptyStack (stack s)
{
	if (s == NULL)
    {
		return true;
	}

	else
    {
        return false;
	}
}

stack Stack (stack s , char c[10])
{
	stack element;

	element = malloc(sizeof(*element)) ;

	if (element == NULL)
    {
		printf("\n Allocation Error !") ;
	}

	strcpy(element->value , c);
	element->next = s;

	return element;
}

stack UnStack(stack s,char *c)
{
	stack element ;

	if(EmptyStack(s) == true)
    {
        printf("Pile is empty !");
        return s ;
    }

	strcpy(c , s->value);
	element = s->next ;

	free(s) ;

	return element ;
}

bool OprtrCheck (char c[10])
{
    switch(c[0])
    {
        case '*':
        case '/':
        case '+':
        case '%':
            return true;
            break;
        case '-':
            if(c[1] == '\0' || c[1] == ' ') { return true; }
            else { return false; }
            break;
        default:
            return false;
            break;
    }
}

bool OprndCheck (char c[10])
{
    switch(c[0])
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            return true;
            break;
        case '-':
            if (OprtrCheck(c) == false) { return true; }
            else { return false; }
            break;
        default:
            return false;
            break;
    }
}

int Priority (char c[10])
{
    switch(c[0])
    {
        case '+':
        case '-':
            return 1;
            break;
        case '*':
        case '/':
        case '%':
            return 2;
            break;
        default:
            printf("\n Unknown Operator !");
            return 0;
            break;
    }
}


bool ValidCheck (char t[][10], int len)
{
    int p = 0, i = 0;
    bool Valid = true;

    while (i < len && Valid == true)
    {
        if(t[i][0] == '(') { p++; }
        else if (t[i][0] == ')') { p--; }

        if (p < 0) { Valid = false; }
        i++;
    }
    if (p != 0) { Valid = false; }

    return Valid;
}

const char* Calculate ( char x1[10], char x2[10], char op[10])
{
    double result;
    char* restring = malloc(10);

    switch(op[0])
    {
        case '+':
            result = atof(x1) + atof(x2);
            break;
        case '-':
            result = atof(x1) - atof(x2);
            break;
        case '/':
            result = atof(x1) / atof(x2);
            break;
        case '*':
            result = atof(x1) * atof(x2);
            break;
        case '%':
            result = (float)(atoi(x1) % atoi(x2));
            break;
        default:
            printf("\n Inputs Error !");
            result = 0;
            break;
    }

    if((result - (int)result) == 0)
    {
        itoa((int)result, restring, 10);
    }
    else
    {
        gcvt(result, sizeof(double), restring);
    }

    return restring;
}
