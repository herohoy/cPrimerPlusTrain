#include <stdio.h>
#include "../test_pointer/swap.h"

void interchange2(int u,int v){
	int temp;

	printf("Originally u=%d and v=%d.\n",u,v);
	temp = u;
	u = v;
	v = temp;
	printf("Now u=%d and v=%d.\n",u,v);
}
