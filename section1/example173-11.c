/*
 * example173-11.c
 *
 *  Created on: 2016年11月23日
 *      Author: Administrator
 */

#include <stdio.h>

int main2(void){
	/* scanf的使用，以及getchar()函数（卡cmd）使用 */
//	int dogs;
//	printf("How many dogs do you have?\n");
//	scanf("%d",&dogs);
//	printf("So you have %d dog(s)!\n",dogs);
//	getchar();//每输入一次（包括scanf函数的输入效果）便消耗一个
//	getchar();


	/* test212 计算年龄的天数 */
//	int age,dayage;
//	age = 30;
//	dayage = age * 365;
//
//	printf("My age is %d,dayage is %d",age,dayage);

	/* test typesize 用sizeof函数测基本数据类型占用的字节数
	 * !当前环境的%zd不可用，只好用%d替代
	 *  */
	printf("char size:" "%llu" " bytes.\n",sizeof(char));
	printf("short size:" "%d" " bytes.\n",sizeof(short));
	printf("int size:" "%d" " bytes.\n",sizeof(int));
	printf("long size:" "%d" " bytes.\n",sizeof(long));
	printf("long long size:" "%d" " bytes.\n",sizeof(long long));
	printf("float size:" "%d" " bytes.\n",sizeof(float));
	printf("double size:" "%d" " bytes.\n",sizeof(double));
	printf("long double size:" "%d" " bytes.\n",sizeof(long double));

	return 0;

}
