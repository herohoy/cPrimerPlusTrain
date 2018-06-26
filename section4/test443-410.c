/*
 * test443-410.c
 *
 *  Created on: 2016年11月29日
 *      Author: Administrator
 */

#include <stdio.h>
#ifndef BLURB
#define BLURB "Authentic imitation!"
#endif

int main4(void){
//	printf("[%2s]\n",BLURB);
//	printf("[%24s]\n",BLURB);
//	printf("[%24.5s]\n",BLURB);
//	printf("[%-24.5s]\n",BLURB);
//
//	const char name[30] = "Lee";
//	const float cash = 3.14159F;
//	printf("The %s family just may be $%08.4f dollars richer"
//			,name,cash);

	char lastname[10];
	char firstname[10];
	printf("Input your name,split with whitespace,begin:\n");
	scanf("%s %s",lastname,firstname);
	printf("You are %s %s,nice to meet you!",lastname,firstname);
	getchar();
	getchar();

	return 0;
}
