/*
 * ex7.h
 *
 *  Created on: Sep 20, 2024
 *      Author: thuyh
 */

#ifndef INC_EX7_H_
#define INC_EX7_H_



#endif /* INC_EX7_H_ */
#include "main.h"
#include "software_timer.h"
#include "LED.h"
extern int hour , minute , second;
extern int index_led;
void update7SEG ( int index );
void updateClockBuffer();
void ex7_init();
void ex7_run();