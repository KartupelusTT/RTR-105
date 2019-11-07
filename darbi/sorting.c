#include<stdio.h>
#include<math.h>//fabs()

void main()
{
int a,b,c, t;
printf("Cienijamais lietotāj ievadiet 3 skaitļus:\n");
sacnf("%d", &a); scanf("%d", &b); scanf("%d", &c);

if(a>b && a>c) if(b>c) ;//a,b,c
		else   {t=c;c=b,b=t;} //a,c,b
if(b>a && b>c) if(b>c) {t=b,b=a,a=t;} //a,b,c
		else   {t=a;a=b,b=t,t=b,b=c,c=t;}//b,c,a
if(c>a && c>b) if(b>c) {t=a;a=c}
		else {t=c;c=b,b=t;}

}
