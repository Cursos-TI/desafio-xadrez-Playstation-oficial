#include <stdio.h>

int main() {

    int movimentosBaixo = 2;   // O cavalo anda duas casas para baixo
    int movimentosEsquerda = 1; // ...e uma para a esquerda

    printf("Movimento do Cavalo em L:\n");

    // Primeiro loop: for → desce 2 vezes
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Linha em branco para separar (requisito do enunciado)
    printf("\n");

    // Segundo loop: while → move para a esquerda 1 vez
    int j = 0;
    while (j < movimentosEsquerda) {
        printf("Esquerda\n");
        j++;
    }
 
    return 0;
}
