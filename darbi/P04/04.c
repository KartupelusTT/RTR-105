#include<stdio.h>

int pi(){
	return 3.14;
}

int main(){
	int R=2;
	int L=2*pi()*R;
	printf("Rika ar radiusu %dm garmus ir %dm\n",R , L);
	return 0;
}
