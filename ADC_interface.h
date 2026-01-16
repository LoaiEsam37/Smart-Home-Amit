/*
 * ADC_interface.h
 *
 *  Created on: Jan 16, 2026
 *      Author: LoaiEsam37
 */

#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

#define ADC_REFERANCE_AVCC      0
#define ADC_REFERANCE_AREF      1
#define ADC_REFERANCE_INTERNAL  2

#define ADC_CHANNEL_0      0
#define ADC_CHANNEL_1      1
#define ADC_CHANNEL_2      2
#define ADC_CHANNEL_3      3
#define ADC_CHANNEL_4      4
#define ADC_CHANNEL_5      5
#define ADC_CHANNEL_6      6
#define ADC_CHANNEL_7      7

void ADC_voidInit(u8 copy_u8RefrenceVoltage);
void ADC_voidGetDigitalValue(u8 copy_u8ChannelId, u16* copy_pu16DigitalValue);


#endif /* ADC_INTERFACE_H_ */
