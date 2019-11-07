#include<stdio.h>
#include<string.h>

char y[1]="y";
void main ()
	{
	char name[15];
	char dd[1];
	int gads, dzg;
	printf("Kā tevi sauc?\n");
	printf("Mans vārds ir ");
	scanf("%s", name);
	printf("\nKurā gadā esi dzimis?\n");
	printf("Gads kurā esmu dzimis ir ");
	scanf("%d", &dzg);
	printf("\nVai tev jau šogad bija dzimšanas diena?");
	scanf("%s", dd);
	if (dd==y){
	gads=2019-dzg;
	}
	else{
	gads=2018-dzg;
	}
	printf("\nSveiks %s!", name);
	printf("\nTev ir %d gadi\n", &gads);
	return 0;
}
