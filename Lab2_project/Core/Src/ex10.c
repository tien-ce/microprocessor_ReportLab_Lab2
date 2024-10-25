/*
 * ex10.c
 *
 *  Created on: Sep 22, 2024
 *      Author: thuyh
 */
#include "ex10.h"
int index_col_10;
//int state ;
int num;
void ex10_init(){
	 index_col_10 = 0;
//	 state = 0;
	 num = 0;
	 setTimer1(0, 10);
	 setTimer1(1, 500);
	updateMatrixBuffer(0x00, 0x0FC, 0x0A, 0x09, 0x09, 0x0A, 0x0FC, 0x00);
}
void ex10_run() {
	if(num >=8){
		num = 0;
	}
	if(index_col_10>=8){
		index_col_10 = 0;
	}
	if(timer1_flag[0]==1){
		 setTimer1(0, 10);
		 updateColLEDMatrix(GPIOA, ENM0_Pin, ENM1_Pin, ENM2_Pin, ENM3_Pin, ENM4_Pin, ENM5_Pin, ENM6_Pin, ENM7_Pin, index_col_10);
		 updateRowLEDMatrix(GPIOB, ROW0_Pin, ROW1_Pin, ROW2_Pin, ROW3_Pin, ROW4_Pin, ROW5_Pin, ROW6_Pin, ROW7_Pin, index_col_10+num);
		 index_col_10++;
	}
	if(timer1_flag[1]==1){
		setTimer1(1, 500);
		num++;
	}

/*
	switch(state){
	case 0:
		if(num >=8){
			num = -7;
		}
		if(index_col_10>=8){
			index_col_10 = 0;
		}
		if(timer1_flag[1]==1){
			setTimer1(1, 400);
			num++;
		}


		if(timer1_flag[0]==1){
			char_matrix('S');
			setTimer1(0, 50);
			 updateColLEDMatrix(GPIOA, ENM0_Pin, ENM1_Pin, ENM2_Pin, ENM3_Pin, ENM4_Pin, ENM5_Pin, ENM6_Pin, ENM7_Pin, index_col_10);
			 updateRowLEDMatrix(GPIOB, ROW0_Pin, ROW1_Pin, ROW2_Pin, ROW3_Pin, ROW4_Pin, ROW5_Pin, ROW6_Pin, ROW7_Pin, index_col_10+num);
			 index_col_10++;
		}
		if(timer1_flag[2]==1){
			state ++;
			setTimer1(2, 3200);
		}
		break;
	case 1:
		if(num >=8){
			num = -7;
		}
		if(index_col_10>=8){
			index_col_10 = 0;
		}
		if(timer1_flag[1]==1){
			setTimer1(1, 400);
			num++;
		}


		if(timer1_flag[0]==1){
			char_matrix('T');
			setTimer1(0, 50);
			 updateColLEDMatrix(GPIOA, ENM0_Pin, ENM1_Pin, ENM2_Pin, ENM3_Pin, ENM4_Pin, ENM5_Pin, ENM6_Pin, ENM7_Pin, index_col_10);
			 updateRowLEDMatrix(GPIOB, ROW0_Pin, ROW1_Pin, ROW2_Pin, ROW3_Pin, ROW4_Pin, ROW5_Pin, ROW6_Pin, ROW7_Pin, index_col_10+num);
			index_col_10++;
		}
		if(timer1_flag[2]==1){
			state =0;
			setTimer1(2, 3200);
		}
	}
*/
}


