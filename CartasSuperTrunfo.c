#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado_1;
  char estado_2;
  char codigo_1[4];
  char codigo_2[4];
  char cidade_1[30];
  char cidade_2[30];
  unsigned long int populacao_1;
  unsigned long int populacao_2;
  float area_1;
  float area_2;
  float pib_1;
  float pib_2;
  int qtd_ponto_turistico_1;
  int qtd_ponto_turistico_2;
  float densidade_pop1;
  float pib_per_capita1;
  float densidade_pop2;
  float pib_per_capita2;
  long double super_poder_1;
  long double super_poder_2;


  // Área para entrada de dados

  printf("Digite a letra do primeiro estado: ");
  scanf(" %c", &estado_1); // Adicionado o '&'

  printf("Digite a letra do segundo estado: ");
  scanf(" %c", &estado_2); // Adicionado o '&'

  printf("Digite o codigo da primeira carta: ");
  scanf(" %s", codigo_1);

  printf("Digite o codigo da segunda carta: ");
  scanf(" %s", codigo_2);

  printf("Digite a cidade da primeira carta: ");
  scanf(" %[^\n]", cidade_1);

  printf("Digite a cidade da segunda carta: ");
  scanf(" %[^\n]", cidade_2);

  printf("Digite a população da primeira carta: ");
  scanf(" %lu", &populacao_1);

  printf("Digite a população da segunda carta: ");
  scanf(" %lu", &populacao_2);

  printf("Digite a área da primeira carta: ");
  scanf(" %f", &area_1); 

  printf("Digite a área da segunda carta: ");
  scanf(" %f", &area_2); 

  printf("Digite o pib da primeira carta: ");
  scanf(" %f", &pib_1); 

  printf("Digite o pib da segunda carta: ");
  scanf(" %f", &pib_2); 

  printf("Digite a qtd de pt da primeira carta: ");
  scanf(" %d", &qtd_ponto_turistico_1);

  printf("Digite a qtd de pt da segunda carta: ");
  scanf(" %d", &qtd_ponto_turistico_2);


  //Calculos 

  // densidade populacional
  densidade_pop1 = (float)(populacao_1 / area_1);
  densidade_pop2 = (float)(populacao_2 / area_2);

  // Pib per capita

  pib_per_capita1 = (float)(pib_1 / populacao_1);
  pib_per_capita2 = (float)(pib_2 / populacao_2);

  // calculando super poder

  super_poder_1 = (float)(populacao_1 + pib_1 + area_1 + qtd_ponto_turistico_1 + pib_per_capita1 + (1.0/densidade_pop1));
  super_poder_2 = (float)(populacao_2 + pib_2 + area_2 + qtd_ponto_turistico_2 + pib_per_capita2 + (1.0/densidade_pop2));

  // Área para exibição dos dados da cidade

  printf("\n carta 1:\n Estado: %c \n Código: %s \n Cidade: %s \n população: %lu \n Área: %.2f \n PIB: %.2f \n num de Pontos turísticos: %d \n", estado_1, codigo_1, cidade_1, populacao_1, area_1, pib_1, qtd_ponto_turistico_1 );
  printf("Densidade populacional: %.2f \n Pib per capita: %.2f \n", densidade_pop1, pib_per_capita1);

  printf("\n carta 2:\n Estado: %c \n Código: %s \n Cidade: %s \n população: %lu \n Área: %.2f \n PIB: %.2f \n num de Pontos turísticos: %d \n", estado_2, codigo_2, cidade_2, populacao_2, area_2, pib_2, qtd_ponto_turistico_2 );
  printf("Densidade populacional: %.2f \n Pib per capita: %.2f \n", densidade_pop2, pib_per_capita2);

  // Comparações

  int comparacao_populacao = populacao_1 > populacao_2;
  int comparacao_area = area_1 > area_2;
  int comparacao_pib = pib_1 > pib_2;
  int comparacao_pt = qtd_ponto_turistico_1 > qtd_ponto_turistico_2;
  int comparacao_densidade = densidade_pop1 > densidade_pop2;
  int comparacao_ppc = pib_per_capita1 > pib_per_capita2;
  int comparacao_sp = super_poder_1 > super_poder_2;

  printf("\nComparação de Cartas");
  printf("\n Resultado população: %d \n Resultado área: %d \n Resultado pib: %d \n Resultado ponto turistico: %d \n Resultado Densidade pop: %d \n Resultado Pib per capita: %d \n Resultado super poder: %d", comparacao_populacao, comparacao_area, comparacao_pib, comparacao_pt, comparacao_densidade, comparacao_ppc, comparacao_sp);
  
  return 0;
} 
