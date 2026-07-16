#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigoCarta[10];
  char cidade[10];
  int populacao;
  float areakm;
  float pib;
  int turismo;

  char estado2;
  char codigocarta2[10];
  char cidade2[10];
  int populacao2;
  float areakm2;
  float pib2;
  int turismo2;

  // Área para entrada de dados
  printf("Digite uma letra entre A - H referente ao Estado: ");
  scanf("%c", &estado, "\n");

  printf("Digite um numero entre 01 e 04 referente ao código da carta: ");
  scanf("%s", &codigoCarta, "\n");

  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade, "\n");

  printf("Digite a população: ");
  scanf("%d", &populacao, "\n");

  printf("Digite a area em Km²: ");
  scanf("%f", &areakm, "\n");
  
  printf("Digite o PIB: ");
  scanf("%f", &pib, "\n");

  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &turismo, "\n\n\n");

  float densidadep = populacao / areakm;
  float pibper = pib / populacao;

  printf("Digite uma letra entre A - H referente ao Estado: ");
  scanf(" %c", &estado2, "\n");

  printf("Digite um numero entre 01 e 04 referente ao código da carta: ");
  scanf("%s", codigocarta2, "\n");

  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade2, "\n");

  printf("Digite a população: ");
  scanf("%d", &populacao2, "\n");

  printf("Digite a area em Km²: ");
  scanf("%f", &areakm2, "\n");
  
  printf("Digite o PIB: ");
  scanf("%f", &pib2, "\n");

  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &turismo2, "\n");

   float densidadep2 = populacao2 / areakm2;
   float pibper2 = pib2 / populacao2;
   //Área para exibição dos dados da cidade

  printf("Carta 1:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fKm²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n",
   estado, estado, codigoCarta, cidade, populacao, areakm, pib, turismo, densidadep, pibper);

  printf("Carta 2:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fKm²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n",
   estado2, estado2, codigocarta2, cidade2, populacao2, areakm2, pib2, turismo2, densidadep2, pibper2);

return 0;
}