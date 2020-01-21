# 2. laboratorijas darbas - Funkcijas saknes - atskaite

## Teorija
Šajā labartorijas darbā bija iespēja parliecināties par to ka ir iespejams atrast sakni ar mazliet skaitlisku pieeju bez atsevišķām programmām

### Kods
```
#include<stdio.h>
#include<math.h>

int main(){
 float a, b, c, x, delta_x, funkca, funkcb, funkcx;
 int i=0;

 printf("Lūdzu ievadiet intervāla sākuma vērtību, kam vēlaties apreiķināt sakni priekš sinh(x/2)=c\n");
 scanf("%f",&a);
 printf("Lūdzu ievadiet intervāla beigu vērtību, kam vēlaties apreiķināt sakni priekš sinh(x/2)=c\n");
 scanf("%f",&b);
 printf("Lūdzu ievadiet c vērtīb, kam vēlaties pielīdzināt funkcijas sakni priekš sinh(x/2)=c\n");
 scanf("%f",&c);
 printf("Lūdzu ievadiet precizitāti, ar kādu vēlaties apreiķināt funkcijas sakni priekš sinh(x/2)=c /0.1,0.01,0.001 ect../\n");
 scanf("%f",&delta_x);

 funkca= sinh(a/2)-c; funkcb = sinh(b/2)-c;
 if(funkca*funkcb>0){
  printf("Intervālā [%.2f;%.2f] sakņu nav vai tajā ir pāra sakņu skaits\n",a,b);

 }

  printf("sin(%7.3f)=%7.3f\t\t\t\tsin(%7.3f)=%7.3f\n", a, sinh(a/2)-c, b, sinh(b/2)-c);

 while((b-a)>delta_x){
  x= (a+b)/2.;
  if(funkca*(sinh(x/2)-c)>0)
   a =x;
  else
   b=x;
   i++;
printf("sin(%7.3f)=%7.3f\tsin(%7.3f)=%7.3f\tsin(%7.3f)=%7.3f\n",a,sinh(a/2)-c,x,sinh(x/2)-c,b, sinh(b/2)-c);
}

 printf("sakne atrodas pie x=%.3f, jo...  %d.reizes nācās atkārtot darbī lai atrastu intervālu\n",x,i);

 return 0;
}

```
Kods gandrīz pilnībā ir balstīts uz Jūsu sniegto kodu, ir veiktas tikai minimālas modifikācijas
### Rezultaats
```
Lūdzu ievadiet intervāla sākuma vērtību, kam vēlaties apreiķināt sakni priekš sinh(x/2)=c
-2
Lūdzu ievadiet intervāla beigu vērtību, kam vēlaties apreiķināt sakni priekš sinh(x/2)=c
2
Lūdzu ievadiet c vērtīb, kam vēlaties pielīdzināt funkcijas sakni priekš sinh(x/2)=c
2
Lūdzu ievadiet precizitāti, ar kādu vēlaties apreiķināt funkcijas sakni priekš sinh(x/2)=c /0.1,0.01,0.001 ect../
0.001
Intervālā [-2.00;2.00] sakņu nav vai tajā ir pāra sakņu skaits
sin( -2.000)= -3.175				sin(  2.000)= -0.825
sin(  0.000)= -2.000	sin(  0.000)= -2.000	sin(  2.000)= -0.825
sin(  1.000)= -1.479	sin(  1.000)= -1.479	sin(  2.000)= -0.825
sin(  1.500)= -1.178	sin(  1.500)= -1.178	sin(  2.000)= -0.825
sin(  1.750)= -1.009	sin(  1.750)= -1.009	sin(  2.000)= -0.825
sin(  1.875)= -0.919	sin(  1.875)= -0.919	sin(  2.000)= -0.825
sin(  1.938)= -0.872	sin(  1.938)= -0.872	sin(  2.000)= -0.825
sin(  1.969)= -0.849	sin(  1.969)= -0.849	sin(  2.000)= -0.825
sin(  1.984)= -0.837	sin(  1.984)= -0.837	sin(  2.000)= -0.825
sin(  1.992)= -0.831	sin(  1.992)= -0.831	sin(  2.000)= -0.825
sin(  1.996)= -0.828	sin(  1.996)= -0.828	sin(  2.000)= -0.825
sin(  1.998)= -0.826	sin(  1.998)= -0.826	sin(  2.000)= -0.825
sin(  1.999)= -0.826	sin(  1.999)= -0.826	sin(  2.000)= -0.825
sakne atrodas pie x=1.999, jo...  12.reizes nācās atkārtot darbī lai atrastu intervālu

```

### Analiize
Rezultāti ir nesmuki bet funkcionāli, manuprāt par 15 minūšu darbu nevar sūdzēties

### Bildes
![Bildes apraksts](https://github.com/KartupelusTT/RTR-105/blob/master/darbi/2ld_roots/2ld_roots.png)

