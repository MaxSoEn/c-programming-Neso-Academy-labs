#include <stdio.h>


int main(void){
	int a = 4 , b = 3;
	printf("%d",a+++b); //7
	a = 4; b = 3;
	printf(" %d ",a++ +b); //7
	a = 4; b = 3;
	printf("%d\n",a+ ++b); //8
	a = 4; b = 3;
	printf("%d\n",a++ + ++b); ///// QUESTION(8)
	a = 4; b = 3;
	printf("%d\n",++a + b++); // QUESTION(8)
	
	return 0;
}
