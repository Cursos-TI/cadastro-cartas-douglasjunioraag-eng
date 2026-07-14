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
  // Área para entrada de dados
  printf("Digite uma letra entre A - H referente ao Estado: \n");
  scanf("%c", &estado);

  printf("Digite um numero entre 01 e 04 referente ao código da carta: \n");
  scanf("%s", &codigoCarta);

  printf("Digite o nome da cidade \n");
  scanf("%s", &cidade);

  printf("Digite a população: \n");
  scanf("%d", &populacao);

  printf("Digite a area em Km²: \n");
  scanf("%f", &areakm);
  
  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d", &turismo);
   // Área para exibição dos dados da cidade

   printf("Carta 1:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %f\nPib: %d\nTurismo: %d\n",
     estado, estado,codigoCarta, cidade, populacao, pib, turismo);
return 0;
}