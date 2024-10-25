/*
 * ex7.c
 *
 *  Created on: Sep 21, 2024
 *      Author: thuyh
 */

#include "ex7.h"
int hour  , minute  , second;
int index_led;
void ex7_init(){
	 hour = 15 , minute = 8 , second = 50;
	 index_led = 0;
	 setTimer1(0, 1000);
	 setTimer1(1, 250);
	 setTimer1(2, 1000);
}
void ex7_run(){
	  if(timer1_flag[0]==1){
		  setTimer1(0, 1000);
		  HAL_GPIO_TogglePin(GPIOA, DOT_Pin);
	  }
	  if(timer1_flag[1]==1){
		  		  if(index_led >=4){
		  			  index_led=0;
		  		  }
		  		  setTimer1(1, 250);
		  		  update7SEG(index_led);
		  		  index_led ++;
	 }

	 if(timer1_flag[2]==1){
		 second ++;
		 setTimer1(2, 1000);
		 if ( second >= 60) {
		  second = 0;
		  minute ++;
		  }
		  if( minute >= 60) {
		  minute = 0;
		  hour ++;
		  }
		  if( hour >=24) {
		  hour = 0;
		  }
	 }
		  	  updateClockBuffer () ;
}
