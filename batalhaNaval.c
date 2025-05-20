#include <stdio.h>

int main() {
    // declaração da matriz do tabuleiro 5x5, inicializada com 0 (representando água)
    int tabuleiro[5][5] = {0};

    // cordenadas iniciais para o navio horizontal (linha 1, coluna 0)
    int linha_horizontal = 1;
    int coluna_horizontal = 0;

    // posiciona navio horizontal de 3 posições
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = 3; // 3 representa navio
    }

    // coordenadas iniciais para o navio vertical (linha 0, coluna 3)
    int linha_vertical = 0;
    int coluna_vertical = 3;

    // posiciona navio vertical de 3 posições
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = 3;
    }

    // exibe as coordenadas dos navios
    printf("Coordenadas das partes dos navios:\n");

    printf("\nNavio Horizontal:\n");
    for (int i = 0; i < 3; i++) {
        printf("Linha %d, Coluna %d\n", linha_horizontal, coluna_horizontal + i);
    }

    printf("\nNavio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("Linha %d, Coluna %d\n", linha_vertical + i, coluna_vertical);
    }

    // exibe o tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
