#include<stdio.h>
#include<string.h>
#define N 20

void main(){
	int i;
	char str[N];

	for(i=0;i<N;i++)
		if(str[i]<32) printf("char:  dec: %d\n",str[i]);
		else	      printf("char: %c dec: %d\n",str[i],str[i]);

		printf("Enter a string: ");
		scanf("%[^\n]",&str);
		printf("%s\n",str);


	for(i=0;i<N;i++)
		if(str[i]<32) printf("char:  dec: %d\n",str[i]);
		else	      printf("char: %c dec: %d\n",str[i],str[i]);


}
