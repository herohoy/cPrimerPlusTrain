/*
 * useHotel.c
 *
 *  Created on: 2016年12月14日
 *      Author: Administrator
 */

#include <stdio.h>
#include "../test_header/hotel.h"

/*
 * test94_99 多源代码-使用头文件（.h文件）
 */
int main94(void){
	int nights;
	double hotel_rate;
	int code;

	while((code = menu()) != QUIT){
		switch(code){
			case 1:
				hotel_rate = HOTEL1;
				break;
			case 2:
				hotel_rate = HOTEL2;
				break;
			case 3:
				hotel_rate = HOTEL3;
				break;
			case 4:
				hotel_rate = HOTEL4;
				break;
			default:
				hotel_rate = HOTEL1;
				printf("Oops!\n");
				break;
		}
		nights = getNights();
		showPrice(hotel_rate,nights);
	}
	printf("Thank you and goodbye.\n");

	return 0;
}
