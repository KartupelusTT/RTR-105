#include<stdio.h>
#include<stdlib.h>

int main(){
	char str[50];
	char str2[50];
	FILE *fptr;

	fptr= fopen("program.txt", "w");
	if(fptr == NULL){
	printf("Error");
	exit(1);
	}

	printf("Lūdzu ievadiet teikumu: ");
	scanf("%[^\n]", str);
	printf("No RAM: %s\n", str );
	fprintf(fptr, "%s", str);
	fclose(fptr);

	fptr= fopen("program.txt", "r");
	if(fptr == NULL){
	printf("Error");
	exit(1);
	}

	while (fgets(str2, 50, fptr) !=NULL)
		printf("No faila: %s\n", str2);
	fclose(fptr);

	return 0;
}
