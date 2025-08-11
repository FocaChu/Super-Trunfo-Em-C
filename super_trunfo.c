#include <stdio.h>
 
int main() {
    
    //váriaveis que armazenam as informações das cartas

    //letra que representa o Estado da cidade
    char estadoCarta1;
    char estadoCarta2;

    //o código da carta
    char codigoCarta1[4];
    char codigoCarta2[4];

    //o nome da cidade
    char nomeCidadeCarta1[30];
    char nomeCidadeCarta2[30];

    //a população da cidade
    unsigned long int populacaoCarta1;
    unsigned long int populacaoCarta2;

    //a área da cidade em km²
    float areaKmqCarta1;
    float areaKmqCarta2;

    //o PIB da cidade
    float pibCarta1;
    float pibCarta2;

    //a quantidade de pontos turísticos da cidade
    int qtdPontosTuristicosCarta1;
    int qtdPontosTuristicosCarta2;

    //densidade populacional(população dividida pela área)
    float densidadePopulacionalCarta1;
    float densidadePopulacionalCarta2;

    //PIB per capita (PIB dividido pela população)
    float pibPerCapitaCarta1;
    float pibPerCapitaCarta2;

    //super poder
    float superPoderCarta1;
    float superPoderCarta2;

    //Limpar o buffer inicial
    int c;

    //Entrada dos dados da carta 1
    printf("\nDigite a letra que representa o Estado da carta 1: \n");
    scanf(" %c", &estadoCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer
    
    printf("Digite o código da carta 1 (somente 3 digitos): \n");
    scanf("%3s", codigoCarta1); 
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %29[^\n]", nomeCidadeCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a população da cidade da carta 1: \n");
    scanf("%d", &populacaoCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a área da cidade da carta 1 (em km²): \n");
    scanf("%f", &areaKmqCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite o PIB da cidade da carta 1: \n");
    scanf("%f", &pibCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a quantidade de pontos turísticos da cidade da carta 1: \n");
    scanf("%d", &qtdPontosTuristicosCarta1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    //verifica se a população é igual a zero e trata o caso
    if(populacaoCarta1 == 0){
        populacaoCarta1 = 1;
    }

    //calcula o restante das informações
    densidadePopulacionalCarta1 = (float) populacaoCarta1 / areaKmqCarta1;
    pibPerCapitaCarta1 = (float) (pibCarta1 * 1000000000.0f) / populacaoCarta1;
    superPoderCarta1 = populacaoCarta1 + areaKmqCarta1 + pibCarta1 + qtdPontosTuristicosCarta1 + pibPerCapitaCarta1 + (1.0f / densidadePopulacionalCarta1);

    //Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidadeCarta1);
    printf("População: %d\n", populacaoCarta1);
    printf("Área: %.2f km²\n", areaKmqCarta1);
    printf("PIB: %.2f\n", pibCarta1);
    printf("Pontos turísticos: %d\n", qtdPontosTuristicosCarta1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacionalCarta1);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaCarta1);

    //Entrada dos dados da carta 2
    printf("\nDigite a letra que representa o Estado da carta 2: \n");
    scanf(" %c", &estadoCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite o código da carta 2 (somente 3 digitos): \n");
    scanf("%3s", codigoCarta2); 
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %29[^\n]", nomeCidadeCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a população da cidade da carta 2: \n");
    scanf("%d", &populacaoCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a área da cidade da carta 2 (em km²): \n");
    scanf("%f", &areaKmqCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite o PIB da cidade da carta 2: \n");
    scanf("%f", &pibCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    printf("Digite a quantidade de pontos turísticos da cidade da carta 2: \n");
    scanf("%d", &qtdPontosTuristicosCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

    //verifica se a população é igual a zero e trata o caso
    if(populacaoCarta2 == 0){
        populacaoCarta2 = 1;
    }

    //calcula o restante das informações
    densidadePopulacionalCarta2 = (float) populacaoCarta2 / areaKmqCarta2;
    pibPerCapitaCarta2 = (float) (pibCarta2 * 1000000000.0f) / populacaoCarta2;
    superPoderCarta2 = populacaoCarta2 + areaKmqCarta2 + pibCarta2 + qtdPontosTuristicosCarta2 + pibPerCapitaCarta2 + (1.0f / densidadePopulacionalCarta2);

    //Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidadeCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Área: %.2f km²\n", areaKmqCarta2);
    printf("PIB: %.2f\n", pibCarta2);
    printf("Pontos turísticos: %d\n", qtdPontosTuristicosCarta2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacionalCarta2);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaCarta2);

    //Placar Final

    //calculo da população
    if(populacaoCarta1 > populacaoCarta2){
        printf("\nCarta 1 vence na categoria População!\n");
    } else if(populacaoCarta1 < populacaoCarta2){
        printf("\nCarta 2 vence na categoria População!\n");
    } else {
        printf("\nEmpate na categoria População!\n");
    };

    //calculo da área
    if(areaKmqCarta1 > areaKmqCarta2){
        printf("Carta 1 vence na categoria Área!\n");
    } else if(areaKmqCarta1 < areaKmqCarta2){
        printf("Carta 2 vence na categoria Área!\n");
    } else {
        printf("Empate na categoria Área!\n");
    };

    //calculo do pib
    if(pibCarta1 > pibCarta2){
        printf("Carta 1 vence na categoria PIB!\n");
    } else if(pibCarta1 < pibCarta2){
        printf("Carta 2 vence na categoria PIB!\n");
    } else {
        printf("Empate na categoria PIB!\n");
    }

    //calculo dos pontos turisticos
    if(qtdPontosTuristicosCarta1 > qtdPontosTuristicosCarta2){
        printf("Carta 1 vence na categoria Pontos Turísticos!\n");
    } else if(qtdPontosTuristicosCarta1 < qtdPontosTuristicosCarta2){
        printf("Carta 2 vence na categoria Pontos Turísticos!\n");
    } else {
        printf("Empate na categoria Pontos Turísticos!\n");
    }

    //calculo densidade populacional
    if(densidadePopulacionalCarta1 < densidadePopulacionalCarta2){
        printf("Carta 2 vence na categoria Densidade Populacional!\n");
    } else if(densidadePopulacionalCarta1 > densidadePopulacionalCarta2){
        printf("Carta 1 vence na categoria Densidade Populacional!\n");
    } else {
        printf("Empate na categoria Densidade Populacional!\n");
    }

    //calculo do pib per capita
    if(pibPerCapitaCarta1 > pibPerCapitaCarta2){
        printf("Carta 1 vence na categoria PIB per Capita!\n");
    } else if(pibPerCapitaCarta1 < pibPerCapitaCarta2){
        printf("Carta 2 vence na categoria PIB per Capita!\n");
    } else {
        printf("Empate na categoria PIB per Capita!\n");
    }

    //calculo do super poder
    if(superPoderCarta1 > superPoderCarta2){
        printf("Carta 1 vence na categoria Super Poder!\n");
    } else if(superPoderCarta1 < superPoderCarta2){
        printf("Carta 2 vence na categoria Super Poder!\n");
    } else {
        printf("Empate na categoria Super Poder!\n");
    };

    return 0;
}