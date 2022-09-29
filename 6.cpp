#include<stdio.h>
int main(){
int continuar=1, cont=0 ;
float n1, n2, n3, media, maiormedia, menormedia, mediaturma=0;
    while ( continuar == 1){
        printf("Digite a primeira nota: ");
        scanf("%f",&n1);
        printf("Digite a segunda nota: ");
        scanf("%f",&n2);
        printf("Digite a terceira nota: ");
        scanf("%f",&n3);

        media = (n1 + n2 + n3)/3;
         printf("\nMedia do aluno: %.1f\n", media);

        cont +=1;
        mediaturma += media;

    if (cont == 1){
        maiormedia = media;
        menormedia = media;
    }
        else{
        if(media>maiormedia){
            maiormedia = media;
        }
        if(media<menormedia){
            menormedia = media;
        }
    }
        printf("\nDeseja processar outro aluno?");
        printf("\n1-Sim.");
                printf("\n2-Não\n.");
                scanf("%d", &continuar);
            
        }

    printf("\nA maior media foi: %f", maiormedia);
        printf("\nA menor media foi: %f", menormedia);
    printf("\nA media da turma foi: %f", mediaturma/cont);

     return 0;
 }
