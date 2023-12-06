/*Faça um programa que cria uma estrutura livro, que contém os elementos título, ano de edição, número de páginas
e preço. Criar uma variável dessa estrutura que é um vetor de 5 elementos. Ler os valores para a estrutura e
imprimir a média do número de páginas dos livros.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char titulo[20];
    int ano;
    int paginas;
    float preco;
} Livros;

int main()
{
    system("cls");

    Livros Livros[5];

    for (int i = 0; i < 5; i++){
        printf("Livro %d\n", i+1);

        setbuf(stdin,NULL);
        printf("Titulo: ");
        fgets(Livros[i].titulo, 20, stdin);

        setbuf(stdin,NULL);
        printf("Ano de edicao: ");
        scanf("%d", &Livros[i].ano);

        setbuf(stdin,NULL);
        printf("Numero de paginas: ");
        scanf("%d", &Livros[i].paginas);

        setbuf(stdin,NULL);
        printf("Preco: ");
        scanf("%f", &Livros[i].preco);

        printf("\n");
    }

    int soma = 0;

    for (int i = 0; i < 5; i++){
        soma += Livros[i].paginas;
    }

    int media = soma / 5;

    system("cls");

    printf("A media de paginas eh %d.", media);

    return 0;
}
