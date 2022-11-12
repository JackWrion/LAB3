/*
 * 7segment_led.h
 *
 *  Created on: Nov 1, 2022
 *      Author: ASUS
 */

#ifndef INC_7SEGMENT_LED_H_
#define INC_7SEGMENT_LED_H_

#include "main.h"

extern int index_led;
extern int led_buffer[4];


void update7SEG(int index);

void updateClockBuffer(int clock1, int clock2);


#endif /* INC_7SEGMENT_LED_H_ */
