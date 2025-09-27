#include <stdio.h>

int main() {

    /*
    carta, nome, area e pib sao auto explicativos.
    p_tur 1 e 2 sao para postos turisticos.
    pop 1 e 2 para população.

    */

    int carta1, carta2, p_tur1, p_tur2, pop1, pop2;
    char nome1[50], nome2[50], estado1[3], estado2[3];
    double area1, area2, pib1, pib2;

    //carta 01
    printf("Vamos inserir os valores da carta 1! \n");

    printf("Numero da Carta: ");
    scanf("%d", &carta1 );

    printf("Estado: ");
    scanf("%s", estado1);

    /* para a impressão de nomes compostos podemos usar na variavel de char
    ao invés de %s
    */
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nome1);

    printf("População: ");
    scanf("%d", &pop1);

    printf("Area: ");
    scanf("%lf", &area1);

    printf("PIP: ");
    scanf("%lf", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &p_tur1);
    //fim da carta 1

    //carta 2
    printf("Agora Vamos inserir os valores da carta 2! \n");

    printf("Numero da Carta: ");
    scanf("%d", &carta2 );

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nome2);

    printf("População: ");
    scanf("%d", &pop2);

    printf("Area: ");
    scanf("%lf", &area2);

    printf("PIP: ");
    scanf("%lf", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &p_tur2);
    //fim da carta 2

    double densidade1 = (double)pop1 / area1;
    double densidade2 = (double)pop2 / area2;

    double percapita1 = (double)pib1 / pop1;
    double percapita2 = (double)pib2 / pop2;


    //impressao

    printf("\n\n Primeira Carta! \n");
    printf("\n Carta: %d \n", carta1);
    printf("Estado: %s \n", estado1 );
    //codigo é a junção do numero da carta + o codigo do estado.
    printf("Código %s%d \n", estado1, carta1);
    printf("Nome: %s \n", nome1);
    printf("População: %d \n", pop1);
    printf("Area: %.2lf \n", area1);
    printf("PIB: %.2lf \n", pib1);
    printf("Pontos Turisticos: %d \n\n", p_tur1);

    //fase 2
    printf("Densidade: %.3lf \n", densidade1);
    printf("Pib per capita: %.3lf \n", percapita1);


    printf("\n\n Segunda Carta! \n");
    printf("\n Carta: %d \n", carta2);
    printf("Estado: %s \n", estado2 );
    //codigo é a junção do numero da carta + o codigo do estado.
    printf("Código %s%d \n", estado2, carta2);
    printf("Nome: %s \n", nome2);
    printf("População: %d \n", pop2);
    printf("Area: %.2lf \n", area2);
    printf("PIB: %.2lf \n", pib2);
    printf("Pontos Turisticos: %d \n\n", p_tur2);

        //fase 2
    printf("Densidade: %.3lf \n", densidade2);
    printf("Pib per capita: %.3lf \n", percapita2);

    return 0;
}
