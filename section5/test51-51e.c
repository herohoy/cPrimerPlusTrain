/*
 * test51-51e.c
 *
 *  Created on: 2016年11月30日
 *      Author: Administrator
 */

#include <stdio.h>
#include <string.h>

#ifndef ADJUST
#define ADJUST 7.31
#endif

#ifndef SZ
#define SZ 10
#endif

int returnJson();
int test616_5(void);
int test7mix6(void);
int test81_81(char ch);
int test832_82(void);
int test832_82x(void);

int returnJson(){
	int result = 0;

    //test611-619 循环输入，写入数组（下标初始化）
    int index,score[SZ],sum=0;
    for(index=0;index<SZ;index++){
    	scanf("%d",&score[index]);
    	sum += score[index];
    }
    printf("{total:%d ,average:%.2f}",sum,(double)sum/SZ);
    result = 1;

	return result;
}

int test616_5(void){
	int result = 1;

	char insertChar;
	printf("please insert your character:\n");
	scanf("%c",&insertChar);getchar();
    if('A'>insertChar || 'Z'<insertChar){
    	printf("out of upper-case letters!");
    	return result;
    }
    int size = (int)(insertChar - 'A') + 1;
    int hsize = (int)(insertChar - 'A') * 2 + 1;
    int i = 0;
    int j = 0;
    for(i=0;i<size;i++){
    	//hsize = (int)(insertChar - 'A') * 2 + 1;//size-i-1;
    	//开头无空格的做法，需要printf来进行空格排版
//    	char ls[hsize];
//    	for(j=0;j<2*i+1;j++){
//    		int temp;
//    		temp = (int)'A' + j;
//    		if(j>i){
//    			temp = (int)'A' + 2*i - j ;
//    		}
//    		ls[j] = (char)temp;
//    	}

//    	char ls[hsize];
//    	for(j=size+i-1;j>=0;j--){
//    		int temp;
//    		temp = (int)'A' + size+i-1 - j;
//    		if(j<size-1){
//    			temp = (int)'A' + j;
//    		}
//    		if(((int)'A')>temp){
//    			temp = (int)' ';
//    		}
//    		ls[j] = (char)temp;
//    	}
//        printf("%*s\n",-(2*i+1),ls);

    	/* 最终正确结果的做法之一 */
    	char ls[hsize];
    	for(j=0;j<sizeof(ls);j++){
    		ls[j] = ' ';
    	}
    	for(j=0;j<size-i-1;j++){
    		ls[j] = ' ';
    	}
    	int k;
        for(k=0;k<i+1;k++){
        	ls[j+k] = (char)('A'+k);
        }
        int m;
        for(m=i;m>0;m--){
        	ls[j+k+i-m] = (char)('A'+m-1);
        }
        printf("%s\n",ls);
    	/* end最终正确结果的做法之一end */
    }

	result = 0;getchar();
	return result;
}
/*
 * 类似java的break外层循环的做法
 * */
int test7mix6(void){
	printf("begin\n");
	int i;
	int j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(j==6){
				goto outer;//类似continue外层（跳出节点应写在跳出层外层末尾）
			}
			if(i==6){
				goto ender;//类似break外层
			}
			printf("%d-%d ",i,j);
		}
		outer:printf("\n");
	}
	ender:printf("end");
	getchar();
	return 0;
}

int test81_81(char ch){
	int result = 1;
	if(ch != '#'){
		putchar(ch);
	}else{
		result = 0;
	}
	return result;
}
int test832_82(void){
	int ch;
	while((ch=getchar())!=EOF){
		putchar(ch);
	}
	return 0;
}
int test832_82x(void){
	int ch;
	while((ch=getchar())!=EOF){
		if((char)ch==' '){
			putchar('%');
			putchar('2');
			putchar('0');
		}else{
			putchar(ch);
		}
	}
	return 0;
}

int main5(void){
//    const double SCALE = 0.333;
//    double shoe,foot;
//
//    shoe = 9.0;
//
//    printf("Shoe size (men's)    foot length\n");
//    while(shoe < 18.5){
//        foot = SCALE * shoe + ADJUST;
//        printf("%10.1f %15.2f inches\n",shoe,foot);
//        shoe = shoe + 1.0;
//    }
//    printf("If the shoe fits,wear it.\n");

	//test610 嵌套循环
//    int i = 0,j = 0;
//    for(;i<10;i++){
//    	while(j<10){
//    		printf("%d-%d;",i,j);
//    		j++;
//    	}
//    	printf("\n");
//    	j = 0;
//    }

    //test611 数组
//    printf("\n");
//    char c[SZ]={'1','2'};//纯char数组
//    char s[SZ]="12";//char数组和string字符串（末尾有个 \0 ）
//    printf("%llu,%llu \n",sizeof(c),sizeof(s));
//    printf("%llu,%llu \n",strlen(c),strlen(s));
//    for(i=0;i<SZ;i++){
//    	printf("c:%c , s:%c\n",c[i],s[i]);
//    }

//    return returnJson();
	return test616_5();

//	return test7mix6();

//	while(test81_81(getchar()) != 0){
//
//	}
//	return 0;

//	return test832_82();

//	return test832_82x();
}
