/*
 * ex9.c
 *
 *  Created on: Sep 21, 2024
 *      Author: thuyh
 */
#include "ex9.h"
int index_col = 0;
void ex9_init(){
	setTimer1(0, 100);
	updateMatrixBuffer(0x00, 0x0FC, 0x0A, 0x09, 0x09, 0x0A, 0x0FC, 0x00);
}
void ex9_run(){
	if(index_col>=8){
		index_col = 0;
	}
	if(timer1_flag[0]==1){
		 updateColLEDMatrix(GPIOA, ENM0_Pin, ENM1_Pin, ENM2_Pin, ENM3_Pin, ENM4_Pin, ENM5_Pin, ENM6_Pin, ENM7_Pin, index_col);
		 updateRowLEDMatrix(GPIOB, ROW0_Pin, ROW1_Pin, ROW2_Pin, ROW3_Pin, ROW4_Pin, ROW5_Pin, ROW6_Pin, ROW7_Pin, index_col);
		setTimer1(0, 100);
		index_col++;
	}
}
