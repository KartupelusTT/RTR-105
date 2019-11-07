#include<stdio.h>

int main(){
	printf("please enter iterger number:");
	int x;
	int* y =&x; //ponter!!!
	scanf("%d",y);
	printf("Digit %d is located at the address %p\n", x , y);
}
