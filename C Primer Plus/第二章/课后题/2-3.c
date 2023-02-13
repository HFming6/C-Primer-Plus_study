#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int age,days;
	
	printf("Please input your age:\n");
	scanf("%d",&age);
	days = age * 365;
	printf("days = %d",days);
	
	return 0;
}