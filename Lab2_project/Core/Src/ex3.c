/*
 * ex3.c
 *
 *  Created on: Sep 14, 2024
 *      Author: thuyh
 */
#include "ex3.h"
int state  ;
void ex3_init(){
	state = 0;

}
void ex3_run(){
	if(state >=4){
		state = 0;
	}
	if(timer1_flag[1] == 1){
		update7SEG(state);
		setTimer1(1,50);
		state ++;
	}
}