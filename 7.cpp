#include <stdio.h>
int main () {

    int numero, quantidade_digitos = 0, auxiliar_numero, auxiliar_numero2, soma, digito, contador;

    printf("Insira um numero para obter seu digito verificador: ");
    scanf("%d", &numero);

    auxiliar_numero2 = numero;

    do {

        soma = 0;

        auxiliar_numero = numero;

        while (auxiliar_numero >= 1) {

            auxiliar_numero = auxiliar_numero / 10;

            quantidade_digitos++;

        }

        for (contador = 0; contador <= quantidade_digitos; contador++) {

            digito = numero % 10;

            soma += digito;

            numero = numero / 10;

        }


        numero = soma;


    } while (soma >= 10);


   printf("\nNumero com seu digito verificador: %d-%d\n", auxiliar_numero2, soma);

    return 0;
}
