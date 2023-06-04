#define F_CPU 8000000UL 
#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
uint16_t ADCRead(const int);
void USART_putstring(char* StringPtr);
void L1(){
	PORTB=0b01111001;
}

void L2(){
	PORTB=0b00100100;
}
void L3(){
	PORTB=0b00110000;
}
void L4(){
	PORTB=0b00011001;
}
void L5(){
	PORTB=0b00010010;
}
void L6(){
	PORTB=0b00000010;
}
void L7(){
	PORTB=0b01011000;
}
void L8(){
	PORTB=0b00000000;
}
void L9(){
	PORTB=0b00011000;
}
void L0(){
	PORTB=0b01000000;
}
void R1(){
	PORTD=0b11110001;
}
void R2(){
	PORTD=0b01001000;
}
void R3(){
	PORTD=0b01100000;
}
void R4(){
	PORTD=0b00110001;
}
void R5(){
	PORTD=0b00100100;
}
void R6(){
	PORTD=0b00000100;
}
void R7(){
	PORTD=0b10110000;
}
void R8(){
	PORTD=0b00000000;
}
void R9(){
	PORTD=0b00110000;
}
void R0(){
	PORTD=0b10000000;
}
int main(void){
	DDRB=0b11111111;
	DDRD=0b11111111;
	
	CLKPR=0b10000000;
	CLKPR=0b00000000;
	DDRC = 0;
	ADCSRA |= (1<<ADEN);
	unsigned int BaudR = 9600;
	unsigned int ubrr = (F_CPU / (BaudR*16UL))-1;
	UBRR0H = (unsigned char)(ubrr>>8);
	UBRR0L = (unsigned char)ubrr;
	UCSR0C |= (1<<UCSZ01)|(1<<UCSZ00);
	UCSR0B |= (1<<TXEN0);
	while(1){
		PORTD=0b11111111;
		PORTB=0b11111111;
		float sumVal = 0;
		char Buffer[]=" ";
		for(int i = 0; i < 50; i++)
		sumVal += (float)ADCRead(0);
		sumVal /= 50; //mean of 10 readings
		double distance = 16184*pow(sumVal,-1.201);
		//double distance = (double)sumVal*0.0002-0.0127;
		//distance=1/distance;
		int LN = (int)distance/10;
		int RN =(int)distance%10;
		
		if(LN == 1)
			L1();
		if(LN == 2)
			L2();
		if(LN == 3)
			L3();
		if(LN == 4)
			L4();
		if(LN == 5)
			L5();
		if(LN == 6)
			L6();
		if(LN == 7)
			L7();
		if(LN == 8)
			L8();
		if(LN == 9)
			L9();
		if(LN == 0)
			L0();
		
		if(RN == 1)
			R1();
		if(RN == 2)
			R2();
		if(RN == 3)
			R3();
		if(RN == 4)
			R4();
		if(RN == 5)
			R5();
		if(RN == 6)
			R6();
		if(RN == 7)
			R7();
		if(RN == 8)
			R8();
		if(RN == 9)
			R9();
		if(RN == 0)
			R0();	
	
			
		
		char  *intStr = itoa((double)distance, Buffer, 10);
		//char *intStr = itoa((int)sumVal, Buffer, 10);
		
		strcat(intStr, "\n");
		USART_putstring(intStr);
		
		_delay_ms(500);
	}
}
uint16_t ADCRead(const int channel) {
	ADMUX = 0b01000000;
	ADMUX |= channel;
	ADCSRA |= (1<<ADSC) | (1<<ADIF);
	while ( (ADCSRA & (1<<ADIF)) == 0);
	ADCSRA &= ~(1<<ADSC);
	return ADC;
}
void USART_putstring(char* StringPtr){
	while(*StringPtr != 0x00){
		while(!(UCSR0A & (1<<UDRE0)));
		UDR0 = *StringPtr;
		StringPtr++;
	}
}


