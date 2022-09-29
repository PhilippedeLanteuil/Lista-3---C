#include <stdio.h>

int main(){

int num,aux=1,produto=1;  

printf("Informe os numeros a serem multiplicados, para finalizar digite 0:\n");

 

while (aux!=0){

scanf("%d",&num);

if(num!=0)
produto = produto*num;
 aux = num;

}

printf("\nResultado: %d",produto);

return 0;

}
        
        
        
