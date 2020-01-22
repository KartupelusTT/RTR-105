# 5. laboratorijas darba - Teilora rindas Skaitļu kopas kartošana- atskaite

## Teorija
Ar šāda veida algoritmu ir iespējams sakārtot un izanalizēt jebkādu skaitļu, ciparu rindu.

### Kods
```
#include<stdio.h>
#include<string.h>

int main(){
 //vieta mainīgajiem
 char in_st[200];
 int i, j, k, tmp, lenght, m_v=200, l_v=0, vid_v, medi, vertiba, kop_s=0;
 int max=0;

 //dod iespēju lietotājam ievadīt simbolu rindu
 printf("\n\n________________________________________________________________\n");
 printf(" Lūdzu ievadiet simbolu rindu, kas nepārsniedz 200 rakstzīmes:\n\t");
 scanf("%[^\n]", in_st);
 printf("________________________________________________________________\n");

 //Ievadītās rindas garuma noskaidrošana
 lenght=strlen(in_st);
 printf("|\tIevadītās rindas garums ir %d simboli\t\t\t|\n", lenght);

 //Kārtošanas algoritms
 for (j=0;j<lenght;j++){
  for (i=0;i<lenght-1;i++){
   if (in_st[i]>in_st[i+1]){
    tmp =in_st[i+1];
    in_st[i+1] = in_st[i];
    in_st[i]= tmp;
   }
  }
 }

 //videjas vērtības noskaidrošana,
 for(i=0;lenght>i;i++){
 vertiba = (int)in_st[i];
 if (l_v<vertiba) l_v=vertiba;
 if (m_v>vertiba && vertiba>32) m_v = vertiba;
 kop_s=kop_s+vertiba;
 }

 //Mazākās vērtības izdruka
 printf("________________________________________________________________\n");
 printf("|\tMazākā vērtība pēc ASCII tabulas ir %d  \t\t|\n", m_v);

 //Lielākās vērtības izdruka
 printf("________________________________________________________________\n");
 printf("|\tLielākā vērtība pēc ASCII tabulas ir %d  \t\t|\n", l_v);

 //vidējās vērības izdruka
 printf("________________________________________________________________\n");
 vid_v=kop_s/lenght;
 printf("|\tVidējā vērtība ASCII sistēmā ir %d\t\t\t|\n",vid_v);

 //medianas izdruka
 printf("________________________________________________________________\n");
 printf("|\tIevadītas rindas mediana pēc ASCII sistēmas ir %d \t|\n", in_st[lenght/2]);
 printf("________________________________________________________________\n");

 //modas apreiķins un izdruka
j=0;
 for(i=0;lenght>i;i++){
  if(in_st[i]==in_st[i+1]){
   j++;
  }
  else if (in_st[i] != in_st[i+1]){
   if(j>max) max=j;
   j=0;
  }
 }
j=0;
 for(i=0;lenght>i;i++){
  if(in_st[i]==in_st[i+1]){
  j++;
  }
  else if(in_st[i] != in_st[i+1]){
   if (max==j){
    printf("|\tIvadītās rindas moda ir %d \t\t\t\t|\n", in_st[i]);
    printf("|______________________________________________________________|\n");
    }
  j=0;
  }
 }

 //alfabētiskas secības izdruka
 for(i=0;lenght>i;i++){
 printf("|\tGarums %d \t %c \t %d\t\t\t\t|\n", i, in_st[i], in_st[i] );
 }

 //programmas nobeigums
 printf("________________________________________________________________\n");
 printf(" \n\n");
 return 0;
}
```
Manuprāt ļoti skaists kods, vis strādā kā nākas
### Rezultaats
```


________________________________________________________________
 Lūdzu ievadiet simbolu rindu, kas nepārsniedz 200 rakstzīmes:
	snadflksnflsenlein9498u8 isdlin
________________________________________________________________
|	Ievadītās rindas garums ir 31 simboli			|
________________________________________________________________
|	Mazākā vērtība pēc ASCII tabulas ir 52  		|
________________________________________________________________
|	Lielākā vērtība pēc ASCII tabulas ir 117  		|
________________________________________________________________
|	Vidējā vērtība ASCII sistēmā ir 96			|
________________________________________________________________
|	Ievadītas rindas mediana pēc ASCII sistēmas ir 105 	|
________________________________________________________________
|	Ivadītās rindas moda ir 110 				|
|______________________________________________________________|
|	Garums 0 	   	 32				|
|	Garums 1 	 4 	 52				|
|	Garums 2 	 8 	 56				|
|	Garums 3 	 8 	 56				|
|	Garums 4 	 9 	 57				|
|	Garums 5 	 9 	 57				|
|	Garums 6 	 a 	 97				|
|	Garums 7 	 d 	 100				|
|	Garums 8 	 d 	 100				|
|	Garums 9 	 e 	 101				|
|	Garums 10 	 e 	 101				|
|	Garums 11 	 f 	 102				|
|	Garums 12 	 f 	 102				|
|	Garums 13 	 i 	 105				|
|	Garums 14 	 i 	 105				|
|	Garums 15 	 i 	 105				|
|	Garums 16 	 k 	 107				|
|	Garums 17 	 l 	 108				|
|	Garums 18 	 l 	 108				|
|	Garums 19 	 l 	 108				|
|	Garums 20 	 l 	 108				|
|	Garums 21 	 n 	 110				|
|	Garums 22 	 n 	 110				|
|	Garums 23 	 n 	 110				|
|	Garums 24 	 n 	 110				|
|	Garums 25 	 n 	 110				|
|	Garums 26 	 s 	 115				|
|	Garums 27 	 s 	 115				|
|	Garums 28 	 s 	 115				|
|	Garums 29 	 s 	 115				|
|	Garums 30 	 u 	 117				|
________________________________________________________________
 

```

### Analiize
Rezultāti manuprāt atbilst perfekti prasībām, un man pat gribētos teikt ka arī skaisti izskatās.
### Bildes
![Bildes apraksts](https://github.com/KartupelusTT/RTR-105/blob/master/darbi/16_ned/WhatsApp%20Image%202020-01-22%20at%2016.06.02.jpeg)
