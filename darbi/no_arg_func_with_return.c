#include<stdio.h>

int user_function_5()
{
int i_uf;
printf("Cien lietotāj,lūdzu ievadi savu skaitli:");
scanf("%d", &i_uf);
return i_uf;
}

void main()
{
int i_main, N=69;
i_main=user_function_5();

while(i_main!=N)
 {
 printf("Reaģējot uz manas lietotājas darbības funkcijām, tu esi ievadījis %d\n", i_main);
 i_main=user_function_5();
 }
printf("Tā kā esi ievadījis 5, tad jautājumu vairs nav!\n");
}

