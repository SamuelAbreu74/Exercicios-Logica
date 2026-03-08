#include <stdio.h>
#include <math.h>
// Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).

int main(void){
    float graus_F;
    float graus_C;

    printf("Digite a temperatura atual em graus Farenheit: ");
    scanf("%f", &graus_F);

    graus_C = (graus_F - 32) / 1.8;

    printf("Esse valor em celsius e [ %.2f ]", graus_C);
}