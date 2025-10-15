#include <stdio.h>

int main() {
    //titulo do jogo
    printf("### SIMLUADOR DE XADREZ! ### \n");

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
