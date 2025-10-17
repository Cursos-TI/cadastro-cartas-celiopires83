#include <stdio.h>

int main() {
    //titulo do jogo
    printf("### SIMLUADOR DE XADREZ! ### \n");

    // nivel aventureiro
    printf("Cavalo: Dois movimentos para baixo e 1 para a direita! \n");
    int i, j = 1;
    for(i = 1; i <= 2; i++) {
        while(j == 1) {
            printf("Baixo \n");
            printf("Baixo \n");
            printf("Direita \n");
            j++;
        }
        i++;
    }

    printf("\n");

    //movimento da torre
    printf("Torre: Movendo cinco casas para a direita! \n");

    for(int torre_direita = 1; torre_direita <=5; torre_direita++ ) {
        printf("Direita: %d! \n", torre_direita);
    }
    printf("\n");


    // movimento da rainha
    printf("Rainha: Movendo oito casas para a Esquerda! \n");

    int rainha = 1;

    while(rainha <= 8) {
        printf("Esquerda: %d! \n", rainha);
        rainha++;
    }
    printf("\n");


    //Movimento do bispo
    //como a movimentacao do bispo é o mesmo para cima e para a direita nao é
    //necessario cria duas variveis pois a mesma pode ser reutilizada.

    printf("Bispo: Movendo cinco casas para cima e cinco casas para a direita! \n");
    int bispo = 1;

    do {
            printf("Cima %d! \nDireita: %d \n", bispo, bispo);
            bispo++;

    } while (bispo <= 5);

    printf("\n");

    return 0;

}
