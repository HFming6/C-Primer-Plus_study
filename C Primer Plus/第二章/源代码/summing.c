// summing.c -- 根据用户键入的整数求和
#include <stdio.h>

int main(void) 
{
	long num;
	long sum=0L;     //把sum初始化为0
	int status;
	
	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	status=scanf("%ld",&num);   //scanf()若成功获取值，则把值存储到num并返回1；否则便返回0；
	while (status==1)
	{
	sum+=num;
	printf("Please enter next integer (q to quit): ");
	status=scanf("%ld",&num);
	}
	printf("Those integers sum to %ld.\n",sum);
	
	return  0;
}