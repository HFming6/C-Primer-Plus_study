#include <stdio.h>
#define PI 3.14159

int main(void) 
{
	float area, circum, radius;
	
	printf("What is the radius of your pizza?\n");
	scanf("%f",&radius);
	area = PI * radius *radius;
	circum = 2.0 * radius * PI;
	printf("Your basic pizza parameters are as follows:\n");
	printf("circumference = %1.2f, area = %1.2f\n",circum,area);//%1.2f表明结果四舍五入为两位小数输出
	
	return 0;
}