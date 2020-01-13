#include<stdio.h>

int main(){
	int i;
	char input[50],output[50];
	printf("Lūdzu ievadiet teiku: ");
	scanf("%[^\n]", input);
	for(i=0;i<=sizeof(input);i++){
	output[i]=input[i];
	}
	printf("Jūsu teksts ir: %s\n",output);
	return 0;
}
