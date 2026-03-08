#include <stdio.h>
// Faça um Programa que peça as 4 notas bimestrais e mostre a média.

int main(void){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;


    printf("Digite o valor das suas 4 notas bimestrais\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    printf("Nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Sua media geral e [ %.2f ]", media);

}
