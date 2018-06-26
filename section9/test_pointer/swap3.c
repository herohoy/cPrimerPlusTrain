#include <stdio.h>
#include "../../section9/test_pointer/swap.h"

/*
 * 形参为指针，实参传入参数的地址
 */
void interchange3(int *u,int *v){
	int temp;

	temp = *u;
	*u = *v;
	*v = temp;
}
