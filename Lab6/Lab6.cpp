/*
 * Lab6.cpp
 *
 * Created: 2019/4/8 下午 07:31:07
 * Author : USER
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>

void C();
void hC();
void D();
void E();
void F();
void G();
void A();
void B();

int main(void)
{
	CLKPR=(1<<CLKPCE);
	CLKPR=0b00000011; // set clk to 1Mhz
	DDRD=0b00000000;
	DDRB=0b11111111;
	DDRC=0b00100000;
	
	
	while (1)
	{
		PORTB=0b11111111;
		if(PIND & 0b00000001){ //1
			
			C();
		}
		else if(PIND & 0b10000000){ //2
			
			hC();
			
		}
		else if(PIND & 0b00000010){ //2
			
			D();
			
		}
		else if(PIND & 0b00000100){ //3
			
			E();
			
		}
		else if(PIND & 0b00001000){ //4
			
			F();
			
		}
		else if(PIND & 0b00010000){ //5

			G();
	
		}
		else if(PIND & 0b00100000){ //6
			
			A();
		}
		else if(PIND & 0b01000000){ //7
			
			B();
		}
		else
		PORTC = 0;
	}

}

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

