#include <stdio.h>
// Faça um Programa que peça dois números e imprima a soma.

int main(void){
    int num1;
    int num2;
    int sum;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("A soma entre esses dois numero e de: [ %d ]", sum);
}
