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
	SET_EN_7_SEGMENT(GPIOA, EN1_Pin, EN2_Pin, EN3_Pin, EN4_Pin, 1);
	DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, 1);
	setTimer1(1,50);
}
void ex2_run(){
	if(timer1_flag[1]==1)
	{
		setTimer1(1,50);
		HAL_GPIO_TogglePin(GPIOA, DOT_Pin);
		switch(state){
		case 1:
			state = 2;
			SET_EN_7_SEGMENT(GPIOA, EN1_Pin, EN2_Pin, EN3_Pin, EN4_Pin, 2);
			DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, 2);
			break;
		case 2:
			state = 3;
			SET_EN_7_SEGMENT(GPIOA, EN1_Pin, EN2_Pin, EN3_Pin, EN4_Pin, 3);
			DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, 3);
			break;
		case 3:
			state = 4;
			SET_EN_7_SEGMENT(GPIOA, EN1_Pin, EN2_Pin, EN3_Pin, EN4_Pin, 4);
			DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, 0);
			break;
		case 4:
			state = 1;
			SET_EN_7_SEGMENT(GPIOA, EN1_Pin, EN2_Pin, EN3_Pin, EN4_Pin, 1);
			DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, 1);
			break;
		default:
			break;
		}
	}
}