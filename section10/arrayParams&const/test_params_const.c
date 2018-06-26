/*
 * test_params_const.c
 *
 *  Created on: 2017年1月19日
 *      Author: Administrator
 */

/*
 * 整型数组累加 错误代码
 */
int sum_wrong(int ar[],int n)
{
	int i;
	int total = 0;
	for(i=0;i<n;i++){
		total += ar[i]++; // 错误递增了每个元素的值
	}
	return total;
}

/*
 * 整型数组累加 正确代码
 */
int sum_right(const int ar[],int n)
{
	int i;
		int total = 0;
		for(i=0;i<n;i++){
//			total += ar[i]++; // 错误递增了每个元素的值，在这里会编译报错
			total += ar[i];
		}
		return total;
}



