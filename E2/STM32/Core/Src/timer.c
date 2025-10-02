/*
 * timer.c
 *
 *  Created on: Sep 20, 2025
 *      Author: ADMIN
 */

#include "timer.h"

int timer=0;
int flag=0;
int init_timer=0;

void setTimer(int target){
	timer= target;
	init_timer= timer;
}

void timerRun(){
	timer--;
	if(timer<=0){
		flag=1;
		timer= init_timer;
	}
}
