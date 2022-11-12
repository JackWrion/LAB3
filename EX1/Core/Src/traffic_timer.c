/*
 * traffic_timer.c
 *
 *  Created on: Oct 31, 2022
 *      Author: ASUS
 */

#include "traffic_timer.h"


int RED1_flag = 0;
int RED2_flag = 0;
int YELLOW1_flag = 0;
int YELLOW2_flag = 0;
int GREEN1_flag = 0;
int GREEN2_flag = 0;




int status_light1 = INIT1;
int status_light2 = INIT2;


void light_control_1(){

	switch(status_light1){

		case INIT1:
			setTimer2(timer_red);
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);

			status_light1 = AUTO_RED1;

			break;

		case AUTO_RED1:

			RED1_flag = 1;

			if(timer2_flag == 1){
				setTimer2(timer_green);
				HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
				RED1_flag = 0;
				status_light1 = AUTO_GREEN1;
			}


			break;


		case AUTO_YELLOW1:

			YELLOW1_flag = 1;

			if(timer2_flag == 1){
				setTimer2(timer_red);
				YELLOW1_flag = 0;
				HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, SET);
				status_light1 = AUTO_RED1;
			}



			break;


		case AUTO_GREEN1:
			GREEN1_flag = 1;

			if(timer2_flag == 1){
				setTimer2(timer_yellow);
				HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, SET);
				GREEN1_flag = 0;
				status_light1 = AUTO_YELLOW1;
			}

			break;



		default:
			break;
		}

}




void light_control_2(){

	switch(status_light2){

		case INIT2:
			setTimer3(timer_green);
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);

			status_light2 = AUTO_GREEN2;

			break;

		case AUTO_RED2:

			RED2_flag = 1;

			if(timer3_flag == 1){
				setTimer3(timer_green);
				HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
				RED2_flag = 0;
				status_light2 = AUTO_GREEN2;
			}


			break;


		case AUTO_YELLOW2:

			YELLOW2_flag = 1;

			if(timer3_flag == 1){
				setTimer3(timer_red);
				YELLOW2_flag = 0;
				HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
				status_light2 = AUTO_RED2;
			}



			break;


		case AUTO_GREEN2:
			GREEN2_flag = 1;

			if(timer3_flag == 1){
				setTimer3(timer_yellow);
				HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
				GREEN2_flag = 0;
				status_light2 = AUTO_YELLOW2;
			}

			break;



		default:
			break;
		}

}







