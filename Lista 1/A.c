/*O código abaixo, criado para calcular o fatorial de um número informado pelo usuário, não funciona corretamente.
Utilize o debugger do CodeBlocks para verificar o erro, e aponte o que deve ser feito para corrigi-lo.*/

#include <stdio.h>

int main() {
    printf("Entre com o valor: ");
    int n;
    scanf("%d",&n);
    int i, acc = 1;    //O erro se encontrava no fato da varável acc não ter sido inicializada com algum o valor 1.
    for (i = n; i > 0; i--)
        acc = acc * i;
    printf("O valor do fatorial de %d eh %d",n,acc);

    return 0;
}