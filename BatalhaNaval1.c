#include <stdio.h>

int main() {

    //tabuleiro 10 x 10
    char tabuleiro[10][10];

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    tabuleiro[2][2]= '3';
    tabuleiro[2][3]= '3';
    tabuleiro[2][4]= '3';

    tabuleiro[6][8]= '5';
    tabuleiro[7][8]= '5';
    tabuleiro[8][8]= '5';

    // mostrar o tabuleiro
    printf("### .BATALHA NAVAL. ###\n\n");
    //colocar lentras nas colunas
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    //espaco para as letras ficarem em cima das colunas corretamente
    printf("   ");
    for(int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++) {
        printf("%d  ", i);
        for(int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
