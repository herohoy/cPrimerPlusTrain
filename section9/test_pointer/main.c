#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "swap.h"
#include "../codetest/test5.h"
#include "../codetest/test10.h"

int main9(void){

//	int x=5,y=10;
//	printf("1:Originally x=%d and y=%d.\n",x,y);
//	interchange(x,y);
//	printf("1:Now x=%d and y=%d.\n",x,y);
//
//	printf("2:Originally x=%d and y=%d.\n",x,y);
//	interchange2(x,y);
//	printf("2:Now x=%d and y=%d.\n",x,y);
//
//	printf("3:Originally x=%d and y=%d.\n",x,y);
//	interchange3(&x,&y);
//	printf("3:Now x=%d and y=%d.\n",x,y);

//	double a=3.3,b=5.46;
//	printf("t5:Originally a=%.2f and b=%.2f.\n",a,b);
//	largerOf(&a,&b);
//	printf("t5:Now a=%.2f and b=%.2f.\n",a,b);

//	int bi = 34;
//	int bo = 034;
//	int bx = 0x34;
//	printf("%d,%o,%x\n",bi,bi,bi);
//	printf("%d,%o,%x\n",bo,bo,bo);
//	printf("%d,%o,%x\n",bx,bx,bx);

	int o = 257;
	int n = 8;
	int m = 0;
	int result = to_base_n(o,n,m);
	printf("the 10 No. %d to %d is:%d\n",o,n,result);
	printf("the 10 No. %d to %d is:%d\n",31,2,to_base_n(31,2,0));
	o = 401;
	n = 6;
	result = to_base_u(o,n);
	printf("the %d No. %d to 10 is:%d\n",n,o,result);
	m = 8;
	result = to_base_ex(o,n,m);
	printf("the %d No. %d to %d is:%d\n",n,o,m,result);
//	int result = to_base_n_ex(o,n,m,0);
//	printf("the %d No. %d to %d is:%d\n",n,o,m,result);

	printf("\n string to number test:\n");
	char *str = "325436abc";
	char *overflows = "";
	long num;


	printf("%d\n",strlen(overflows));
	num=strtol(str,&overflows,10);

	printf("origin:%s,new:%d,overflow:%s\n"
			,str,(int)num,overflows);
	printf("%d\n",strlen(overflows));

	int num2 = strtol("1z",&overflows,36);
	printf("origin:%s,new:%d,overflow:%s\n"
			,"1z",(int)num2,overflows);
	printf("%d\n",strlen(overflows));

	return 0;
}
