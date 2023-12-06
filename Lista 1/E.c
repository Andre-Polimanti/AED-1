/*Faça o programa que lê X números e soma os maiores que 10 e conta os menores que 10. Considere que a leitura
dos números encerra quando o usuário digita dez.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int cont = 0, soma = 0;
    int n;

    printf("Insira numeros.\n");

    do{
        scanf("%d", &n);

        if (n > 10){
            soma += n;
        }else if (n < 10){
            cont++;
        }
    } while(n != 10);

    system("cls");

    printf("A contagem de numeros menores que 10 eh %d.\n", cont);
    printf("A soma de todos os numeros maiores que 10 eh %d.", soma);

    return 0;
}