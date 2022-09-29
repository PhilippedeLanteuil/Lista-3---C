#include <stdio.h>
int main(){
	float num, maior, menor;
     int i;

 printf("Entre com o 1o numero inteiro: ");
 scanf("%f", &num);

 maior=num;
 menor=num;

 for(i=1; i<15; i++)
 {
 printf("\nEntre com o %do numero inteiro: ",i+1);
 scanf("%f", &num);

 if(num>maior)
 maior=num;
 else
 if(num<menor)
 menor=num;
 }

 printf("\nO menor numero eh: %f", menor);
 printf("\nO maior numero eh: %f", maior);
 return 0; 
}
