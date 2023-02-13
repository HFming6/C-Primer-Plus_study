#include <stdio.h>

int main(int argc, char *argv[]) /*把2英寻转换成英尺*/
{
	int feet, fathoms;
	
	fathoms=2;
	feet=6*fathoms;
	printf("There are %d feet in %d fathoms!\n",feet,fathoms);
	printf("Yes, I said %d feet!\n",6*fathoms);
	
	return 0; 
}