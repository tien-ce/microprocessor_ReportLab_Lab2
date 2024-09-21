/*
 * ex2.c
 *
 *  Created on: Sep 14, 2024
 *      Author: thuyh
 */

#include "ex2.h"
int state;
void ex2_init(){
	state = 1;
	HAL_GPIO_WritePin(GPIOA, DOT_Pin, RESET);
	DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, 1);
	SET_EN_7_SEGMENT(GPIOA, EN1_Pin, EN2_Pin, EN3_Pin, EN4_Pin, 1);
	setTimer1(1,500);
}
void ex2_run(){
	if(timer1_flag[1]==1)
	{
		setTimer1(1,500);
		HAL_GPIO_TogglePin(GPIOA, DOT_Pin);
		switch(state){
		case 1:
			DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, 2);
			SET_EN_7_SEGMENT(GPIOA, EN1_Pin, EN2_Pin, EN3_Pin, EN4_Pin, 2);
			state = 2;
			break;
		case 2:
			DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, 3);
			SET_EN_7_SEGMENT(GPIOA, EN1_Pin, EN2_Pin, EN3_Pin, EN4_Pin, 3);
			state = 3;
			break;
		case 3:
			DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, 0);
			SET_EN_7_SEGMENT(GPIOA, EN1_Pin, EN2_Pin, EN3_Pin, EN4_Pin, 4);
			state = 4;
			break;
		case 4:
			DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, 1);
			SET_EN_7_SEGMENT(GPIOA, EN1_Pin, EN2_Pin, EN3_Pin, EN4_Pin, 1);
			state = 1;
			break;
		default:
			break;
		}
	}
}
