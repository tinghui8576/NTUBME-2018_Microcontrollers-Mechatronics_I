/*
 * Lab6Advanced.cpp
 *
 * Created: 2019/4/8 下午 07:48:06
 * Author : USER
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
void C()
{
	PORTB=0b11000110;
	TCNT0=226;
	TCCR0A=0; // normal mode, int clk
	TCCR0B=0b00000011; // p=64, start Timer
	while ((TIFR0&(1<<TOV0))==0); // wait for flag TOV0=1
	TCCR0B=0; // stop Timer
	TIFR0=(1<<TOV0); // clear TOV0
	PORTC=PORTC^0b00100000;
}

void hC()
{
	PORTB=0b11000110;
	TCNT0=241;
	TCCR0A=0; // normal mode, int clk
	TCCR0B=0b00000011; // p=64, start Timer
	while ((TIFR0&(1<<TOV0))==0); // wait for flag TOV0=1
	TCCR0B=0; // stop Timer
	TIFR0=(1<<TOV0); // clear TOV0
	PORTC=PORTC^0b00100000;
}

void D()
{
	PORTB=0b01000000;
	TCNT0=43;
	TCCR0A=0; // normal mode, int clk
	TCCR0B=0b00000010; // p=8, start Timer
	while ((TIFR0&(1<<TOV0))==0); // wait for flag TOV0=1
	TCCR0B=0; // stop Timer
	TIFR0=(1<<TOV0); // clear TOV0
	PORTC=PORTC^0b00100000;
}

void E()
{
	PORTB=0b00000110;
	TCNT0=250;
	TCCR0A=0; // normal mode, int clk
	TCCR0B=0b00000100; // p=256, start Timer
	while ((TIFR0&(1<<TOV0))==0); // wait for flag TOV0=1
	TCCR0B=0; // stop Timer
	TIFR0=(1<<TOV0); // clear TOV0
	PORTC=PORTC^0b00100000;
}

void F()
{
	PORTB=0b00001110;
	TCNT0=77;
	TCCR0A=0; // normal mode, int clk
	TCCR0B=0b00000010; // p=8, start Timer
	while ((TIFR0&(1<<TOV0))==0); // wait for flag TOV0=1
	TCCR0B=0; // stop Timer
	TIFR0=(1<<TOV0); // clear TOV0
	PORTC=PORTC^0b00100000;
}

void G()
{
	PORTB=0b00000010;
	TCNT0=251;
	TCCR0A=0; // normal mode, int clk
	TCCR0B=0b00000100; // p=256, start Timer
	while ((TIFR0&(1<<TOV0))==0); // wait for flag TOV0=1
	TCCR0B=0; // stop Timer
	TIFR0=(1<<TOV0); // clear TOV0
	PORTC=PORTC^0b00100000;
}

void A()
{
	PORTB=0b00001000;
	TCNT0=238;
	TCCR0A=0; // normal mode, int clk
	TCCR0B=0b00000011; // p=64, start Timer
	while ((TIFR0&(1<<TOV0))==0); // wait for flag TOV0=1
	TCCR0B=0; // stop Timer
	TIFR0=(1<<TOV0); // clear TOV0
	PORTC=PORTC^0b00100000;
}

void B()
{
	PORTB=0b00000000;
	TCNT0=122;
	TCCR0A=0; // normal mode, int clk
	TCCR0B=0b00000010; // p=8, start Timer
	while ((TIFR0&(1<<TOV0))==0); // wait for flag TOV0=1
	TCCR0B=0; // stop Timer
	TIFR0=(1<<TOV0); // clear TOV0
	PORTC=PORTC^0b00100000;
}
void S()
{
	PORTC=0;
}

int main(void)
{
    /* Replace with your application code */
	CLKPR=(1<<CLKPCE);
	CLKPR=0b00000011; // set clk to 1Mhz
	DDRD=0b00000000;
	DDRB=0b11111111;
	DDRC=0b00100000;
	
    while (1) 
    {
		for(int i=0; i<=250; i++){
			C();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=250; i++){
			C();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			D();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			C();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			F();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=1000; i++){
			E();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=250; i++){
			C();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=250; i++){
			C();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			D();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			C();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			G();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=1000; i++){
			F();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=250; i++){
			C();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=250; i++){
			C();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			hC();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			A();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			F();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			E();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			D();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=250; i++){
			B();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=250; i++){
			B();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			A();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			F();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=500; i++){
			G();
		}
		for(int i=0; i<=50; i++){
			S();
		}
		for(int i=0; i<=1000; i++){
			F();
		}
		for(int i=0; i<=50; i++){
			S();
		}
    }
}

