/*
 * fsm_automatic.c
 *
 *  Created on: Oct 28, 2022
 *      Author: ASUS
 */

#include "fsm_manual.h"
#include "7segment_led.h"

int temp_timer = 0;


void fsm_manual_run(){

	switch(status){

	case INIT:
		// dem nguoc
		updateClockBuffer(timer2_counter/100 +1, timer3_counter/100 +1);

		if (isButton1Pressed()){
			status = MAN_RED;
			temp_timer = 0;
		}
		break;


	case MAN_RED:

		if (isButton1Pressed()){
			status = MAN_YELLOW;
			temp_timer = 0;
		}
		if (isButton2Pressed()){
			temp_timer = temp_timer + 1000;
		}
		if (isButton3Pressed()){
			timer_red = temp_timer;
			status = INIT;
		}
		//Display MODE on 7SEG LEDs
			//Mode 2 => 2 leds display 82, 	and the other 2 leds display increased time.
		updateClockBuffer(82, temp_timer/1000 );

		break;




	case MAN_YELLOW:
		if (isButton1Pressed()){
			status = MAN_GREEN;
			temp_timer = 0;
		}
		if (isButton2Pressed()){
			temp_timer = temp_timer + 1000;
		}
		if (isButton3Pressed()){
			timer_yellow = temp_timer;
			status = INIT;
		}
		//Display MODE on 7SEG LEDs
			//Mode 3 => 2 leds display 83, 	and the other 2 leds display increased time.
		updateClockBuffer(83, temp_timer/1000);


		break;


	case MAN_GREEN:

			if (isButton1Pressed()){
				status = INIT;
				temp_timer = 0;
			}
			if (isButton2Pressed()){
				temp_timer = temp_timer + 1000;
			}
			if (isButton3Pressed()){
				timer_green = temp_timer;
				status = INIT;
			}
			//Display MODE on 7SEG LEDs
				//Mode 4 => 2 leds display 84, 	and the other 2 leds display increased time.
			updateClockBuffer(84, temp_timer/1000);

		break;



	default:
		break;
	}

}










