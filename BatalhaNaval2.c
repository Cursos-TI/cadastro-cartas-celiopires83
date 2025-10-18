#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {

    //tabuleiro 10 x 10
    char tabuleiro[LINHAS][COLUNAS];

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    int navios[12][2] = {
        {2,2}, {2,3}, {2,4},
        {6,8}, {7,8}, {8,8},
        {6,4}, {7,5}, {8,6},
        {0,9}, {1,8}, {2,7}
        };

    // Número fixo de navios (12 posições)
    int total_navios = 12;

    // Coloca os navios no tabuleiro
    for(int i = 0; i < total_navios; i++) {
        int linha = navios[i][0];
        int coluna = navios[i][1];
        tabuleiro[linha][coluna] = '3';
    }


    // mostrar o tabuleiro
    printf("### .BATALHA NAVAL. ###\n\n");
    //colocar lentras nas colunas
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    //espaco para as letras ficarem em cima das colunas corretamente
    printf("   ");
    for(int j = 0; j < COLUNAS; j++) {
        printf("%c ", letras[j]);
    }

    printf("\n");

    for(int i = 0; i < LINHAS; i++) {
        printf("%d  ", i);
        for(int j = 0; j < COLUNAS; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
