#include <stdio.h>
#include <stdlib.h>

int main() {

  int c;

  // Variáveis que armazenam as informações das cartas

  // letra que representa o Estado da cidade
  char estadoCarta1;
  char estadoCarta2;

  // o código da carta
  char codigoCarta1[4];
  char codigoCarta2[4];

  // o nome da cidade
  char nomeCidadeCarta1[30];
  char nomeCidadeCarta2[30];

  // a população da cidade
  unsigned long int populacaoCarta1;
  unsigned long int populacaoCarta2;

  // a área da cidade em km²
  double areaKmqCarta1;
  double areaKmqCarta2;

  // o PIB da cidade
  double pibCarta1;
  double pibCarta2;

  // a quantidade de pontos turísticos da cidade
  int qtdPontosTuristicosCarta1;
  int qtdPontosTuristicosCarta2;

  // densidade populacional (população dividida pela área)
  double densidadePopulacionalCarta1;
  double densidadePopulacionalCarta2;

  // PIB per capita (PIB dividido pela população)
  double pibPerCapitaCarta1;
  double pibPerCapitaCarta2;

  // super poder
  double superPoderCarta1;
  double superPoderCarta2;

  // --- Entrada dos dados da carta 1 ---
  printf("Digite a letra que representa o Estado da carta 1:\n");
  scanf(" %c", &estadoCarta1);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite o código da carta 1 (somente 3 digitos):\n");
  scanf("%3s", codigoCarta1);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite o nome da cidade da carta 1:\n");
  scanf(" %29[^\n]", nomeCidadeCarta1);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite a população da cidade da carta 1:\n");
  scanf("%lu", &populacaoCarta1);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite a área da cidade da carta 1 (em km²):\n");
  scanf("%lf", &areaKmqCarta1);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite o PIB da cidade da carta 1:\n");
  scanf("%lf", &pibCarta1);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite a quantidade de pontos turísticos da cidade da carta 1:\n");
  scanf("%d", &qtdPontosTuristicosCarta1);
  while ((c = getchar()) != '\n' && c != EOF);

  // Densidade populacional
  if (areaKmqCarta1 != 0.0) {
    densidadePopulacionalCarta1 = (double)populacaoCarta1 / areaKmqCarta1;
  } else {
    densidadePopulacionalCarta1 = 0.0;
  }
  
  // PIB per capita
  if (populacaoCarta1 != 0) {
    pibPerCapitaCarta1 = (pibCarta1 * 1000000000.0) / (double)populacaoCarta1;
  } else {
    pibPerCapitaCarta1 = 0.0;
  }

  // Super Poder
  double inversoDensidadeCarta1_seguro = 0.0;
  if (densidadePopulacionalCarta1 != 0.0) {
    inversoDensidadeCarta1_seguro = 1.0 / densidadePopulacionalCarta1;
  }
  superPoderCarta1 = (double)populacaoCarta1 +
                      areaKmqCarta1 +
                      (pibCarta1 * 1000000000.0) +
                      (double)qtdPontosTuristicosCarta1 +
                      pibPerCapitaCarta1 +
                      inversoDensidadeCarta1_seguro;

  // --- Exibição dos dados da carta 1 ---
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estadoCarta1);
  printf("Código: %s\n", codigoCarta1);
  printf("Nome da cidade: %s\n", nomeCidadeCarta1);
  printf("População: %lu\n", populacaoCarta1);
  printf("Área: %.2lf km²\n", areaKmqCarta1);
  printf("PIB: %.2lf\n", pibCarta1);
  printf("Pontos turísticos: %d\n", qtdPontosTuristicosCarta1);
  printf("Densidade populacional: %.2lf hab/km²\n", densidadePopulacionalCarta1);
  printf("PIB per capita: %.2lf reais\n", pibPerCapitaCarta1);
  printf("Super Poder: %.2lf\n", superPoderCarta1);

  // --- Entrada dos dados da carta 2 ---
  printf("\nDigite a letra que representa o Estado da carta 2:\n");
  scanf(" %c", &estadoCarta2);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite o código da carta 2 (somente 3 digitos):\n");
  scanf("%3s", codigoCarta2);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite o nome da cidade da carta 2:\n");
  scanf(" %29[^\n]", nomeCidadeCarta2);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite a população da cidade da carta 2:\n");
  scanf("%lu", &populacaoCarta2);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite a área da cidade da carta 2 (em km²):\n");
  scanf("%lf", &areaKmqCarta2);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite o PIB da cidade da carta 2:\n");
  scanf("%lf", &pibCarta2);
  while ((c = getchar()) != '\n' && c != EOF);

  printf("Digite a quantidade de pontos turísticos da cidade da carta 2:\n");
  scanf("%d", &qtdPontosTuristicosCarta2);
  while ((c = getchar()) != '\n' && c != EOF);

  // Densidade populacional
  if (areaKmqCarta2 != 0.0) {
    densidadePopulacionalCarta2 = (double)populacaoCarta2 / areaKmqCarta2;
  } else {
    densidadePopulacionalCarta2 = 0.0;
  }
  
  // PIB per capita
  if (populacaoCarta2 != 0) {
    pibPerCapitaCarta2 = (pibCarta2 * 1000000000.0) / (double)populacaoCarta2;
  } else {
    pibPerCapitaCarta2 = 0.0;
  }
  
  // Super Poder
  double inversoDensidadeCarta2_seguro = 0.0;

  if (densidadePopulacionalCarta2 != 0.0) {
    inversoDensidadeCarta2_seguro = 1.0 / densidadePopulacionalCarta2;
  }
  superPoderCarta2 = (double)populacaoCarta2 +
                      areaKmqCarta2 +
                      (pibCarta2 * 1000000000.0) +
                      (double)qtdPontosTuristicosCarta2 +
                      pibPerCapitaCarta2 +
                      inversoDensidadeCarta2_seguro;

  // --- Exibição dos dados da carta 2 ---
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estadoCarta2);
  printf("Código: %s\n", codigoCarta2);
  printf("Nome da cidade: %s\n", nomeCidadeCarta2);
  printf("População: %lu\n", populacaoCarta2);
  printf("Área: %.2lf km²\n", areaKmqCarta2);
  printf("PIB: %.2lf\n", pibCarta2);
  printf("Pontos turísticos: %d\n", qtdPontosTuristicosCarta2);
  printf("Densidade populacional: %.2lf hab/km²\n", densidadePopulacionalCarta2);
  printf("PIB per capita: %.2lf reais\n", pibPerCapitaCarta2);
  printf("Super Poder: %.2lf\n", superPoderCarta2);
  
  // --- Placar Final ---
  printf("\n");

  if (populacaoCarta1 > populacaoCarta2) {
    printf("Carta 1 vence na categoria População!\n");
  } else if (populacaoCarta1 < populacaoCarta2) {
    printf("Carta 2 vence na categoria População!\n");
  } else {
    printf("Empate na categoria População!\n");
  }

  if (areaKmqCarta1 > areaKmqCarta2) {
    printf("Carta 1 vence na categoria Área!\n");
  } else if (areaKmqCarta1 < areaKmqCarta2) {
    printf("Carta 2 vence na categoria Área!\n");
  } else {
    printf("Empate na categoria Área!\n");
  }

  if (pibCarta1 > pibCarta2) {
    printf("Carta 1 vence na categoria PIB!\n");
  } else if (pibCarta1 < pibCarta2) {
    printf("Carta 2 vence na categoria PIB!\n");
  } else {
    printf("Empate na categoria PIB!\n");
  }

  if (qtdPontosTuristicosCarta1 > qtdPontosTuristicosCarta2) {
    printf("Carta 1 vence na categoria Pontos Turísticos!\n");
  } else if (qtdPontosTuristicosCarta1 < qtdPontosTuristicosCarta2) {
    printf("Carta 2 vence na categoria Pontos Turísticos!\n");
  } else {
    printf("Empate na categoria Pontos Turísticos!\n");
  }

  if (densidadePopulacionalCarta1 > densidadePopulacionalCarta2) {
    printf("Carta 1 vence na categoria Densidade Populacional! (1)\n");
  } else if (densidadePopulacionalCarta1 < densidadePopulacionalCarta2) {
    printf("Carta 2 vence na categoria Densidade Populacional! (0)\n");
  } else {
    printf("Empate na categoria Densidade Populacional! (0)\n");
  }

  if (pibPerCapitaCarta1 > pibPerCapitaCarta2) {
    printf("Carta 1 vence na categoria PIB per Capita! (1)\n");
  } else if (pibPerCapitaCarta1 < pibPerCapitaCarta2) {
    printf("Carta 2 vence na categoria PIB per Capita! (0)\n");
  } else {
    printf("Empate na categoria PIB per Capita! (0)\n");
  }

  if (superPoderCarta1 > superPoderCarta2) {
    printf("Carta 1 vence na categoria Super Poder! (1)\n");
  } else if (superPoderCarta1 < superPoderCarta2) {
    printf("Carta 2 vence na categoria Super Poder! (0)\n");
  } else {
    printf("Empate na categoria Super Poder! (0)\n");
  }

  return 0;
}