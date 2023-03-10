#include <stdio.h>


int main(void){
	int var = 75;
	int var2 = 56;
	int num;
	num = sizeof(var)?(var2>23?((var==75)?'A':0):0):0;
	printf("%d",num); // A = 0b01000001 = 65
	return 0;
}