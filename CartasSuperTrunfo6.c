#include <stdio.h>

int main() {

    /*
    carta, nome, area e pib sao auto explicativos.
    p_tur 1 e 2 sao para postos turisticos.
    pop 1 e 2 para popula��o.
    */

    unsigned int carta1, carta2, p_tur1, p_tur2;
    unsigned long int pop1, pop2;
    char nome1[50], nome2[50], estado1[3], estado2[3];
    double area1, area2, pib1, pib2;

    //carta 01
    printf("Vamos inserir os valores da carta 1! \n");

    printf("Numero da Carta: ");
    scanf("%d", &carta1 );

    printf("Estado: ");
    scanf("%s", estado1);

    /* para a impress�o de nomes compostos podemos usar na variavel de char
    ao inv�s de %s
    */
    printf("Nome da cidade: ");
    scanf(" %s", nome1);

    printf("Populacao: ");
    scanf("%lu", &pop1);

    printf("Area: ");
    scanf("%lf", &area1);

    printf("PIP: ");
    scanf("%lf", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%ud", &p_tur1);
    //fim da carta 1

    //carta 2
    printf("Agora Vamos inserir os valores da carta 2! \n");

    printf("Numero da Carta: ");
    scanf("%ud", &carta2 );

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nome2);

    printf("Populacao: ");
    scanf("%lu", &pop2);

    printf("Area: ");
    scanf("%lf", &area2);

    printf("PIP: ");
    scanf("%lf", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%ud", &p_tur2);
    //fim da carta 2

    double densidade1 = (double)pop1 / area1;
    double densidade2 = (double)pop2 / area2;

    double percapita1 = (double)pib1 / pop1;
    double percapita2 = (double)pib2 / pop2;

    double densidade_inverso1 = 1 / densidade1;
    double densidade_inverso2 = 1 / densidade2;

    double superpoder1 = (double) pop1 + area1 + pib1 + p_tur1 + percapita1;
    double superpoder2 = (double) pop2 + area2 + pib2 + p_tur2 + percapita2;



    //impressao

    printf("\n\n Primeira Carta! \n");
    printf("\n Carta: %d \n", carta1);
    printf("Estado: %s \n", estado1 );
    //codigo � a jun��o do numero da carta + o codigo do estado.
    printf("C�digo %s%d \n", estado1, carta1);
    printf("Nome: %s \n", nome1);
    printf("Popula��o: %d \n", pop1);
    printf("Area: %.2lf \n", area1);
    printf("PIB: %.2lf \n", pib1);
    printf("Pontos Turisticos: %d \n\n", p_tur1);

    //fase 2
    printf("Densidade: %.3lf \n", densidade1);
    printf("Pib per capita: %.3lf \n", percapita1);

    //fase 3
    printf("Inverso da Densidade Populacional: %.4lf \n", densidade_inverso1);
    printf("Super Poder: %.3lf \n", superpoder1);



    printf("\n\n Segunda Carta! \n");
    printf("\n Carta: %d \n", carta2);
    printf("Estado: %s \n", estado2 );
    //codigo � a jun��o do numero da carta + o codigo do estado.
    printf("C�digo %s%d \n", estado2, carta2);
    printf("Nome: %s \n", nome2);
    printf("Popula��o: %d \n", pop2);
    printf("Area: %.2lf \n", area2);
    printf("PIB: %.2lf \n", pib2);
    printf("Pontos Turisticos: %d \n\n", p_tur2);

    //fase 2
    printf("Densidade: %.3lf \n", densidade2);
    printf("Pib per capita: %.3lf \n", percapita2);

    //fase 3
    printf("Inverso da Densidade Populacional: %.4lf \n", densidade_inverso2);
    printf("Super Poder: %.3lf \n\n\n", superpoder2);

    int escolha1, escolha2, escolha3, resultado1, resultado2, resultado3;

    printf("Escolha a categoria para disputa: \n");
    printf("1 - Pontos Turisticos: \n");
    printf("2 - Area: \n");
    printf("3 - PIB: \n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        resultado1 = p_tur1 > p_tur2 ? 1 : 0;
        printf("Sua escolha foi: %d \n", escolha1);
        break;
    case 2:
        resultado1 = area1 > area2 ? 1 : 0;
        printf("Sua escolha foi: %d \n", escolha1);
        break;
    case 3:
        resultado1 = pib1 > pib2 ? 1 : 0;
        printf("Sua escolha foi: %d \n", escolha1);
        break;

    default:
        printf("Categoria Invalida! \n");
        break;
    }

    printf("Escolha a segunda categoria para disputa: \n");
    printf("1 - Pontos Turisticos: \n");
    printf("2 - Area: \n");
    printf("3 - PIB: \n");
    scanf("%d", &escolha2);

    if (escolha2 == escolha1) {
        printf("Categoria ja escolhida! \n");
    } else {
        switch (escolha2)
        {
        case 1:
            resultado2 = p_tur1 > p_tur2 ? 1 : 0;
            printf("Sua escolha foi: %d \n", escolha2);
            break;
        case 2:
            resultado2 = area1 > area2 ? 1 : 0;
            printf("Sua escolha foi: %d \n", escolha2);
            break;
        case 3:
            resultado2 = pib1 > pib2 ? 1 : 0;
            printf("Sua escolha foi: %d \n", escolha2);
            break;

        default:
            printf("Categoria Invalida! \n");
            break;
        }
    }

    printf("Escolha a terceira categoria para disputa: \n");
    printf("1 - Pontos Turisticos: \n");
    printf("2 - Area: \n");
    printf("3 - PIB: \n");
    scanf("%d", &escolha3);

    if (escolha3 == escolha1 || escolha3 == escolha2) {
        printf("Categoria ja escolhida! \n");
    } else {
        switch (escolha3)
        {
        case 1:
            resultado3 = p_tur1 > p_tur2 ? 1 : 0;
            printf("Sua escolha foi: %d \n", escolha3);
            break;
        case 2:
            resultado3 = area1 > area2 ? 1 : 0;
            printf("Sua escolha foi: %d \n", escolha3);
            break;
        case 3:
            resultado3 = pib1 > pib2 ? 1 : 0;
            printf("Sua escolha foi: %d \n", escolha3);
            break;

        default:
            printf("Categoria Invalida! \n");
            break;
        }
    }


    if (resultado1 == 1) {
        printf("Carta 1 venceu a primeira categoria! \n");
    } else if (resultado1 == 0) {
        printf("Carta 2 venceu a primeira categoria! \n");
    } else {
        printf("Empate na primeira categoria! \n");
    }

    if (resultado2 == 1) {
        printf("Carta 1 venceu a segunda categoria! \n");
    } else if (resultado2 == 0) {
        printf("Carta 2 venceu a segunda categoria! \n");
    } else {
        printf("Empate na segunda categoria! \n");
    }

    if (resultado3 == 1) {
        printf("Carta 1 venceu a terceira categoria! \n");
    } else if (resultado3 == 0) {
        printf("Carta 2 venceu a terceira categoria! \n");
    } else {
        printf("Empate na terceira categoria! \n");
    }

    printf("%d, %d, %d \n", resultado1, resultado2, resultado3);


    if ((resultado1 + resultado2 + resultado3) > 1) {
        printf("Carta 1 venceu a disputa! \n");
    } else if ((resultado1 + resultado2 + resultado3) < 1) {
        printf("Carta 2 venceu a disputa! \n");
    } else {
        printf("Empate na disputa! \n");
    }


    return 0;
}
