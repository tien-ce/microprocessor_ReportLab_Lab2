/*
 * ex1.c
 *
 *  Created on: Sep 14, 2024
 *      Author: thuyh
 */
#include "ex1.h"
int num ;
void ex1_init(){
	num = 1;
	HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(GPIOA,EN1_Pin, RESET);
	HAL_GPIO_WritePin(GPIOA,EN2_Pin, SET);
	DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, num);
	setTimer1(0,1000);
}

void ex1_run(){
	if(timer1_flag[0]==1){
		setTimer1(0,1000);
		num=3-num;
		HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
		HAL_GPIO_TogglePin(GPIOA, EN1_Pin);
		HAL_GPIO_TogglePin(GPIOA, EN2_Pin);
		DISPLAY_LED_7_SEGMENT(GPIOB, SEG0_Pin, SEG1_Pin, SEG2_Pin, SEG3_Pin, SEG4_Pin, SEG5_Pin, SEG6_Pin, num);

	}
}
