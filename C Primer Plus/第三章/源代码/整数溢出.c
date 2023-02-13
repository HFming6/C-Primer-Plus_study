//toobig.c--超出系统允许的最大int值
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int i = 2147483647;
	unsigned int j =4294967295;
	
	printf("%d %d %d\n", i, i+1, i+2);//超出从-2147483648开始
	printf("%u %u %u\n", j, j+1, j+2);//超出从0开始
	
	return 0;
}