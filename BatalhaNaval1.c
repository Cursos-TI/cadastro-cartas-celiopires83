#include <stdio.h>

int main() {

    //vetor do tabuleiro
    char tabuleiro[10][10];
   //preenchendo o tabuleiro com 0
    for (int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    // NAVIO 1 HORIZONTAL
    tabuleiro[3][1] = '3';
    tabuleiro[3][2] = '3';
    tabuleiro[3][3] = '3';

    //NAVIO 2 VERTICAL
    tabuleiro[6][7] = '3';
    tabuleiro[7][7] = '3';
    tabuleiro[8][7] = '3';

    //letras para as colunas
    char letra[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", letra[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        //print com os numeros das colunas
        printf("%d  ", i);
        for (int j = 0; j < 10; j++) {
            //Imprimindo o tabuleiro
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");

    }

    return 0;
}

