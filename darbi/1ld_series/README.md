# Labartorijas darbs Nr.1. - Taylora rindas - atskaite

## Theorija
Izmantojot teilora rinads apreiķinot sarežģītas matemātiskās funkcijas var regulēt precizitāti un to apreiķinu amplitūdu

### Code
```
#include<stdio.h>
#include<math.h>

void main() {
 long double x=0, y, a, S;
 int k=0;

 printf("\n\n");
 printf("\n\t\t  500\n");
 printf("\t\t______\n");
 printf("\t\t\\             2*k+1\n");
 printf("\t\t \\          x^\n");
 printf("\ty(x)=\t  |    -----------------   = sinh(x/2)\n");
 printf("\t\t /                2*k+1\n");
 printf("\t\t/      (2*k+1)!*2^\n");
 printf("\t\t------\n");
 printf("\t\t  k=0\n");
 

 printf("\n\n\t __________________________________________________________________________");
 printf("\n\t| Lūdzu ievadiet izvēlēto x vērtību kurai velaties iegūt sinh vērtību:     |\n\t");
 printf("|__________________________________________________________________________|\n\t|\t\t\t\t\t");
 scanf("%Lg",&x);
 printf("\t|__________________________________________________________________________|\n");
// printf("\t %Lg",x);

//matematiskās daļas apreiķins
 y = sinh(x/2);
 printf("\t|\t\t\t\ty=sinh(%.5Lg)=%.5Lg\t\t\t   |\n",x,y);
 printf("\t|__________________________________________________________________________|\n");

 a =x/2;
 S=a;//S0=a0;
// printf("\t%8.5Lg\t%8.5Lg\t%8.5Lg\n",x, a, S);
// printf("\t|__________________________________________________________________________|\n");

while(k<501){
 k++;
 a = a *pow(x,2) /((2*k)*(2*k+1)*4);
 S= S+a;
 if (k==500||k==499){
 printf("\t|\t%d.   |    X=%.5Lg\t|\ta=%.5Lg\t|\tS= %.5Lg\t   |\n", k, x, a, S);
  }
 }
 printf("\t|______________|________|_______________________|__________________________|\n");
 printf("\n\n\t\t            2\n");
 printf("\t\t          x^\n");
 printf("\t\tR = -----------------\n");
 printf("\t\t     (2*k)*(2*k+1)*k\n");
 printf("\n\n");
}
```
Par laimi šim kodam pieliku pietiekami daudz laika lai to izstrādātu un tas manuprāt ir visai pārredzams un pietiekami precīzs  

### Result
```

		  500
		______
		\             2*k+1
		 \          x^
	y(x)=	  |    -----------------   = sinh(x/2)
		 /                2*k+1
		/      (2*k+1)!*2^
		------
		  k=0


	 __________________________________________________________________________
	| Lūdzu ievadiet izvēlēto x vērtību kurai velaties iegūt sinh vērtību:     |
	|__________________________________________________________________________|
	|					1
	|__________________________________________________________________________|
	|				y=sinh(1)=0.5211			   |
	|__________________________________________________________________________|
	|	499.   |    X=1	|	a=4.6386e-2866	|	S= 0.5211	   |
	|	500.   |    X=1	|	a=1.1585e-2872	|	S= 0.5211	   |
	|______________|________|_______________________|__________________________|


		            2
		          x^
		R = -----------------
		     (2*k)*(2*k+1)*k



```

### Analīze

Diemžēl dažkārt tabulācija nobīdas un darbs neizskatās tik ļoti smuki  

### Figures
![Bildes apraksts](https://github.com/KartupelusTT/RTR-105/blob/master/darbi/1ld_series/1ld_series.png)
