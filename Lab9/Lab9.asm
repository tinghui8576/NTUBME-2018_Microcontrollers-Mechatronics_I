;
; AssemblerApplication2.asm
;
; Created: 2019/5/6 下午 05:33:35
; Author : USER
;


; Replace with your application code
	LDI R21, 0b11111111
	OUT DDRB, R21
	LDI R20, 0b11111111
	OUT DDRD, R20
//0
	LDI R21, 0b00100000
	OUT PORTB, R21
	//0
	LDI R20, 0b01000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//1
	LDI R20, 0b11110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//2
	LDI R20, 0b10001000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//3
	LDI R20, 0b10100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//4
	LDI R20, 0b00110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//5
	LDI R20, 0b00100100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//6
	LDI R20, 0b00000100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//7
	LDI R20, 0b01110000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//8
	LDI R20, 0b00000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//9
	LDI R20, 0b00100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
//1
	LDI R21, 0b11111001
	OUT PORTB, R21

	//0
	LDI R20, 0b01000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//1
	LDI R20, 0b11110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//2
	LDI R20, 0b10001000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//3
	LDI R20, 0b10100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//4
	LDI R20, 0b00110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//5
	LDI R20, 0b00100100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//6
	LDI R20, 0b00000100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//7
	LDI R20, 0b01110000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//8
	LDI R20, 0b00000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//9
	LDI R20, 0b00100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
//2
	LDI R21, 0b11000100
	OUT PORTB, R21

	//0
	LDI R20, 0b01000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//1
	LDI R20, 0b11110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//2
	LDI R20, 0b10001000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//3
	LDI R20, 0b10100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//4
	LDI R20, 0b00110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//5
	LDI R20, 0b00100100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//6
	LDI R20, 0b00000100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//7
	LDI R20, 0b01110000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//8
	LDI R20, 0b00000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//9
	LDI R20, 0b00100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
//3
	LDI R21, 0b11010000
	OUT PORTB, R21

	//0
	LDI R20, 0b01000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//1
	LDI R20, 0b11110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//2
	LDI R20, 0b10001000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//3
	LDI R20, 0b10100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//4
	LDI R20, 0b00110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//5
	LDI R20, 0b00100100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//6
	LDI R20, 0b00000100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//7
	LDI R20, 0b01110000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//8
	LDI R20, 0b00000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//9
	LDI R20, 0b00100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
//4
	LDI R21, 0b10011001
	OUT PORTB, R21

	//0
	LDI R20, 0b01000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//1
	LDI R20, 0b11110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//2
	LDI R20, 0b10001000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//3
	LDI R20, 0b10100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//4
	LDI R20, 0b00110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//5
	LDI R20, 0b00100100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//6
	LDI R20, 0b00000100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//7
	LDI R20, 0b01110000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//8
	LDI R20, 0b00000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//9
	LDI R20, 0b00100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
//5
	LDI R21, 0b00010010
	OUT PORTB, R21

	//0
	LDI R20, 0b01000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//1
	LDI R20, 0b11110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//2
	LDI R20, 0b10001000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//3
	LDI R20, 0b10100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//4
	LDI R20, 0b00110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//5
	LDI R20, 0b00100100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//6
	LDI R20, 0b00000100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//7
	LDI R20, 0b01110000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//8
	LDI R20, 0b00000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//9
	LDI R20, 0b00100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
//6
	LDI R21, 0b00000010
	OUT PORTB, R21

	//0
	LDI R20, 0b01000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//1
	LDI R20, 0b11110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//2
	LDI R20, 0b10001000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//3
	LDI R20, 0b10100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//4
	LDI R20, 0b00110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//5
	LDI R20, 0b00100100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//6
	LDI R20, 0b00000100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//7
	LDI R20, 0b01110000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//8
	LDI R20, 0b00000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//9
	LDI R20, 0b00100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
//7
	LDI R21, 0b10111000
	OUT PORTB, R21

	//0
	LDI R20, 0b01000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//1
	LDI R20, 0b11110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//2
	LDI R20, 0b10001000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//3
	LDI R20, 0b10100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//4
	LDI R20, 0b00110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//5
	LDI R20, 0b00100100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//6
	LDI R20, 0b00000100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//7
	LDI R20, 0b01110000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//8
	LDI R20, 0b00000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//9
	LDI R20, 0b00100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
//8
	LDI R21, 0b00000000
	OUT PORTB, R21

	//0
	LDI R20, 0b01000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//1
	LDI R20, 0b11110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//2
	LDI R20, 0b10001000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//3
	LDI R20, 0b10100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//4
	LDI R20, 0b00110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//5
	LDI R20, 0b00100100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//6
	LDI R20, 0b00000100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//7
	LDI R20, 0b01110000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//8
	LDI R20, 0b00000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//9
	LDI R20, 0b00100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
//9
	LDI R21, 0b00010000
	OUT PORTB, R21

	//0
	LDI R20, 0b01000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//1
	LDI R20, 0b11110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//2
	LDI R20, 0b10001000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//3
	LDI R20, 0b10100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//4
	LDI R20, 0b00110001
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//5
	LDI R20, 0b00100100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//6
	LDI R20, 0b00000100
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//7
	LDI R20, 0b01110000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//8
	LDI R20, 0b00000000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY
	//9
	LDI R20, 0b00100000
	OUT PORTD, R20
	CALL DELAY
	CALL DELAY




DELAY:LDI R17, 12
L2: 	LDI R18, 0xFF
L3: 	LDI R19, 0xFF
L4:	DEC R19
	BRNE L4
	DEC R18
	BRNE L3
	DEC R17
	BRNE L2
	RET
