#include <stdio.h>
#include "test10.h"


/**
 * 原版十进制数字转换为n进制数代码(参数m用于递归，外部调用时传0即可)
 */
int to_base_n(int origin,int n,int m){
	int result = 0;

	if(n<=1 || n>10){
		printf("n must between 2 and 10\n");
		return result;
	}
	int i;
	int temp = 1;
	for(i=0;i<m;i++){
		temp = temp * SHOW_N;
	}
	if(origin != 0){
		result = (origin % n) * temp + to_base_n(origin/n
				,n,m+1);
	}

	return result;
}
/**
 * (思路有错)强化版进制数字转换函数(参数roll用于递归，外部调用时传0即可)
 */
int to_base_n_ex(int origin,int source,int target,int roll){
	int result = 0;

	if(target<=1 || target>10){
		printf("target must between 2 and 10\n");
		return result;
	}
	int i;
	int temp = 1;
	for(i=0;i<roll;i++){
		temp = temp * source;
	}
	if(origin != 0){
		result = (origin % target) * temp
				+ to_base_n_ex(origin/target,source,target
						,roll+1);
	}

	return result;
}

/**
 * 原版u进制数字转换为十进制数的代码
 */
int to_base_u(int origin,int u){
	int result = 0;

	if(u<=1 || u>10){
		printf("u must between 2 and 10\n");
		return result;
	}
	int i = 0;
	int temp = origin;
	int tail = temp%10;
	while(temp/10!=0){
		temp = temp/10;
		i++;
	}
	for(;i>0;i--){
		int temp2 = 1;
		int j;
		for(j=0;j<i;j++){
			temp2 = temp2 * 10;
		}
		temp = origin / temp2;
		origin = origin - temp * temp2;
		temp2 = 1;
		for(j=0;j<i;j++){
			temp2 = temp2 * u;
		}
		temp = temp * temp2;
		result = result + temp;
	}
	result = result + tail;

	return result;
}

/**
 * 强化版进制数字转换函数（新）
 */
int to_base_ex(int origin,int from,int to){
	int result = 0;
	result = to_base_u(origin,from);
	result = to_base_n(result,to,0);
	return result;
}
