#include <stdio.h>

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[50];
  char codigo1[30], nome[30], codigo2[30];
  int numero;
  int pontos1, pontos2;
  float area, densidade, super;
  double pib, pibp, populaçao;

  // Área para entrada de dados
  printf("Estado:\n");
  scanf("%s", estado);
  getchar(); // limpar o enter que ficou no buffer

  printf("Código da carta:\n");
  scanf("%s", codigo1);
  getchar(); // limpar o enter que ficou no buffer

  printf("Nome da Cidade:\n");
  scanf("%s", nome);
  getchar(); // limpar o enter que ficou no buffer

  printf("População:\n");
  scanf("%lf", &populaçao);
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
 
  // Não sei o que colocar ;-;
  densidade = populaçao / area;

  pibp = pib / populaçao;

  super = populaçao + area + pib + pibp + numero + (1.0 / densidade);

  printf("\n\n"); // pula duas linhas
  
  // Área para exibição dos dados da cidade
  printf("Estado: %s\n", estado);
  printf("Codigo da carta: %s\n", codigo1);
  printf("Nome da cidade: %s\n", nome);
  printf("População %.0lf\n", populaçao);
  printf("Área em km²: %.0f\n", area);
  printf("Pib: %.0lf\n", pib);
  printf("Número de pontos turísticos: %d\n", numero);
  printf("Densidade Populacional: %.3f\n", densidade);
  printf("Pib Per Capita: %.0lf\n", pibp);
  printf("Super poder: %.0f\n\n\n", super);

  printf("Estado:\n");
  scanf("%s", estado);
  getchar(); // limpar o enter que ficou no buffer

  printf("Código da carta:\n");
  scanf("%s", codigo2);
  getchar(); // limpar o enter que ficou no buffer

  printf("Nome da cidade:\n");
  scanf("%s", nome);
  getchar(); // limpar o enter que ficou no buffer

  printf("População:\n");
  scanf("%lf", &populaçao);
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
  
  // Não sei o que colocar ;-;
  densidade = populaçao / area;

  pibp = pib / populaçao;
  
  super = (populaçao + area + pib + pibp + numero) + 1/densidade;

  printf("\n\n"); // pula duas linhas

  printf("Estado: %s\n", estado);
  printf("Código da carta: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nome);
  printf("População: %.0lf\n", populaçao);
  printf("Área em km²: %.0f\n", area);
  printf("Pib: %.0lf\n", pib);
  printf("Números de pontos turísticos: %d\n", numero);
  printf("Densidade Populacional: %.3f\n", densidade);
  printf("Pib Per Capita: %.0lf\n", pibp);
  printf("Super poder: %.0f\n", super);

  printf("\n\n"); // pular duas linhas

  
  // comparação das cartas
  printf("Comparação das cartas\n");
   if (populaçao > populaçao) {
    printf("Carta %s venceu\n", codigo1);
   } else  {
    printf("carta %s venceu\n", codigo2);
   }
   if (area > area) {
    printf("Carta %s venceu\n", codigo1);
   } else  {
    printf("Carta %s venceu\n", codigo2);
   }
   if (pib > pib) {
    printf("Carta %s venceu\n", codigo1);
   } else {
    printf("Carta %s venceu\n", codigo2);
   }
   if (numero > numero) {
    printf("Carta %s venceu\n", codigo1);
   } else {
    printf("Carta %s venceu\n", codigo2);
   }
   if (densidade > densidade) {
    printf("Carta %s venceu\n", codigo2);
   } else {
    printf("Carta %s venceu\n", codigo1);
   }
   if (pibp > pibp) {
    printf("Carta %s venceu\n", codigo1);
   } else {
    printf("Carta %s venceu\n", codigo2);
   }
   if (super > super) {
    printf("Carta %s venceu\n", codigo1);
   } else {
    printf("Carta %s venceu\n", codigo2);
   }
   printf("\n\n");
   
   if (populaçao > populaçao && area > area && pib > pib && numero > numero && densidade > densidade && pibp > pibp && super > super) {
    printf("A Grande Campeã foi a Carta %s\n", codigo1);
   } else {
    printf("A Grande Campeã foi a Carta %s\n", codigo2);
   }
  


return 0;
  }

