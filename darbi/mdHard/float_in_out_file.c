#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 20

int main(){
        int i, floatsk, rezinajums;
        char str[N];
        char str2[N];

        for(i=0;i<N;i++)
                if(str[i]<32) printf("char:  dec: %d\n",str2[i]);
                else          printf("char: %c dec: %d\n",str2[i],str2[i]);

        FILE *fptr;

        fptr= fopen("program.txt", "w");
        if(fptr == NULL){
        printf("Error");
        exit(1);
        }

        printf("Enter a string: ");
        scanf("%[^\n]",&str);
        printf("%s\n",str);


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

//datu pārbaude


        for(i=0;str2[i]!=0;i++)
                if(str[i]<32) printf("char:  dec: %d\n",str2[i]);
                else          printf("char: %c dec: %d\n",str2[i],str2[i]);

 return 0;
}


