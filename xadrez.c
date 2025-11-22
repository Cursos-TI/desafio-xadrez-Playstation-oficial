#include <stdio.h>

int main() {

    int menu;

    printf("Bem vindo ao jogo de xadrez \n"); ///menu de opções
    printf("1. para jogar\n");
    printf("2. para sair\n");
    printf("digite:");
    scanf("%d", &menu); ///digite
    printf("\n");

    int movimentosBaixo = 2;   // O cavalo anda duas casas para baixo
    int movimentosEsquerda = 1; // ...e uma para a esquerda
switch (menu)
{
case 1:
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
    break;

    case 2: ///desligando
       printf("fechando... \n");
       break;
default:
/// quando escolhe nenhuma opção

printf("erro \n");

    break;
}
    
    return 0;
}
