#include<stdio.h>

float pi(){return 3.14;}
void main(){
	int R;
	printf("Lūdzu ievadat riņķa rādiusu\n");
	scanf("%d", &R);
	int L=2*pi()*R;
	int S=pi()*R*R;
	printf("Riņķim ar rādisu %d ir riņķa līnijas garums %d metri, bet laukums ko tas aptver ir %d m\n", R, L, S);
}
