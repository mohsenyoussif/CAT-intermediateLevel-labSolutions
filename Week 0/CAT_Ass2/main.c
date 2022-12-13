/*
 * main.c
 *
 *  Created on: 12 Dec 2022
 *  Author: mohsen
 *  Description : Write a C Code that apply Some LED animations   ( Snake effect)
 */


#include "avr/delay.h"
#include "Platform_Types.h"
#include "BIT_MATH.h"

// define the addresses of the registers
#define DDRA             *((vuint8*)0X3A)
#define PORTA           *((vuint8*)0X3B)
#define PINA           *((vuint8*)0X39)

// defining the number of used led
#define NUM_OF_LEDS             8

void main(void)
{
	DDRA =0xff ;
	sint8 iterator =0 ;
	while(1)
	{
		for(iterator = 0 ; iterator< NUM_OF_LEDS ;iterator++)
		{
			PORTA = SET_BIT(PORTA,iterator);
			_delay_ms(200);
		}
		for(iterator = 0 ; iterator< NUM_OF_LEDS ;iterator++)
		{
			PORTA = CLR_BIT(PORTA,iterator);
			_delay_ms(200);
		}

	}
}
