@ECHO OFF
flex lexical.l
bison -d synt.y
gcc lex.yy.c synt.tab.c -lfl -ly
a.exe < test/test5.txt
PAUSE