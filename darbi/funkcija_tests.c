#include<stdio.h>

void user_function_3(int i_uf)
{
printf("Cien lietotāj, sveicu tevi no savas lietotāja funkcijas %d. reizi!\n", i_uf);
}

void main()
{
int i_main=0;
while(i_main<2)
 {
 i_main++;
 user_function_3(i_main);
 }
}
