#include <stdio.h>
#include <math.h>
// Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

int main(void){
    float raio;
    float area;

    printf("Digite o valor do raio de um circulo qualquer: ");
    scanf("%f", &raio);

    area = pow(raio, 2) * 3.14;

    printf("A area total deste circulo e: [ %.2f ]", area);

}