#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Definição das variáveis Carta1:
  char estado1[4];
  char codigo1[5];
  char cidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  // Definição das variáveis Carta2:
  char estado2[4];
  char codigo2[5];
  char cidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  // Área para Entrada de dados Carta1:

  printf("Carta 1\n");

  printf("Estado: ");
  scanf("%s", estado1);

  printf("Codigo: ");
  scanf("%s", &codigo1);

  printf("Cidade: ");
  scanf("%s", &cidade1);

  printf("Populacao: ");
  scanf("%d",&populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("Pib: ");
  scanf("%f", &pib1);

  printf("Pontos: ");
  scanf("%d", &pontos1);

// Área para Entrada de dados Carta2:
printf("Carta 2\n");

  printf("Estado: ");
  scanf("%s", estado2);

  printf("Codigo: ");
  scanf("%s", &codigo2);

  printf("Cidade: ");
  scanf("%s", &cidade2);

  printf("Populacao: ");
  scanf("%d",&populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("Pib: ");
  scanf("%f", &pib2);

  printf("Pontos: ");
  scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade

return 0;
} 
