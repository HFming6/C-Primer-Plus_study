#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	float num;
	printf("Enter a floating-point value: ");
	scanf("%f",&num);
	printf("fixed-point natation: %f\n",num);
	printf("exponential natation: %e\n",num);
	printf("p natation: %a\n",num);//十六进制计数法

	
	return 0;
}