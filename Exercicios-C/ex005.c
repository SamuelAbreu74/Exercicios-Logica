#include <stdio.h>
// Faça um Programa que converta metros para centímetros.

int main(void){
    float metros;
    float centimetros;

    printf("Digite sua media em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;
    

    printf("%.2fm em centimetros e: [ %.2fcm ]", metros, centimetros);
}