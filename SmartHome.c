/*
 * Smart_Home.c
 *
 * Created: Jan 16, 2026
 * Author : LoaiEsam37
 */ 

#include <avr/io.h>

#include "DIO_interface.h"

#include "ADC_interface.h"
#include "LM35_interface.h"

#define LED_ONE_PORT	DIO_PORTC
#define LED_TWO_PORT	DIO_PORTC
#define LED_THREE_PORT	DIO_PORTC
#define LED_FOUR_PORT	DIO_PORTC

#define LED_ONE_PIN		DIO_PIN1
#define LED_TWO_PIN		DIO_PIN2
#define LED_THREE_PIN	DIO_PIN3

void LED_void_init(void);
void LED_voidReset(void);


int main(void)
{
	u16 local_u16Temp;

	LED_void_init();
	LM35_voidInit(LM35_ADC_CHANNEL_1);

	while (1)
	{
		LM35_voidGetTemprature(LM35_ADC_CHANNEL_1, &local_u16Temp);

		LED_voidReset();

		if (local_u16Temp < 25)
		{
			DIO_voidSetPinValue(LED_ONE_PORT, LED_ONE_PIN, DIO_PIN_HIGH);
		}
		else if (local_u16Temp < 50)
		{
			DIO_voidSetPinValue(LED_TWO_PORT, LED_TWO_PIN, DIO_PIN_HIGH);
		}
		else
		{
			DIO_voidSetPinValue(LED_THREE_PORT, LED_THREE_PIN, DIO_PIN_HIGH);
		}
	}

}

void LED_void_init(void)
{
	DIO_voidSetPinDirection(LED_ONE_PORT,   LED_ONE_PIN,   DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(LED_TWO_PORT,   LED_TWO_PIN,   DIO_PIN_OUTPUT);
	DIO_voidSetPinDirection(LED_THREE_PORT, LED_THREE_PIN, DIO_PIN_OUTPUT);
}

void LED_voidReset(void)
{
	DIO_voidSetPinValue(LED_ONE_PORT,   LED_ONE_PIN,   DIO_PIN_LOW);
	DIO_voidSetPinValue(LED_TWO_PORT,   LED_TWO_PIN,   DIO_PIN_LOW);
	DIO_voidSetPinValue(LED_THREE_PORT, LED_THREE_PIN, DIO_PIN_LOW);
}
