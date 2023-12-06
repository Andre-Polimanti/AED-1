/*Crie um programa que receba uma string do usuário, e mostre se existem letras repetidas, e quais são elas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int repete (int oc[]);
void letras_repetidas (int oc[]);

int main()
{
    system("cls");

    char string[100];
    int ocorrencias[26];

    int n = 97;

    printf("Insira a string: ");
    fgets(string, 100, stdin);

    for(int i = 0; i < 26; i++){
        ocorrencias[i] = 0;
        for (int c = 0; c < strlen(string); c++){
            if (string[c] == n || string[c] == n + 32){
                ocorrencias[i]++;
            }
        }
        n++;
    }

    if (repete(ocorrencias)){
        printf("Ha letras repetidas!\n");
        printf("Letras repetidas: ");
        letras_repetidas(ocorrencias);
    }else{
        printf("Nao ha letras repetidas!\n");
    }
    
    return 0;
}

int repete (int oc[])
{
    int check = 0;
    for (int i = 0; i < 26; i++){
        if (oc[i] > 1){
            check = 1;
        }
    }
    return check;
}

void letras_repetidas (int oc[])
{
    for (int i = 0; i < 26; i++){
        if (oc[i] > 1){
            printf("%c, ", 97+i);
        }
    }
}

