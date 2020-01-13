#include<stdio.h>
#include<math.h>

int main(){

float s_apgabala, x=0, x_rad=0,  p0=0.005, PI=3.14, r=1, sin_test;

 //tiek iegūta inforācija par robežu

 printf("\n\n ___________________________________________________________________________");
 printf("\n| Lūdzu ievadiet x vērtību ko vēlaties ievietot sin(x) vietā grādos:(1-179) |\n");
 printf("|___________________________________________________________________________|\n");
 printf("|__________________________________\\__/_____________________________________|\n\t\t\t\t    ");
 scanf("%f",&x);
 printf("|__________________________________/__\\_____________________________________|\n");
 while(x<1||x>179){
 printf("|   Lūdzu ievadiet derīgu x vērtību diapozonā no 1 līdz 179 grādiem         |\n");
 printf("|___________________________________________________________________________|\n");
 printf("|__________________________________\\__/_____________________________________|\n\t\t\t\t    ");
 scanf("%f",&x);
 printf("|__________________________________/__\\_____________________________________|\n");
 }

 printf("|                 Jūsu ievadītā vērtība ir pieņemta!                        |\n");
 printf("|___________________________________________________________________________|\n");

 //veic apreiķinus

 x_rad=(x*PI)/180;
// sin_test=sin(x_rad) ;
 s_apgabala=(r*r*(PI-x_rad+sin(x_rad)))/2;

// printf("x_rad= %f\t sin(x_rad)= %f\t s_apgabala= %f\n", x_rad, sin_test, s_apgabala );

 printf("|Apreiķinātais laukums starp sin(x) asi un x\t\t\t\t    |\n|\t\t\t asi robežās no 0 līdz PI ir vienāds ar %.3f       |", s_apgabala);
 printf("\n|___________________________________________________________________________|\n\n\n");

 return 0;
}
