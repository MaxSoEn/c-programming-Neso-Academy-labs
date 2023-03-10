#include <stdio.h>


int main(void){
	char a = 7; 
	a ^= 5;  // 111 ^ 101 = 010
	
	//printf("%d\n",a+=3); // 2+3 = 5	
	printf("%d",printf("%d",a+=3)); //printf raturn number of printed character
	return 0;
}