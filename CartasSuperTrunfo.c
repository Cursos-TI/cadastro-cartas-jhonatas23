#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[50];
  char codigo[30], nome[30];
  int numero;
  float area, populaçao; 
  double pib;

  // Área para entrada de dados
  printf("Estado:\n");
  scanf("%s", estado);
  getchar(); // limpar o enter que ficou no buffer

  printf("Código da carta:\n");
  scanf("%s", codigo);
  getchar(); // limpar o enter que ficou no buffer

  printf("Nome da Cidade:\n");
  scanf("%s", nome);
  getchar(); // limpar o enter que ficou no buffer

  printf("População:\n");
  scanf("%f", &populaçao);
  getchar(); // limpar o enter que ficou no buffer 

  printf("Área em km²:\n");
  scanf("%f", &area);
  getchar(); // limpar o enter que ficou no buffer

  printf("Pib:\n");
  scanf("%lf", &pib);
  getchar(); // limpar o enter que ficou no biffer

  printf("Números de pontos turístios:\n");
  scanf("%d", &numero);
  getchar(); // limpar o enter que ficou no buffer

  printf("\n\n"); // pula duas linhas
  
  // Área para exibição dos dados da cidade
  printf("Estado: %s\n", estado);
  printf("Codigo da carta: %s\n", codigo);
  printf("Nome da cidade: %s\n", nome);
  printf("População %.3f\n", populaçao);
  printf("Área em km²: %.3f\n", area);
  printf("Pib: %lf\n", pib);
  printf("Número de pontos turísticos: %d\n\n\n", numero);

  printf("Estado:\n");
  scanf("%s", estado);
  getchar(); // limpar o enter que ficou no buffer

  printf("Código da carta:\n");
  scanf("%s", codigo);
  getchar(); // limpar o enter que ficou no buffer

  printf("Nome da cidade:\n");
  scanf("%s", nome);
  getchar(); // limpar o enter do buffer

  printf("População:\n");
  scanf("%f", &populaçao);
  getchar(); // limpar o enter que ficou no buffer

  printf("Área em km²\n");
  scanf("%f", &area);
  getchar(); // limpar o enter que ficou no buffer

  printf("Pib:\n");
  scanf("%lf", &pib);
  getchar(); // limpar o enter que ficou no buffer

  printf("Números de pontos turísticos:\n");
  scanf("%d", &numero);
  getchar(); // limpar o enter que ficou no buffer

  printf("\n\n"); // pula duas linhas

  printf("Estado: %s\n", estado);
  printf("Código da carta: %s\n", codigo);
  printf("Nome da cidade: %s\n", nome);
  printf("População: %.3f\n", populaçao);
  printf("Área em km²: %.3f\n", area);
  printf("Pib: %lf\n", pib);
  printf("Números de pontos tirísticos: %d\n", numero);


return 0;
} 
