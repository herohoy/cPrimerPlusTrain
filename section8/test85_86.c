#include <stdio.h>
/* 语法：函数声明部分可以省略形参的变量名 */
void display(char,int,int);
void up_and_down(int n);
long fact(int n);
long rfct(int n);
/* 仿java中Comparator的compare方法，以传入参数的前者为准 */
int compare(int a,int b){
	if(a>b){
		return 1;
	}else if(a==b){
		return 0;
	}else{
		return -1;
	}
}
int main8(void){
//	int ch;          /* 待打印字符 */
//	int rows,cols;   /* 行数和列数 */
//
//	printf("Enter a character and two integers:\n");
//	while((ch = getchar())!='\n'){
//		if(scanf("%d %d",&rows,&cols)!=2){
//			break;
//		}
//		display(ch,rows,cols);
//		while(getchar()!='\n'){
//			continue;
//		}
//		printf("Enter another character and two integers:\n");
//		printf("Enter a newline to quit\n");
//	}
//	printf("Bye.\n");

	up_and_down(1);

	return 0;
}

void display(char cr,int lines,int width){
	int row,col;
	for(row=1;row<=lines;row++){
		for(col=1;col<=width;col++){
			putchar(cr);
		}
		putchar('\n');
	}
}
/* test93_96 递归 */
void up_and_down(int n){
   printf("Level %d: n location %p; #1\n",n,&n); // #1
   if(n < 4){
	   up_and_down(n+1);
   }
   printf("Level %d: n location %p; #2\n",n,&n); // #2
}
/* test93_97 阶乘-递归与循环：循环 */
long fact(int n){
	long ans;
	if(n>12){
		printf("Too big!");
		return 0;
	}
	for(ans=1;n>1;n--){
		ans *= n;
	}
	return ans;
}
/* test93_97 阶乘-递归与循环：递归（尾递归） */
long rfct(int n){
	long ans;
	if(n>12){
		printf("Too big!");
		return 0;
	}
	if(n>0){
		ans = n * rfct(n-1);
	}else{
		ans = 1;
	}
	return ans;
}
