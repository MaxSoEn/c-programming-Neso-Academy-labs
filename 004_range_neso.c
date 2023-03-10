#include <stdio.h>
#include <limits.h>

int main(void){
	short int var1 = SHRT_MIN;
	short int var2 = SHRT_MAX;
	
	short unsigned int var3 = 0;
	short unsigned int var4 = USHRT_MAX;
	
	printf("the range of short integer is from %d to %d\n", var1, var2);
	printf("the range of short integer is from %u to %u\n", var3, var4);
	
	printf("the range of short integer is from %u to %u\n", var3, var4);
	return 0;
}