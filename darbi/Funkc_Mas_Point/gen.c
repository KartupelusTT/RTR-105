#include<stdio.h>
#include"bid.h"

int main(){
	int i;

	for(i=0;i<200;i++){
		printf("%d %d\n",i, kvadrats(i));
	}
}
