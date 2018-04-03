/*
 * AVR_SWUART.c
 *
 * Created: 2018-04-03 오후 9:33:13
 * Author : kiki
 */ 

#ifndef F_CPU	
#define F_CPU	16000000L
#endif

#include <avr/io.h>
#include <util/delay.h>

#include "328P_SWUART.h"

uint8_t rcvByte;

int main(void)
{
	SWU_Initialize();
	
    /* Replace with your application code */
    while (1) 
    {
		if(sRxDone)
		{
			SWU_RxByte(&rcvByte);
			SWU_TxByte(rcvByte);
		}
    }
}

