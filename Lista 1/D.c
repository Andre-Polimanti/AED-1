/*Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética. Considerando que, se
o aluno tirar média entre 0 e 3, ele está REPROVADO, se ele tirar entre 3 e 7, ele está de EXAME FINAL, e se ele
tirar entre 7 e 10, ele está APROVADO, calcule, para alunos de EXAME FINAL, qual deverá ser a nota tirada neste
exame, para que o aluno seja aprovado, considerando que a média entre a nota do exame e a média ao longo do
semestre deve ser 6,0.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int notas[3];
    float media;
} Aluno;

int main()
{
    system("cls");

    Aluno Aluno;

    printf("Insira as notas do aluno.\n");

    for (int i = 0; i < 3; i++){
        printf("Nota %d: ", i+1);
        scanf("%d", &Aluno.notas[i]);
    }

    Aluno.media = (Aluno.notas[0] + Aluno.notas[1] + Aluno.notas[2]) / 3.0;

    system("cls");
    
    if (Aluno.media < 3){
        printf("Aluno reprovado!");
    }else if(Aluno.media >= 3 && Aluno.media < 7){
        printf("Aluno de recuperacao!");
    }else{
        printf("Aluno aprovado!");
    }
    
    return 0;
}