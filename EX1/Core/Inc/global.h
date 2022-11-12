/*
 * global.h
 *
 *  Created on: Oct 28, 2022
 *      Author: ASUS
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "main.h"
#include "button.h"
#include "Software_Timer.h"

#define INIT		1
#define AUTO_RED	2
#define AUTO_GREEN	3
#define AUTO_YELLOW	4

#define MAN_RED		12
#define MAN_GREEN	13
#define MAN_YELLOW	14



extern int status; 		// Khai bao lai tren main
extern int timer_red;
extern int timer_yellow;
extern int timer_green;



#endif /* INC_GLOBAL_H_ */
