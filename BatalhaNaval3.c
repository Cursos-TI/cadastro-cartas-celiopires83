#include <stdio.h>
#include <stdlib.h>

#define LINHAS 10
#define COLUNAS 10

void aplicarCone(char tabuleiro[LINHAS][COLUNAS], char tabuleiro_temp[LINHAS][COLUNAS], int linha, int coluna) {
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            tabuleiro_temp[i][j] = tabuleiro[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = -i; j <= i; j++) {
            int nova_linha = linha + i;
            int nova_coluna = coluna + j;
            if(nova_linha >= 0 && nova_linha < LINHAS && nova_coluna >= 0 && nova_coluna < COLUNAS) {
                tabuleiro_temp[nova_linha][nova_coluna] = '5';
            }
        }
    }
}

void aplicarCruz(char tabuleiro[LINHAS][COLUNAS], char tabuleiro_temp[LINHAS][COLUNAS], int linha, int coluna) {
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            tabuleiro_temp[i][j] = tabuleiro[i][j];
        }
    }

    for(int i = -2; i <= 2; i++) {
        if(linha + i >= 0 && linha + i < LINHAS) {
            tabuleiro_temp[linha + i][coluna] = '5';
        }
        if(coluna + i >= 0 && coluna + i < COLUNAS) {
            tabuleiro_temp[linha][coluna + i] = '5';
        }
    }
}

void aplicarOctaedro(char tabuleiro[LINHAS][COLUNAS], char tabuleiro_temp[LINHAS][COLUNAS], int linha, int coluna) {
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            tabuleiro_temp[i][j] = tabuleiro[i][j];
        }
    }

    for(int i = -2; i <= 2; i++) {
        for(int j = -2; j <= 2; j++) {
            if(abs(i) + abs(j) <= 2) {
                int nova_linha = linha + i;
                int nova_coluna = coluna + j;
                if(nova_linha >= 0 && nova_linha < LINHAS && nova_coluna >= 0 && nova_coluna < COLUNAS) {
                    tabuleiro_temp[nova_linha][nova_coluna] = '5';
                }
            }
        }
    }
}

void mostrarTabuleiro(char tabuleiro[LINHAS][COLUNAS]) {
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};

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
}

int main() {
    char tabuleiro[LINHAS][COLUNAS];
    char tabuleiro_temp[LINHAS][COLUNAS];

    // inicia o tabuleiro
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    // Colocar navios
    int navios[12][2] = {
        {2,2}, {2,3}, {2,4},
        {6,8}, {7,8}, {8,8},
        {6,4}, {7,5}, {8,6},
        {0,9}, {1,8}, {2,7}
    };

    int total_navios = 12;
    for(int i = 0; i < total_navios; i++) {
        int linha = navios[i][0];
        int coluna = navios[i][1];
        tabuleiro[linha][coluna] = '3';
    }

    // Mostrar tabuleiro inicial
    printf("### .BATALHA NAVAL. ###\n\n");
    printf("Tabuleiro Inicial:\n");
    mostrarTabuleiro(tabuleiro);

    // Mostrar cada habilidade separadamente
    printf("\n--- HABILIDADE CONE ---\n");
    aplicarCone(tabuleiro, tabuleiro_temp, 2, 5);
    mostrarTabuleiro(tabuleiro_temp);

    printf("\n--- HABILIDADE CRUZ ---\n");
    aplicarCruz(tabuleiro, tabuleiro_temp, 6, 3);
    mostrarTabuleiro(tabuleiro_temp);

    printf("\n--- HABILIDADE OCTAEDRO ---\n");
    aplicarOctaedro(tabuleiro, tabuleiro_temp, 4, 7);
    mostrarTabuleiro(tabuleiro_temp);

    return 0;
}
