#include<stdio.h>

void main()
{
	int yes_no, number1, number2, max_number;
	printf("Cienijamais lietotāj ievadiet 1. skaitli: ");
	scanf("%d", &number1);
	printf("Cienijamais lietotāj lūdzu ievadiet 2. skaitli: ");
	scanf("%d", &number2);
	if(number1>number2)
	printf("Tavs 1.skaitlis %d ir lielāks nekā 2.skaitlis %d\n", number1, number2);
	else if(number1<number2)
	printf("Tavs 1.skaitlis %d ir mazāks nekā 2.skaitlis %d\n", number1, number2);
	else
	printf("Tavs 1.skaitlis %d ir vienāds ar 2.skaitli %d\n", number1, number2);
	int rez1=number1/2;
	int rez2=(number1-1)/2;
	if(rez1==rez2)
	printf("Skaitlis %d ir nepāra skaitlis\n", number1);
	else
	printf("Skaitlis %d ir pāra skaitlis\n", number1);

}
