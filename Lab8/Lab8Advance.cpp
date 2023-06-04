/*
 * GccApplication3.cpp
 *
 * Created: 2019/4/22 下午 03:50:13
 * Author : USER
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

void str2(){
	OCR0A=200;
	OCR0B=0;
	OCR2A=200;
	OCR2B=0;
	TCCR0A=0b10100011; // fast PWM, non-inverted
	TCCR0B=0b00000010; // timer prescaler
	TCCR2A=0b10100011; // fast PWM, non-inverted
	TCCR2B=0b00000010; // timer prescaler
	_delay_ms(4000);
}
void left(){
	OCR0A=255;
	OCR0B=0;
	OCR2A=100;
	OCR2B=0;
	TCCR0A=0b10100011; // fast PWM, non-inverted
	TCCR0B=0b00000010; // timer prescaler
	TCCR2A=0b10100011; // fast PWM, non-inverted
	TCCR2B=0b00000010; // timer prescaler
	_delay_ms(2540);
}
int main(void)
{
	CLKPR=(1<<CLKPCE);
	CLKPR=0b00000011; // set clk to 1Mhz
	DDRD=0b11111111;
	DDRB=0b11111111;
	//OCR0A=200;
	//OCR0B=0;
//	OCR2A=200;
//	OCR2B=0;
	while(1)
	{
		
		str2();
		left();
	}
	
	
	
	
}

