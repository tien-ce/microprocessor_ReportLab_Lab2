
/*
 * ex4.c
 *
 *  Created on: Sep 14, 2024
 *      Author: thuyh
 */
#include "ex4.h"
int state  ;
void ex4_init(){
	state = 0;

}
void ex4_run(){
	if(state >=4){
		state = 0;
	}
	if(timer1_flag[1] == 1){
		update7SEG(state);
		setTimer1(1,25);
		state ++;
	}
}