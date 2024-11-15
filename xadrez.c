#include <stdio.h>

// Desafio de Xadrez - MateCheck

#define MOVIMENTO_BISPO 5   // O bispo se move 5 casas na diagonal superior direita.
#define MOVIMENTO_TORRE 5   // A torre se move 5 casas para a direita.
#define MOVIMENTO_RAINHA 8  // A rainha se move 8 casas para a esquerda.
#define MOVIMENTO_CAVALO 2  // O cavalo simula um movimento de 2 casas (como exemplo).

int main() {
    // Movimentação do Bispo (Diagonal Superior Direita)
    // O bispo move 5 casas na diagonal superior direita. Vamos usar um loop para simular isso.
    printf("Movimento do Bispo (Diagonal Superior Direita):\n");
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        // O bispo se move em duas direções a cada vez: Cima e Direita
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre (5 casas para a direita)
    // A torre se move para a direita 5 casas. Simulamos isso com um loop.
    printf("\nMovimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    // A rainha se move para a esquerda 8 casas. Vamos usar um loop para simular isso.
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    for (int i = 0; i < MOVIMENTO_RAINHA; i++) {
        printf("Esquerda\n");
    }

    // Movimentação do Cavalo (Movimento simulado com 2 casas)
    // O cavalo move-se de forma não-linear, mas vamos simular com um exemplo simples.
    printf("\nMovimento do Cavalo (simulação de 2 casas):\n");
    for (int i = 0; i < MOVIMENTO_CAVALO; i++) {
        // O cavalo faz um movimento L. Vamos simular um movimento simples.
        // Exemplo: 2 casas para a direita e 1 para cima, ou 1 para a direita e 2 para cima.
        if (i % 2 == 0) {
            printf("Direita\n");
            printf("Cima\n");
        } else {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    return 0;
}
