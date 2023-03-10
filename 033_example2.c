#include <stdio.h>

int fun1(){
	printf("Neso");
	return 1;
}
int fun2(){
	printf("Accadmy");
	return 1;
}
int main(void){
	int num = fun1() + fun2();
	printf("%d",num); // 
	return 0;
}