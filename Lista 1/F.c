/*Faça um programa que calcule a área de um triângulo, cuja base e altura são fornecidas pelo usuário. Esse
programa não pode permitir a entrada de dados inválidos, ou seja, medidas menores ou iguais a 0.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float H, B, A;

    printf("Insira a altura: ");
    scanf("%f", &H);

    printf("Insira a base: ");
    scanf("%f", &B);

    A = B*H/2;

    system("cls");

    printf("A area do triangulo eh %f.", A);

    return 0;
}