/*
 * hotel.h
 *
 *  Created on: 2016年12月14日
 *      Author: Administrator
 */

#ifndef HOTEL_H_
#define HOTEL_H_



#endif /* HOTEL_H_ */

#ifndef QUIT
#define QUIT 5
#endif

#ifndef HOTEL1
#define HOTEL1 180.00
#endif

#ifndef HOTEL2
#define HOTEL2 225.00
#endif

#ifndef HOTEL3
#define HOTEL3 255.00
#endif

#ifndef HOTEL4
#define HOTEL4 355.00
#endif

#ifndef DISCOUNT
#define DISCOUNT 0.95
#endif

#ifndef STARS
#define STARS "****************************************"
#endif

//显示选择列表
int menu(void);

//返回预订天数
int getNights(void);

//根据费率、入住天数计算费用并显示结果
void showPrice(double rate,int nights);
