# Labartorijas darbs Nr.1. - Atvasināšana - atskaite

## Teorija
Ar šīs programmas palīdzību ir iespējams apreiķināt atvasinājumu sinh(x/2) izmantojot gan askaitlisko metodi, gan analītisko metodi

### Code
```
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
```
Programmā visdrīzāk ir iemaldījusies kāda skaitliskā kļūda, jo skaitļi nesakrīt starp skaitlisko atvasinājumu un alanītisko atvasinājumu  

### Rezultāts
```

Lūdzu ievadiet atvasīnājuma sākumpunktu - a : 
-3.14
Lūdzu ievadiet atvasīnājuma beigupunktu - b : 
3.14
Lūdzu ievadiet atvasīnājuma soli priekš precizitātes formā /0.1, 0.01 utt... / : 
0.1 


	   x  || sinh(x/2) ||    sinh'(x/2)    |     sinh'(x/2)     ||   sinh"(x/2)     |   sinh"(x/2)
    	      ||           ||analytical formula|  finite difference ||analytical formula| finite difference)
	----------------------------------------------------------------------------------------------------
	----------------------------------------------------------------------------------------------------
        -3.14 ||    -2.30  ||        2.40      |        1.25        ||       10.36      |       -0.57
        -3.04 ||    -2.18  ||        2.29      |        1.20        ||        9.92      |       -0.54
        -2.94 ||    -2.06  ||        2.19      |        1.14        ||        9.50      |       -0.51
        -2.84 ||    -1.95  ||        2.10      |        1.09        ||        9.11      |       -0.49
        -2.74 ||    -1.84  ||        2.01      |        1.05        ||        8.73      |       -0.46
        -2.64 ||    -1.74  ||        1.92      |        1.00        ||        8.39      |       -0.43
        -2.54 ||    -1.64  ||        1.84      |        0.96        ||        8.06      |       -0.41
        -2.44 ||    -1.55  ||        1.77      |        0.92        ||        7.75      |       -0.39
        -2.34 ||    -1.46  ||        1.70      |        0.88        ||        7.46      |       -0.36
        -2.24 ||    -1.37  ||        1.63      |        0.85        ||        7.19      |       -0.34
        -2.14 ||    -1.29  ||        1.57      |        0.81        ||        6.94      |       -0.32
        -2.04 ||    -1.21  ||        1.51      |        0.78        ||        6.70      |       -0.30
        -1.94 ||    -1.13  ||        1.45      |        0.75        ||        6.49      |       -0.28
        -1.84 ||    -1.06  ||        1.40      |        0.73        ||        6.29      |       -0.26
        -1.74 ||    -0.98  ||        1.36      |        0.70        ||        6.10      |       -0.25
        -1.64 ||    -0.92  ||        1.31      |        0.68        ||        5.93      |       -0.23
        -1.54 ||    -0.85  ||        1.27      |        0.66        ||        5.77      |       -0.21
        -1.44 ||    -0.78  ||        1.23      |        0.64        ||        5.63      |       -0.20
        -1.34 ||    -0.72  ||        1.20      |        0.62        ||        5.50      |       -0.18
        -1.24 ||    -0.66  ||        1.17      |        0.60        ||        5.39      |       -0.17
        -1.14 ||    -0.60  ||        1.14      |        0.58        ||        5.29      |       -0.15
        -1.04 ||    -0.54  ||        1.11      |        0.57        ||        5.20      |       -0.14
        -0.94 ||    -0.49  ||        1.09      |        0.56        ||        5.13      |       -0.12
        -0.84 ||    -0.43  ||        1.07      |        0.54        ||        5.07      |       -0.11
        -0.74 ||    -0.38  ||        1.05      |        0.53        ||        5.02      |       -0.09
        -0.64 ||    -0.33  ||        1.04      |        0.53        ||        4.98      |       -0.08
        -0.54 ||    -0.27  ||        1.02      |        0.52        ||        4.96      |       -0.07
        -0.44 ||    -0.22  ||        1.01      |        0.51        ||        4.95      |       -0.06
        -0.34 ||    -0.17  ||        1.01      |        0.51        ||        4.95      |       -0.04
        -0.24 ||    -0.12  ||        1.00      |        0.50        ||        4.97      |       -0.03
        -0.14 ||    -0.07  ||        1.00      |        0.50        ||        4.99      |       -0.02
        -0.04 ||    -0.02  ||        1.00      |        0.50        ||        5.03      |       -0.01
         0.06 ||     0.03  ||        1.00      |        0.50        ||        5.08      |        0.01
         0.16 ||     0.08  ||        1.01      |        0.50        ||        5.15      |        0.02
         0.26 ||     0.13  ||        1.02      |        0.50        ||        5.22      |        0.03
         0.36 ||     0.18  ||        1.03      |        0.51        ||        5.31      |        0.05
         0.46 ||     0.23  ||        1.04      |        0.51        ||        5.42      |        0.06
         0.56 ||     0.28  ||        1.06      |        0.52        ||        5.53      |        0.07
         0.66 ||     0.34  ||        1.07      |        0.53        ||        5.66      |        0.08
         0.76 ||     0.39  ||        1.09      |        0.54        ||        5.81      |        0.10
         0.86 ||     0.44  ||        1.12      |        0.55        ||        5.97      |        0.11
         0.96 ||     0.50  ||        1.14      |        0.56        ||        6.14      |        0.12
         1.06 ||     0.56  ||        1.17      |        0.57        ||        6.33      |        0.14
         1.16 ||     0.61  ||        1.21      |        0.59        ||        6.54      |        0.15
         1.26 ||     0.67  ||        1.24      |        0.60        ||        6.76      |        0.17
         1.36 ||     0.73  ||        1.28      |        0.62        ||        7.00      |        0.18
         1.46 ||     0.80  ||        1.32      |        0.64        ||        7.25      |        0.20
         1.56 ||     0.86  ||        1.37      |        0.66        ||        7.53      |        0.22
         1.66 ||     0.93  ||        1.41      |        0.68        ||        7.82      |        0.23
         1.76 ||     1.00  ||        1.47      |        0.71        ||        8.13      |        0.25
         1.86 ||     1.07  ||        1.52      |        0.73        ||        8.47      |        0.27
         1.96 ||     1.14  ||        1.58      |        0.76        ||        8.82      |        0.29
         2.06 ||     1.22  ||        1.64      |        0.79        ||        9.20      |        0.31
         2.16 ||     1.30  ||        1.71      |        0.82        ||        9.60      |        0.33
         2.26 ||     1.39  ||        1.78      |        0.85        ||       10.02      |        0.35
         2.36 ||     1.47  ||        1.86      |        0.89        ||       10.47      |        0.37
         2.46 ||     1.56  ||        1.94      |        0.93        ||       10.94      |        0.39
         2.56 ||     1.66  ||        2.02      |        0.97        ||       11.45      |        0.41
         2.66 ||     1.76  ||        2.11      |        1.01        ||       11.98      |        0.44
         2.76 ||     1.86  ||        2.21      |        1.06        ||       12.54      |        0.47
         2.86 ||     1.97  ||        2.31      |        1.10        ||       13.13      |        0.49
         2.96 ||     2.08  ||        2.42      |        1.16        ||       13.75      |        0.52
         3.06 ||     2.20  ||        2.53      |        1.21        ||       14.41      |        0.55
	----------------------------------------------------------------------------------------------------



```

### Analīze...
Diemžēl nepietika laika lai noskaidrotu, kas vainas programmai kādēļ rodas tik rupja kļūda,
gala Gnuplot atēlā netiks iekļauta 5.kolona jo tās kļūdas dēļ nav uztverami pārējie dati  

### Figures
![Bildes apraksts](https://github.com/KartupelusTT/RTR-105/blob/master/darbi/3ld_atvasinajums/gnuplot_plot.png)
