#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("\nSuper Trunfo - Países  \nTema 1 - Cadastro das carta\n");// exibe o titulo do "programa"
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // Variaveis da Carta 1
      char estado01, codigo01[4], nomecidade01[20];
      int populacao01, pturisticos01;
      float area01, pib01;

    // Variaveis da Carta 2
      char estado02, codigo02[4], nomecidade02[20];
      int populacao02, pturisticos02;
      float area02, pib02;  

  // Área para entrada de dados

    // Cadastro da Carta 1
      printf("\nCadastro da Carta 01 \n");
        printf("Qual o Estado? (insira de A-H)\n");
        scanf("%c", &estado01);
        printf("Qual o Codigo da Carta (ex: A01)\n");
        scanf("%s", &codigo01);
        printf("Qual o nome da cidade? \n");
        scanf(" %s", &nomecidade01);
        printf("Qual a população da cidade?\n");
        scanf("%d", &populacao01);
        printf("Quantos pontos turisticos?\n");
        scanf("%d", &pturisticos01);
        printf("Qual a área da Cidade?\n");
        scanf("%f", &area01);
        printf("Qual o PIB da Cidade?\n");
        scanf("%f", &pib01);
        printf("\n Carta 01 Cadastrada!\n");

    // Cadastro da Carta 2
      printf("\nCadastro da Carta 02 \n");
        printf("Qual o Estado? (insira de A-H)\n");
        scanf(" %c", &estado02);
        printf("Qual o Codigo da Carta (ex: A01)\n");
        scanf("%s", &codigo02);
        printf("Qual o nome da cidade? \n");
        scanf(" %s", &nomecidade02);
        printf("Qual a população da cidade?\n");
        scanf("%d", &populacao02);
        printf("Quantos pontos turisticos?\n");
        scanf("%d", &pturisticos02);
        printf("Qual a área da Cidade?\n");
        scanf("%f", &area02);
        printf("Qual o PIB da Cidade?\n");
        scanf("%f", &pib02);
        printf("\n Carta 02 Cadastrada!\n");

  // Área para exibição dos dados da cidade
    // Exibindo informações da Carta 01
        printf("\n>> Carta 01 <<\n");
        printf("Estado: %c\n", estado01);
        printf("Código: %s\n", codigo01);
        printf("Nome: %s\n", nomecidade01);
        printf("População: %d habitantes\n",populacao01);
        printf("Quantidade de Pontos Turisticos: %d\n", pturisticos01);
        printf("Área: %.2f Km² \n", area01);
        printf("PIB: %.2f Bilhões de Reais\n", pib01);
    // Exibindo informações da Carta 02
        printf("\n>> Carta 02 <<\n");
        printf("Estado: %c\n", estado02);
        printf("Código: %s\n", codigo02);
        printf("Nome: %s\n", nomecidade02);
        printf("População: %d habitantes\n",populacao02);
        printf("Quantidade de Pontos Turisticos: %d\n", pturisticos02);
        printf("Área: %.2f Km² \n", area02);
        printf("PIB: %.2f Bilhões de Reais\n", pib02);

printf("\n >> fim do cadastro << \n");
        
return 0;
} 