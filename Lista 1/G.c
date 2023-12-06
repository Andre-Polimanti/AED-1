/*Crie um programa que preencha uma matriz 5x10 com números inteiros e some cada uma das linhas, armazenando o resultado das somas em um vetor.
A seguir o programa deverá multiplicar cada elemento da matriz pela soma da linha correspondente e mostrar a matriz resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("cls");

    srand(time(NULL));

    int matriz[5][10];
    int vetor[5];

    printf("Matriz original:\n");

    for (int i = 0; i < 5; i++){
        vetor[i] = 0;
        for (int j = 0; j < 10; j++){
            matriz[i][j] = rand() % 10;
            vetor[i] += matriz[i][j];
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Vetores:\n");

    for (int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n\n");
    printf("Matriz depois das multiplicacoes:\n");

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 10; j++){
            matriz[i][j] *= vetor[i];
            printf("%.3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}