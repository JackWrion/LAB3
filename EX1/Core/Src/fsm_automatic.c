/*
 * fsm_automatic.c
 *
 *  Created on: Oct 28, 2022
 *      Author: ASUS
 */

#include "fsm_automatic.h"


/*

void fsm_automatic_run(){

	switch(status){

	case INIT:
		setTimer1(500);
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, SET);
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, SET);

		status = AUTO_RED;

		break;
	case AUTO_RED:

		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);

		if(timer1_flag == 1){
			setTimer1(300);
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
			status = AUTO_GREEN;
		}

		if (isButton1Pressed()){
			setTimer1(1000);
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
			status = MAN_RED;
		}



		break;


	case AUTO_GREEN:

		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);

		if(timer1_flag == 1){
			setTimer1(200);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, SET);
			status = AUTO_YELLOW;
		}

		if(isButton1Pressed()){
			setTimer1(1000);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, SET);
			status = MAN_GREEN;
		}



		break;


	case AUTO_YELLOW:
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);

		if(timer1_flag == 1){
			setTimer1(500);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, SET);
			status = AUTO_RED;
		}

		if (isButton1Pressed()){
			setTimer1(1000);
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, SET);
			status = MAN_YELLOW;
		}

		break;
	default:
		break;
	}

}

*/








