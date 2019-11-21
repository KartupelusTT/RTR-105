#include <stdio.h>

int main ()
{
  FILE * fptr;
  int i,n=5;
  float f1, f2, rez;
  float f3, f4;
  char fname[20]="float.txt";


	printf("\n \n Lūdzu ievadiet cik rindas ar datiev vēlēsieties ievadīt:\n");
	scanf("%i", &n);
	fptr = fopen (fname,"w");
	for(i=0;i<n;i++){
	printf("\n \n Lūdzu ievadiet skaitli f1: \n");
	scanf("%f", &f1);
	printf("\n \n Lūdzu ievadiet skaitli f2: \n");
	scanf("%f", &f2);
	printf("\n%f %f \n \n ", f1 , f2);
	fprintf(fptr, "%f %f \n", f1, f2);
	}
  fclose (fptr);

/*-------------- read the file -------------------------------------*/
	fptr = fopen (fname, "r");
	printf("\n The content of the file %s is  :\n",fname);


	for(i=0;i<n;i++){
		fscanf(fptr,"%f%f", &f3, &f4);
		rez=f3*f4;
		printf("\n %.3f %.3f %.3f", f3, f4 ,rez);
	}


    printf("\n\n");
    fclose (fptr);
    return 0;
}

