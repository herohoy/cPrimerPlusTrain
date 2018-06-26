/*
 * test_pointer.c
 *
 *  Created on: 2017年4月4日
 *      Author: Administrator
 */
#include <stdio.h>
#include "test_pointer.h"

int showMonths(void){
	const int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
	const int daysOfRy[MONTHS] = {31,29,31,30,31,30,31,31,30,31,30,31};
//	days[9] = 44; /* 编译错误 */
	int i;
	for(i=0;i<MONTHS;i++){
		printf("%d,%d\n",days[i],daysOfRy[i]);
	}
	return 0;
}


int showRates(void){
	double rates[5] = {88.99,100.12,59.45,183.11,340.5};
	const double *pd = rates; //pd指向数组的首元素
//	*pd = 29.89; //不允许
//	pd[2] = 222.22; //不允许
	rates[0] = 99.99; //允许，因为rates未被const限定
	printf("%f\n",*pd);
	pd++; /*允许，pd将指向rates[1]*/
	printf("%f\n",*pd);
	return 0;
}
