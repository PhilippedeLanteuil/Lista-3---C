#include <stdio.h>
int main() {
    int num;
 int soma=0,soma2=0;
 while(num<1000){
  if(num%2==0)
  {
   soma=soma+num;
    }
    else
      {
      soma2=soma2+num;
      }
        printf("Digite um numero: \n");
  scanf("%d",&num);
  }
  printf("A soma dos numeros pares eh: %d\n",soma);
  printf("A soma dos numeros impares eh: %d\n",soma2);              
  return 0;
}
