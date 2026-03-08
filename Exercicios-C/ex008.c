#include <stdio.h>
#include <math.h>
// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

int main(void){
    float valor_hora;
    float horas_mes;
    float salario_total;

    printf("Digite quanto voce ganha por hora: ");
    scanf("%f", &valor_hora);
    printf("Digite quantas horas voce trabalha no mes: ");
    scanf("%f", &horas_mes);

    salario_total = valor_hora * horas_mes;

    printf("O seu salario total e de: [ R$%.2f ]", salario_total);

}