/*
 * test_arraddr.c
 *
 *  Created on: 2017年1月8日
 *      Author: Administrator
 */

#include <stdio.h>

int main10(void){
	int *pts;
	double *ptd,arrd[5];
	int arrs[5] = {1,2,4,6,8};
//	double arrd[5];

	/**
	 * 数组变量本身即代表该数组第一个元素的地址
	 * 因此 布尔表达式arrs==&arrs[0]值为true
	 */
	pts = arrs;
	ptd = arrd;

	int i = 0;
	/**
	 * 数组的指针变量加多少，相当于数组中的元素地址向后偏移多少
	 * 因此 &arrs[0]+2==&arrs[2]
	 */
	for(;i<4;i++){
		printf(
			"No. %d short pointer is %10p or %10p"
				",value is %d or %d\n"
				,i,pts+i,&arrs[i],*(pts+i),arrs[i]);
		printf(
			"No. %d double pointer is %10p or %10p"
				",value is %.2f or %.2f\n"
				,i,ptd+i,&arrd[i],*(ptd+i),arrd[i]);
	}
	printf("End and Out:%d\n",arrs[5]);

	char n = '9';
	char nP = 'A';
	char np = 'a';
	printf("%d,%c,%c,%d,%d\n",(int)n,n,n+1,(int)nP,(int)np);

//	char r;
//	scanf("%c",&r);
//	printf("\n r is %c",r);
//
//	getchar();
//	getchar();

	return 0;
}
