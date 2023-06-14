#ifndef _MYLIB_H_
#define _MYLIB_H_

 typedef struct stackElement
   {
   	 char value[10] ;
   	 struct stackElement *next ;
   } stackElement, *stack ;

stack NewStack(void);
bool EmptyStack (stack s);
stack Stack (stack s , char c[10]);
stack UnStack(stack s,char *c);
bool OprndCheck (char c[10]);
bool OprtrCheck (char c[10]);
int Priority (char c[10]);
bool ValidCheck (char t[][10], int len);
const char* Calculate ( char x1[10], char x2[10], char op[10]);



#endif
