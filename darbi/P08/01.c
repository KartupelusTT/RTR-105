/* Studenta apliecības numurs
171REC002*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, N;
	N=(2+1)*3;
	int a[N];

	//gadijuma ģenerācija
	srand(0);

	for(i=0; i<N; i++){
		a[i]=rand()%10;
	}
	//Masīva izdruka
	for(i=0;i<N;i++){
		printf("%d\n",a[i]);
	}
	return(0);
}
