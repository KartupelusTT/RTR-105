#include<stdio.h>

void main()
{
int fn=1,i=0,fo=1;
for (i=2;fn/(i-1)==fo;i++){
	fo= fn;
	fn= fn*i;
	printf("Factoriāls no %d ir %d\n",i,fn);
	printf("Vecais faktoriāls %d\n", fo);
	}
printf("Diemžēļ ir sasniegta datu tipa robeža\n");
}
