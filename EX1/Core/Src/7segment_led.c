/*
 * 7segment_led.c
 *
 *  Created on: Nov 1, 2022
 *      Author: ASUS
 */
#include "7segment_led.h"

void display7SEG(int num){

	switch(num) {
	  case 0:
	    	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	    	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	    	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	    	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	    	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	    	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	    	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		  	break;
	  case 1:
		    HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	    	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		   	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		  	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		  	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		   	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		   	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
		  	break;
	  case 2:
		    HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		    HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		    HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
		    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		    HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		    HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		    HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		   	break;
	  case 3:
		  	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		    HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		    HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		    HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		    HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		  	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		  	break;
	  case 4:
		  	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		    HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		    HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		    HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		    HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		    HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		    break;
	  case 5:
		    HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		    HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		    HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		    HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		    HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		    HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  	    break;
	  case 6:
		  	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		    HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		    HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		    HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		    HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		    HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
		    break;
	  case 7:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  	    HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  	    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		    HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
 		    HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		    HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	  		break;
	  case 8:
		    HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		    HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	        HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	  	    HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		    HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	    	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);

		    break;
	  case 9:
	  		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	  	    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	  	    HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		    HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	  		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	  	    break;
	  default:
		  	break;
	}

}


int index_led = 0;
int led_buffer [4] = {0 , 0 , 0 , 0};
void update7SEG ( int index ) {
	switch ( index ) {
		case 0:
			// Display the first 7 SEG with led_buffer [0]
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[0]);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		break ;
		case 1:
			// Display the second 7 SEG with led_buffer [1]
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[1]);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		break ;
		case 2:
			// Display the third 7 SEG with led_buffer [2]
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[2]);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		break ;
		case 3:
			// Display the forth 7 SEG with led_buffer [3]
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			display7SEG(led_buffer[3]);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		break ;
		default :
		break ;
	}
}


void updateClockBuffer(int clock1, int clock2){

	if (clock1 < 10){
		led_buffer[0] = 0;
		led_buffer[1] = clock1;
	}
	else {
		led_buffer[0] = clock1/10;
		led_buffer[1] = clock1%10;
	}

	if (clock2 < 10){
		led_buffer[2] = 0;
		led_buffer[3] = clock2;
	}
	else {
		led_buffer[2] = clock2/10;
		led_buffer[3] = clock2%10;
	}



}




