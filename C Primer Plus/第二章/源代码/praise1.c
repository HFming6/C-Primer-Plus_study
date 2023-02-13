//praise,c -- 使用不同类型的字符串
#include <stdio.h>
#define PRAISE "You are an extraordinary being." //字符串以\0结尾 双引号是字符串的定界符。
int main(void) 
{
	char name[40];
	
	printf("What's your name? ");
	scanf("%s",name);            //scanf()只会读取字符串中的一个单词（遇到空格就结束），而不是一整句。fget(）,用于读取一般字符串。
	printf("Hello, %s. %s\n",name,PRAISE);
	
	return 0;
}