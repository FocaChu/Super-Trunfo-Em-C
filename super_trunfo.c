#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int c;

    // -Variáveis que armazenam as informações das cartas

    // Carta 1
    char estadoCarta1;
    char codigoCarta1[4];
    char nomeCidadeCarta1[30];
    unsigned long int populacaoCarta1;
    double areaKmqCarta1;
    double pibCarta1;
    int qtdPontosTuristicosCarta1;
    double densidadePopulacionalCarta1;
    double pibPerCapitaCarta1;
    double superPoderCarta1;

    // Carta 2
    char estadoCarta2;
    char codigoCarta2[4];
    char nomeCidadeCarta2[30];
    unsigned long int populacaoCarta2;
    double areaKmqCarta2;
    double pibCarta2;
    int qtdPontosTuristicosCarta2;
    double densidadePopulacionalCarta2;
    double pibPerCapitaCarta2;
    double superPoderCarta2;

    // Outras variáveis
    int opcao1, opcao2;
    int resultado1, resultado2;
    int continuar = 1;
    char nomeAtributo1[30];
    char nomeAtributo2[30];

    // - ENTRADA E CALCULO DOS DADOS DA CARTA 1 
    printf("--- Entrada dos dados da Carta 1 ---\n");

    printf("Digite a letra do Estado: ");
    scanf(" %c", &estadoCarta1);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o codigo (3 digitos): ");
    scanf("%3s", codigoCarta1);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nomeCidadeCarta1);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite a populacao: ");
    scanf("%lu", &populacaoCarta1);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite a area (em km²): ");
    scanf("%lf", &areaKmqCarta1);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o PIB: ");
    scanf("%lf", &pibCarta1);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &qtdPontosTuristicosCarta1);
    while ((c = getchar()) != '\n' && c != EOF);

    //demais calculos
    densidadePopulacionalCarta1 = (areaKmqCarta1 != 0.0) ? ((double)populacaoCarta1 / areaKmqCarta1) : 0.0;
    pibPerCapitaCarta1 = (populacaoCarta1 != 0) ? ((pibCarta1 * 1000000000.0) / (double)populacaoCarta1) : 0.0;
    double inversoDensidade1 = (densidadePopulacionalCarta1 != 0.0) ? (1.0 / densidadePopulacionalCarta1) : 0.0;
    superPoderCarta1 = populacaoCarta1 + areaKmqCarta1 + (pibCarta1 * 1000000000.0) + qtdPontosTuristicosCarta1 + pibPerCapitaCarta1 + inversoDensidade1;

    // - ENTRADA E CALCULO DOS DADOS DA CARTA 2 
    printf("\n--- Entrada dos dados da Carta 2 ---\n");

    printf("Digite a letra do Estado: ");
    scanf(" %c", &estadoCarta2);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o codigo (3 digitos): ");
    scanf("%3s", codigoCarta2);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nomeCidadeCarta2);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite a populacao: ");
    scanf("%lu", &populacaoCarta2);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite a area (em km²): ");
    scanf("%lf", &areaKmqCarta2);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o PIB: ");
    scanf("%lf", &pibCarta2);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &qtdPontosTuristicosCarta2);
    while ((c = getchar()) != '\n' && c != EOF);

    //demais calculos
    densidadePopulacionalCarta2 = (areaKmqCarta2 != 0.0) ? ((double)populacaoCarta2 / areaKmqCarta2) : 0.0;
    pibPerCapitaCarta2 = (populacaoCarta2 != 0) ? ((pibCarta2 * 1000000000.0) / (double)populacaoCarta2) : 0.0;
    double inversoDensidade2 = (densidadePopulacionalCarta2 != 0.0) ? (1.0 / densidadePopulacionalCarta2) : 0.0;
    superPoderCarta2 = populacaoCarta2 + areaKmqCarta2 + (pibCarta2 * 1000000000.0) + qtdPontosTuristicosCarta2 + pibPerCapitaCarta2 + inversoDensidade2;

    // - EXIBIÇÃO DAS CARTAS 

    // Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidadeCarta1);
    printf("Populacao: %lu\n", populacaoCarta1);
    printf("Area: %.2lf km²\n", areaKmqCarta1);
    printf("PIB: %.2lf\n", pibCarta1);
    printf("Pontos turisticos: %d\n", qtdPontosTuristicosCarta1);
    printf("Densidade populacional: %.2lf hab/km²\n", densidadePopulacionalCarta1);
    printf("PIB per capita: %.2lf reais\n", pibPerCapitaCarta1);
    printf("Super Poder: %.2lf\n", superPoderCarta1);

    // Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidadeCarta2);
    printf("Populacao: %lu\n", populacaoCarta2);
    printf("Area: %.2lf km²\n", areaKmqCarta2);
    printf("PIB: %.2lf\n", pibCarta2);
    printf("Pontos turisticos: %d\n", qtdPontosTuristicosCarta2);
    printf("Densidade populacional: %.2lf hab/km²\n", densidadePopulacionalCarta2);
    printf("PIB per capita: %.2lf reais\n", pibPerCapitaCarta2);
    printf("Super Poder: %.2lf\n", superPoderCarta2);

    // - MENU DE COMPARAÇÃO
    do {
        printf("\n--- Menu de Comparacao ---\n");
        printf("Escolha os dois atributos para comparar (1 a 7):\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Populacional (menor valor vence)\n");
        printf("6. PIB Per Capita\n");
        printf("7. Super Poder\n");
        printf("0. Sair\n");
        
        printf("Escolha o primeiro atributo: ");
        scanf("%d", &opcao1);
        while ((c = getchar()) != '\n' && c != EOF);

        if (opcao1 == 0) {
            break;
        }

        printf("Escolha o segundo atributo: ");
        scanf("%d", &opcao2);
        while ((c = getchar()) != '\n' && c != EOF);

        if (opcao2 == 0) {
            break;
        }

        if (opcao1 < 1 || opcao1 > 7 || opcao2 < 1 || opcao2 > 7) {
            printf("Opcoes invalidas. Tente novamente.\n");
            continue;
        }
        
        // - LOGICA DE COMPARAÇÃO DO PRIMEIRO ATRIBUTO
        switch (opcao1) {
            case 1:
                resultado1 = (populacaoCarta1 > populacaoCarta2) ? 1 : (populacaoCarta1 < populacaoCarta2) ? -1 : 0;
                strcpy(nomeAtributo1, "Populacao");
                break;
            case 2:
                resultado1 = (areaKmqCarta1 > areaKmqCarta2) ? 1 : (areaKmqCarta1 < areaKmqCarta2) ? -1 : 0;
                strcpy(nomeAtributo1, "Area");
                break;
            case 3:
                resultado1 = (pibCarta1 > pibCarta2) ? 1 : (pibCarta1 < pibCarta2) ? -1 : 0;
                strcpy(nomeAtributo1, "PIB");
                break;
            case 4:
                resultado1 = (qtdPontosTuristicosCarta1 > qtdPontosTuristicosCarta2) ? 1 : (qtdPontosTuristicosCarta1 < qtdPontosTuristicosCarta2) ? -1 : 0;
                strcpy(nomeAtributo1, "Pontos Turisticos");
                break;
            case 5: // Menor valor vence
                resultado1 = (densidadePopulacionalCarta1 < densidadePopulacionalCarta2) ? 1 : (densidadePopulacionalCarta1 > densidadePopulacionalCarta2) ? -1 : 0;
                strcpy(nomeAtributo1, "Densidade Populacional (menor valor vence)");
                break;
            case 6:
                resultado1 = (pibPerCapitaCarta1 > pibPerCapitaCarta2) ? 1 : (pibPerCapitaCarta1 < pibPerCapitaCarta2) ? -1 : 0;
                strcpy(nomeAtributo1, "PIB Per Capita");
                break;
            case 7:
                resultado1 = (superPoderCarta1 > superPoderCarta2) ? 1 : (superPoderCarta1 < superPoderCarta2) ? -1 : 0;
                strcpy(nomeAtributo1, "Super Poder");
                break;
        }

        // - LOGICA DE COMPARAÇÃO DO SEGUNDO ATRIBUTO 
        switch (opcao2) {
            case 1:
                resultado2 = (populacaoCarta1 > populacaoCarta2) ? 1 : (populacaoCarta1 < populacaoCarta2) ? -1 : 0;
                strcpy(nomeAtributo2, "Populacao");
                break;
            case 2:
                resultado2 = (areaKmqCarta1 > areaKmqCarta2) ? 1 : (areaKmqCarta1 < areaKmqCarta2) ? -1 : 0;
                strcpy(nomeAtributo2, "Area");
                break;
            case 3:
                resultado2 = (pibCarta1 > pibCarta2) ? 1 : (pibCarta1 < pibCarta2) ? -1 : 0;
                strcpy(nomeAtributo2, "PIB");
                break;
            case 4:
                resultado2 = (qtdPontosTuristicosCarta1 > qtdPontosTuristicosCarta2) ? 1 : (qtdPontosTuristicosCarta1 < qtdPontosTuristicosCarta2) ? -1 : 0;
                strcpy(nomeAtributo2, "Pontos Turisticos");
                break;
            case 5: // Menor valor vence
                resultado2 = (densidadePopulacionalCarta1 < densidadePopulacionalCarta2) ? 1 : (densidadePopulacionalCarta1 > densidadePopulacionalCarta2) ? -1 : 0;
                strcpy(nomeAtributo2, "Densidade Populacional (menor valor vence)");
                break;
            case 6:
                resultado2 = (pibPerCapitaCarta1 > pibPerCapitaCarta2) ? 1 : (pibPerCapitaCarta1 < pibPerCapitaCarta2) ? -1 : 0;
                strcpy(nomeAtributo2, "PIB Per Capita");
                break;
            case 7:
                resultado2 = (superPoderCarta1 > superPoderCarta2) ? 1 : (superPoderCarta1 < superPoderCarta2) ? -1 : 0;
                strcpy(nomeAtributo2, "Super Poder");
                break;
        }

        // - EXIBIÇÃO DO RESULTADO 
        printf("\n--- Resultado da Comparacao ---\n");
        printf("Atributo 1: %s\n", nomeAtributo1);
        printf("Atributo 2: %s\n", nomeAtributo2);

        if (resultado1 != 0) { // Se o primeiro atributo não for empate
            printf("A carta vencedora e: %s com o atributo %s!\n", (resultado1 > 0) ? nomeCidadeCarta1 : nomeCidadeCarta2, nomeAtributo1);
        } else if (resultado2 != 0) { // Se o primeiro empatar e o segundo não
            printf("Primeiro atributo empatou. A carta vencedora e: %s com o atributo %s!\n", (resultado2 > 0) ? nomeCidadeCarta1 : nomeCidadeCarta2, nomeAtributo2);
        } else { // Se os dois atributos empatarem
            printf("As cartas empataram em ambos os atributos!\n");
        }

        printf("\nDeseja fazer outra comparacao? (1 para sim, 0 para nao): ");
        scanf("%d", &continuar);
        while ((c = getchar()) != '\n' && c != EOF);
        
    } while (continuar == 1);

    printf("\nObrigado por jogar!\n");

    return 0;
}