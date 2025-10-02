/*
 * timer.c
 *
 *  Created on: Sep 20, 2025
 *      Author: ADMIN
 */


#include "timer.h"

int timer=0;
int flag= 0;
int init_timer=0;
void setTimer(int time){
	timer= time;
	init_timer= timer;
}

void RunTimer(){
	timer--;
	if(timer<=0) {
		flag=1-flag;
		timer=init_timer;
	}

}
