#include <stdio.h>
#include <math.h>
// Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

int main(void){
    float lado;
    float area;

    printf("Digite o valor de um dos lados do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("O valor da area do seu quadrado e de: [ %.2fm2 ]\n", area);
    printf("mas os dobro do seu valor e de: [ %.2fm2 ]", area * 2);

}