Pile segment stack ;
	dw 100 dup(?)
Pile ends
DATA segment
	A         DW	?
	B         DW	?
	C         DW	?
	D         DW	?
	E         DW	?
	F         DW	?
	t0        DW	?
	t1        DW	?
	t2        DW	?
	t3        DW	?
DATA ends
CODE SEGMENT
	Pgm:
	ASSUME CS:CODE, DS:DATA
	MOV AX,DATA
	MOV DS, AX
	MOV A, 1h
	MOV AX, 1h
	ADD AX, 1h
	MOV t0, AX
	MOV B, AX
	MOV AX, t0
	MOV C, AX
	MOV D, 1h
	MOV AX, 1h
	ADD AX, 2h
	MOV t2, AX
	MOV E, AX
	MOV AX, t0
	ADD AX, 5h
	MOV t3, AX
	MOV F, AX
	MOV AH, 4Ch
	INT 21h
CODE ENDS
END Pgm