/*
 * ex9.c
 *
 *  Created on: Sep 21, 2024
 *      Author: thuyh
 */
#include "ex9.h"
int index_col = 0;
void ex9_init(){
	setTimer1(0, 25);
}
void ex9_run(){
	if(index_col>=8){
		index_col = 0;
	}
	if(timer1_flag[0]==1){
		updateLEDMatrix(index_col);
		setTimer1(0, 25);
		index_col++;
	}
}
