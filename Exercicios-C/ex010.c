#include <stdio.h>
// Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

int main(void){
    float graus_c;
    float graus_f;

    printf("Digite a temperatura atual em graus Celsius: ");
    scanf("%f", &graus_c);

    graus_f = (graus_c * 1.8) + 32;

    printf("Esse valor em Farenheit e [ %.2f F]", graus_f);

}