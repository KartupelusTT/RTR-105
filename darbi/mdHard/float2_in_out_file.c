#include <stdio.h>

int main ()
{
  FILE * fptr;
  int i,n=5;
  float f1, f2, rez;
  char str[100], str2[100];
  char fname[20]="float.txt";
  char str1;
  
    printf("\n\n Write multiple floats in a text file and read the file :\n");
	printf("\n :: The lines are ::\n");
	fptr = fopen (fname,"w");
	for(i = 0; i < n;i++)
		{
		fgets(str, sizeof str, stdin);
		fputs(str, fptr);
		}
  fclose (fptr);
/*-------------- read the file -------------------------------------*/
	fptr = fopen (fname, "r");
	printf("\n The content of the file %s is  :\n",fname);
        while (fgets(str2, 50, fptr) !=NULL){

		        for(i=0;str2[i]!=0;i++)
               		if(str[i]<32) printf("char:  dec: %d\n",str2[i]);
                	else          printf("char: %c dec: %d\n",str2[i],str2[i]);
			rez=f1*f2;
			printf("\n %f %f %f", f1, f2 ,rez);
}


    printf("\n\n");
    fclose (fptr);
    return 0;
}

