#include<stdio.h>
#include<math.h>

int main(){

 FILE * fptr;
 float a, b, x , delta_x, f1a, f2a, f1b, f2b, f1;
 char fname[20]="derivitive.dat";

//sagatvošana ierakstīšanai failā
 fptr= fopen (fname,"w");

// tiek noskaidroti mainīgie
 printf("\n\nLūdzu ievadiet atvasīnājuma sākumpunktu - a : \n");
 scanf("%f", &a);
 printf("Lūdzu ievadiet atvasīnājuma beigupunktu - b : \n");
 scanf("%f", &b);
 printf("Lūdzu ievadiet atvasīnājuma soli priekš precizitātes formā /0.1, 0.01 utt... / : \n");
 scanf("%f", &delta_x);

// datu apstrāde un izdruka
 printf("\n\n\t   x  || sinh(x/2) ||    sinh\'(x/2)    |     sinh\'(x/2)     ||   sinh\"(x/2)     |   sinh\"(x/2)\n");
 printf("    \t      ||           ||analytical formula|  finite difference ||analytical formula| finite difference)\n");
 printf("\t----------------------------------------------------------------------------------------------------\n");
 printf("\t----------------------------------------------------------------------------------------------------\n");
 x=a;
 while(x<b){
 f1a=(sinh((x/2)+delta_x)-sinh(x/2))/delta_x;
 f2a=((cosh((x/2)+delta_x))-(cosh(x/2)/2))/delta_x;
 f1b=cosh(x/2)/2;
 f2b=sinh(x/2)/4;
 f1=sinh(x/2);
 printf("   %10.2f ||%9.2f  ||  %10.2f      |  %10.2f        ||  %10.2f      |  %10.2f\n",x , f1 ,f1a, f1b,f2a, f2b);
 x+=delta_x;
 fprintf(fptr, "%10.2f\t%9.2f\t%10.2f\t%10.2f\t%10.2f\n",x , f1, f1a, f1b, f2b);
 }
 printf("\t----------------------------------------------------------------------------------------------------\n");
 printf("\n\n");

 return 0;
}
