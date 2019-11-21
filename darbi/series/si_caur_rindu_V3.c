#include<stdio.h>
#include<math.h>

void main() {
 double x=2.05, y, a, S;

 y = sin(x);
 printf("y=sin(%.2f)=%.2f\n",x,y);

 a =pow(-1,0)*pow(x,2*0+1)/(1.);
 S=a;//S0=a0;
 printf("%.2f\t%.2f\t%.2f\n",x, a, S);

 a = a * (-1) *x*x /(2*3); //a1 =pow(-1,1)*pow(x,2*1+1)/(1.*1*2*3);
 S= S+a;//S1=a0+a1;
 printf("%.2f\t%.2f\t%.2f\n",x, a, S);

 a = a * (-1) *x*x / (4*5);// a =pow(-1,0)*pow(x,2*2+1)/(1.*1*2*3*4*5);
 S=S+a;//S2=a0+a1+a2;
 printf("%.2f\t%.2f\t%.2f\n",x, a, S);

 a = a * (-1) *x*x/ (6*7);// a =pow(-1,0)*pow(x,2*3+1)/(1.*1*2*3*4*5*6*7);
 S=S+a;//S3=a0+a1+a2+a3;
 printf("%.2f\t%.2f\t%.2f\n",x, a, S);

}
