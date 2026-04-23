#include <stdio.h>

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[50], estado2[50];
  char codigo1[30], codigo2[30], nome1[30], nome2[30];
  int numero1, numero2, opcao, opcao1, opcao2;
  int pontos1, pontos2;
  int vitoria1 = 0, vitoria2 = 0;
  float area1, area2, densidade1, densidade2, super1, super2;
  double pib1, pib2, pibp1, pibp2, populaçao1, populaçao2;

  // Menu de inicialização do jogo

  printf("\n\n*****BEM VINDO AO JOGO DE CARTAS SUPER TRUNFO!!******\n\n");

  printf("1 - Criar cartas\n");
  printf("2 - Regras\n");
  printf("3 - Sair\n");
  printf("Escolha uma opção:\n");
  scanf("%d", &opcao);
  getchar();

  // Área para criação das cartas
  switch (opcao)
  {
  case 1:
    printf("Estado:\n");
    fgets(estado1, 50, stdin);

    printf("Código da carta:\n");
    scanf("%s", codigo1);
    getchar(); // limpar o enter que ficou no buffer

    printf("Nome da Cidade:\n");
    fgets(nome1, 30, stdin);

    printf("População:\n");
    scanf("%lf", &populaçao1);
    getchar(); // limpar o enter que ficou no buffer

    printf("Área em km²:\n");
    scanf("%f", &area1);
    getchar(); // limpar o enter que ficou no buffer

    printf("Pib:\n");
    scanf("%lf", &pib1);
    getchar(); // limpar o enter que ficou no biffer

    printf("Números de pontos turístios:\n");
    scanf("%d", &numero1);
    getchar(); // limpar o enter que ficou no buffer

    densidade1 = populaçao1 / area1;

    pibp1 = pib1 / populaçao1;

    super1 = populaçao1 + area1 + pib1 + pibp1 + numero1 + (1.0 / densidade1);

    printf("\n\n"); // pula duas linhas

    printf("Estado:\n");
    fgets(estado2, 50, stdin);

    printf("Código da carta:\n");
    scanf("%s", codigo2);
    getchar(); // limpar o enter que ficou no buffer

    printf("Nome da cidade:\n");
    fgets(nome2, 30, stdin);

    printf("População:\n");
    scanf("%lf", &populaçao2);
    getchar(); // limpar o enter que ficou no buffer

    printf("Área em km²\n");
    scanf("%f", &area2);
    getchar(); // limpar o enter que ficou no buffer

    printf("Pib:\n");
    scanf("%lf", &pib2);
    getchar(); // limpar o enter que ficou no buffer

    printf("Números de pontos turísticos:\n");
    scanf("%d", &numero2);
    getchar(); // limpar o enter que ficou no buffer

    densidade2 = populaçao2 / area2;

    pibp2 = pib2 / populaçao2;

    super2 = populaçao2 + area2 + pib2 + pibp2 + numero2 + (1.0 / densidade2);

    printf("\n\n"); // pula duas linhas

    // Exibição das cartas

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População %.0lf\n", populaçao1);
    printf("Área em km²: %.0f\n", area1);
    printf("Pib: %.0lf\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero1);
    printf("Densidade Populacional: %.3f\n", densidade1);
    printf("Pib Per Capita: %.lf\n", pibp1);
    printf("Super poder: %.0f\n\n\n", super1);

    printf("\n\n"); // pular duas linhas

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %.0lf\n", populaçao2);
    printf("Área em km²: %.0f\n", area2);
    printf("Pib: %.0lf\n", pib2);
    printf("Números de pontos turísticos: %d\n", numero2);
    printf("Densidade Populacional: %.3f\n", densidade2);
    printf("Pib Per Capita: %.0lf\n", pibp2);
    printf("Super poder: %.0f\n", super2);

    printf("\n\n"); // pular duas linhas

    // comparação das cartas
    printf("\n\n****Comparação das cartas****\n\n");

    printf("Nessa parte você irá escolher dois atributos para comparar as cartas, o jogador que tiver o maior valor nesse atributo vence a rodada!!\n\n");

    printf("Escolha um atributo para a comparação das cartas.\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Pib\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Pib Per Capita\n");
    printf("7 - Super poder\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao1);

    printf("\n\n"); // pular duas linhas

    printf("Escolha um atributo para a comparação das cartas.\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Pib\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Pib Per Capita\n");
    printf("7 - Super poder\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
      printf("ERRO!! Você não pode escolher o mesmo atributo para comparação!!\n");
      return 1;
    }
    

  switch (opcao1)
  {
  case 1:
    if (populaçao1 > populaçao2)
        vitoria1++;
    else if (populaçao2 > populaçao1)
        vitoria2++;
      break;
  case 2:
    if (area1 > area2)
        vitoria1++;
    else if (area2 > area1)
        vitoria2++;
      break;
  case 3:
    if (pib1 > pib2)
        vitoria1++;
    else if (pib2 > pib1)
        vitoria2++;
    break;

  case 4:
    if (numero1 > numero2)
        vitoria1++;
    else if (numero2 > numero1)
        vitoria2++;
    break;
  case 5:
    if (densidade1 < densidade2)
        vitoria1++;
    else if (densidade2 < densidade1)    
        vitoria2++;
    break;
  case 6:
    if (pibp1 > pibp2)
        vitoria1++;
    else if (pibp2 > pibp1)
        vitoria2++;
    break;
  case 7:
    if (super1 > super2)
        vitoria1++;
    else if (super2 > super1)
        vitoria2++;
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }

  switch (opcao2)
  {  case 1:
    if (populaçao1 > populaçao2)
        vitoria1++;
    else if (populaçao2 > populaçao1)
        vitoria2++;
        break; 
    case 2:
    if (area1 > area2)
        vitoria1++;
    else if (area2 > area1)
        vitoria2++;
        break;
    break;
    case 3:
    if (pib1 > pib2)        vitoria1++;
    else if (pib2 > pib1)        vitoria2++;
      break;
    break;
    case 4:
    if (numero1 > numero2)        vitoria1++;
    else if (numero2 > numero1)        vitoria2++;
    break;
    case 5:
    if (densidade1 < densidade2)        vitoria1++;
    else if (densidade2 < densidade1)        vitoria2++;
    break;
    case 6:
    if (pibp1 > pibp2)        vitoria1++;
    else if (pibp2 > pibp1)        vitoria2++;
    break;
    case 7:
    if (super1 > super2)        vitoria1++;
    else if (super2 > super1)        vitoria2++;
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }

  if (vitoria1 > vitoria2)
  {
    printf("Jogador 1 venceu a rodada!!\n");
  }
  else if (vitoria2 > vitoria1)
  {
    printf("Jogador 2 venceu a rodada!!\n");
  }
  else
  {
    printf("Empate!!\n");
  }
  break;
  
  case 2:
    printf("\n\n*****REGRAS DO JOGO*****\n\n");
    printf("1. Cada jogador recebe um conjunto de cartas.\n");
    printf("2. Os jogadores escolhem dois atributos para comparar.\n");
    printf("3. O jogador com o atributo de maior valor vence a rodada, menos a densidade populacional.\n");
    printf("4. O jogador que vencer três rodadas primeiro ganha o jogo.\n\n");
    break;
  case 3:
    printf("Saindo do jogo...\n");
    return 0;
    break;
  default:
    printf("Opção inválida!\n");
    return 1;
    break;
  }

  return 0;
}
