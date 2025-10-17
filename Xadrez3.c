#include <stdio.h>

    void torre(int mov) {
        if (mov > 0) {
            torre(mov - 1);
            printf("Direita. \n");
        }
    }

    void rainha(int mov) {
        if (mov > 0) {
            rainha(mov - 1);
            printf("Esquerda. \n");
        }
    }

    void bispo(int mov) {
        if (mov > 0) {
            bispo(mov - 1);
            printf("Cima. \n");
            printf("Direita. \n");
        }
    }





int main() {
    //titulo do jogo
    printf("### SIMLUADOR DE XADREZ! ### \n\n");

    //movimento da torre
    int num1 = 5;

    printf("Torre: Movendo cinco casas para a direita! \n");

    torre(num1);

    printf("\n");

    // movimento da rainha
    int num2 = 8;

    printf("Rainha: Movendo oito casas para a Esquerda! \n");

    rainha(num2);

    printf("\n");

    //Movimento do bispo
    //como a movimentacao do bispo é o mesmo para cima e para a direita nao é
    //necessario cria duas variveis pois a mesma pode ser reutilizada.

    int num3 = 5;

    printf("Bispo: Movendo cinco casas para cima e cinco casas para a direita! \n");

    bispo(num3);

    printf("\n");


    printf("Cavalo: Dois movimentos para baixo e um para a direita! \n");


    for (int i = 1, j = 1; i <= 3 ; i++, j++) {
        if (i <= 2) {
        printf("Cima! \n");
        } else if (j =1) {
        printf("Direita! \n");
        } else {
        printf("Erro! \n");
        }
    }


    printf("\n");


    return 0;

}
