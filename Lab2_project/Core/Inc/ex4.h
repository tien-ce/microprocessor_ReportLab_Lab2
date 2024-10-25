/*
 * ex4.h
 *
 *  Created on: Sep 14, 2024
 *      Author: thuyh
 */
#include "main.h"
#include "LED7_SEGMENT.h"
#include "software_timer.h"
#ifndef INC_EX4_H_
#define INC_EX4_H_
extern int state ;
void update7SEG ( int index );
void ex4_init();
void ex4_run();
#endif /* INC_EX4_H_ */
