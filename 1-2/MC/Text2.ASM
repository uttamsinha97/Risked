ORG 0H
	SJMP 30H
ORG 30H
	MOV A,22H
	MOV B,21H
	MUL AB
	MOV R1,B
	MOV 43H,A
	MOV A,22H
	MOV B,20H
	MUL AB
	ADD A,R1
	MOV R2,A
	MOV A,#00
	ADDC A,B
	MOV R3,A
	MOV A,23H
	MOV B,21H
	MUL AB
	MOV R4,A
	MOV R5,B
	MOV A,23H
	MOV B,20H
	MUL AB
	ADD A,R5
	MOV R5,A
	MOV A,#00
	ADDC A,B
	MOV R6,A
	MOV A,R2
	ADD A,R4
	MOV 42H,A
	MOV A,R3
	ADDC A,R5
	MOV 41H,A
	MOV A,#00
	ADDC A,R6
	MOV 40H,A
LP:SJMP LP
END
