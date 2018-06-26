/*
 * test45.c
 *
 *  Created on: 2016年11月29日
 *      Author: Administrator
 */

#include <stdio.h>
#include <limits.h> //整形限制 TODO
#include <float.h> //浮点型限制

#ifndef BEEP
#define BEEP '\a'
#endif

#ifndef OOPS
#define OOPS "Now you have done it!"
#endif

int main3(void){
	const int MONTHS = 12;
	printf("Some number limits for this system:\n");
	printf("Biggest int:%d\n",INT_MAX);
	printf("Smallest long long:%ll\n",LLONG_MIN);
	printf("One byte = %d bits on this system.\n",CHAR_BIT);
	printf("Largest double:%e\n",DBL_MAX);
	printf("Smallest normal float:%e\n",FLT_MIN);
	printf("float precision = %d digits\n",FLT_DIG);
	printf("float epsilon = %e\n",FLT_EPSILON);

	printf(" %c ",BEEP);
	printf(OOPS);

	getchar();

	return 0;
}
