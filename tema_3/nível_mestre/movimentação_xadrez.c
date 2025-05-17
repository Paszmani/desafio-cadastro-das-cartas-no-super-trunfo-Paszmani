#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas
    const int casasTorre = 3;   // Movimento da Torre
    const int casasBispo = 2;    // Movimento do Bispo
    const int casasRainha = 5;   // Movimento da Rainha

    // Movimento da Torre: 3 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 2 casas na diagonal (cima e direita)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha: 5 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    // Separação do movimento do Cavalo
    printf("\nMovimento do Cavalo:\n");
    
    // Definindo o número de movimentos do Cavalo
    const int movimentosCavalo = 1; // Um movimento em "L"
    
    // Loop aninhado para simular o movimento do Cavalo
    for (int i = 0; i < movimentosCavalo; i++) {
        // O Cavalo se move 2 casas para baixo e 1 casa para a esquerda
        for (int m = 0; m < 2; m++) {
            printf("Baixo\n"); // Movimento para baixo
        }
        printf("Esquerda\n"); // Movimento para a esquerda
    }

    return 0;
}
