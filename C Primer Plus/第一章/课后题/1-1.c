#include <stdio.h>
#include <stdlib.h>
//定义浮点型变量英尺和厘米
//打印提示信息
//输入英尺数
//根据1英尺=2.54厘米写出对应表达式
//输出厘米数
int main(void) 
{
	float centimetre,feet;
	printf("Please input the feet:\n");
	scanf("%f",&feet);
	centimetre = feet * 2.54;
	printf("%f foot = %f centimetre.\n",feet,centimetre);
	
	return 0;
}