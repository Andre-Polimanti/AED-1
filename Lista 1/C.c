/*Escreva um programa que recebe um operador aritmético e dois operandos e calcule a operação indicada. As
operações possíveis são soma(+), subtração(-), multiplicação(*) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int n[2];
    char operador;

    printf("Insira o operador: ");
    scanf("%c", &operador);

    printf("Insira os operandos: ");
    scanf("%d %d", &n[0], &n[1]);

    int resultado;

    system("cls");

    if (operador == '+'){
        resultado = n[0] + n[1];
    }else if (operador == '-'){
        resultado = n[0] - n[1];
    }else if (operador == '*'){
        resultado = n[0] * n[1];
    }else{
        printf("Operador invalido!");
        return 0;
    }

    printf("O resultado eh %d.", resultado);

    return 0;
}