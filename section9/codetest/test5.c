/*
 * test5.c
 *
 *  Created on: 2016年12月16日
 *      Author: Administrator
 */

#include <stdio.h>
#include "test5.h"

void largerOf(double *x,double *y){
	if(*x==*y){
		return;
	}else if(*x>*y){
		*y=*x;
	}else{
		*x=*y;
	}
}
