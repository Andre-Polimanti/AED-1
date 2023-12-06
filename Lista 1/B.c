/*Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade desta
pessoa, e quantos anos essa pessoa terá em 2030.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_atual, ano_nasc, idade;

    system("cls");

    printf("Insira o ano atual: ");
    scanf("%d", &ano_atual);

    printf("Insira o ano de nascimento: ");
    scanf("%d", &ano_nasc);

    idade = ano_atual - ano_nasc;

    system("cls");

    printf("A idade da pessoa eh %d.", idade);

    return 0;
}