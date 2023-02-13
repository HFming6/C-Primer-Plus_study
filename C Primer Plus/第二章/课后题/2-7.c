#include <stdio.h>
#include <stdlib.h>

void sm();
int main(void) 
{
	sm();
	sm();
	sm();
	printf("\n");
	sm();
	sm();
	printf("\n");
	sm();
	return 0;
}
void sm(){
	printf("Smile!");
}