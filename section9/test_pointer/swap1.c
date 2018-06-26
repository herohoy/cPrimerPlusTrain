/*
 * swap1.c
 *
 *  Created on: 2016年12月15日
 *      Author: Administrator
 */

#include <stdio.h>
#include "../../section9/test_pointer/swap.h"

void interchange(int u,int v){
	int temp;

	temp = u;
	u = v;
	v = temp;
}
