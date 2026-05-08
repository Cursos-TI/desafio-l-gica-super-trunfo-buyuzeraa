#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char Estado01 [18]; 
   char Cidade01 [15];
   char Código01 [3];
   float Área01;
   float PIB01;
   float população01;
   int Pontos_Turísticos01;

   char Estado02 [17];
   char Cidade02 [14];
   char Código02 [4];
   float Área02;
   float PIB02;
   float população02;
   int Pontos_Turísticos02;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Área para entrada de dados da carta 01
  printf ("Jogador 1 insira os dados da sua carta \n");
  printf ("Insira o nome do Estado use _ no lugar de Espaço \n");
  scanf ("%s", Estado01);
  printf ("Insira o nome da Cidade \n");
  scanf ("%s", Cidade01);
  printf ("Insira o Código da Carta \n");
  scanf ("%s", Código01);
  printf ("Insira a área em KM \n");
  scanf ("%f", &Área01);
  printf ("Insira o PIB da cidade \n");
  scanf ("%f", &PIB01);
  printf ("Insira a população da cidade \n");
  scanf ("%f", &população01);
  printf ("Insira a quantidade de Pontos Turísticos \n");
  scanf ("%d", &Pontos_Turísticos01);

  float pibCapita01 = PIB01 / população01;
  float Densidade01 = população01 / Área01;

  

  // Área para entrada de dados da carta 02
  printf ("\n");
  printf ("Jogador 2 insira os dados da sua carta \n");
  printf ("Insira o nome do Estado use _ no lugar de Espaço \n");
  scanf ("%s", Estado02);
  printf ("Insira o nome da Cidade \n");
  scanf ("%s", Cidade02);
  printf ("Insira o Código da Carta \n");
  scanf ("%s", Código02);
  printf ("Insira a área em KM \n");
  scanf ("%f", &Área02);
  printf ("Insira o PIB da cidade \n");
  scanf ("%f", &PIB02);
  printf ("Insira a população da cidade \n");
  scanf ("%f", &população02);
  printf ("Insira a quantidade de Pontos Turísticos \n");
  scanf ("%d", &Pontos_Turísticos02);

  float pibCapita02 = PIB02 / população02;
  float Densidade02 = população02 / Área02;
  long int Superpoder01 = Área01 + PIB01 + Pontos_Turísticos01 + Densidade01 + pibCapita01;
  long int Superpoder02 = Área02 + PIB02 + Pontos_Turísticos02 + Densidade02 + pibCapita02;
  int escolha1, escolha2, pontosC1 = 0, pontosC2 = 0;

        printf("Escolha dois parâmetros para comparar as cartas!\n");
        printf("1 - Área\n");
        printf("2 - População\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - PIB per Capita\n");
        printf("6 - Densidade populacional\n");
        printf("7 - Super Poder\n");
        scanf("%d", &escolha1);

  switch (escolha1){
     case 1:
        printf("Você escolheu Área");
       Área01 > Área02 ? (printf("Carta 1 ganhou\n"), pontosC1++) : (printf("Carta 2 ganhou\n"), pontosC2++);
       break;

   case 2:    
      printf("Você escolheu População\n");
       população01 > população02 ? (printf("Carta 1 ganhou"), pontosC1++) : (printf("Carta 2 ganhou"), pontosC2++);
       break;

    case 3:   
        printf("Você escolheu PIB\n");
      PIB01 > PIB02 ? (printf("Carta 1 ganhou\n"), pontosC1++) : (printf("Carta 2 ganhou\n"), pontosC2++);
       break;

    case 4:
        printf("Você escolheu Pontos Turísticos \n");
    Pontos_Turísticos01 > Pontos_Turísticos02 ? (printf(" Carta 1 ganhou"), pontosC1++) : (printf("Carta 2 ganhou\n"), pontosC2++);
       break;

   case 5:
        printf("Você escolheu PIB Per Capita\n");
   pibCapita01 > pibCapita02 ? (printf("Carta 1 ganhou\n"), pontosC1++) : (printf("Carta 2 ganhou:\n"), pontosC2++);
        break;

   case 6:
        printf("Você escolheu Densidade\n");
   Densidade01 > Densidade02 ? (printf("Carta 1 ganhou\n"), pontosC1++) : (printf("Carta 2 ganhou\n"), pontosC2++);
        break;

   case 7:     
        printf("Você escolheu Super Poder\n");
   Superpoder01 > Superpoder02 ? (printf("Carta 1 Ganhou\n"), pontosC1++) : (printf("Carta 2 Ganhou\n"), pontosC2++);
        break;
  }

  printf("Carta 1 tem %d pontos\n", pontosC1);
  printf("Carta 2 tem %d pontos\n", pontosC2);

  printf("Escolha dois parâmetros para comparar as cartas!\n");
        printf("1 - Área\n");
        printf("2 - População\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - PIB per Capita\n");
        printf("6 - Densidade populacional\n");
        printf("7 - Super Poder\n");
        scanf("%d", &escolha2);


  switch (escolha2){
     case 1:
        printf("Você escolheu Área");
       Área01 > Área02 ? (printf("Carta 1 ganhou\n"), pontosC1++) : (printf("Carta 2 ganhou\n"), pontosC2++);
       break;

   case 2:    
      printf("Você escolheu População\n");
       população01 > população02 ? (printf("Carta 1 ganhou"), pontosC1++) : (printf("Carta 2 ganhou"), pontosC2++);
       break;

    case 3:   
        printf("Você escolheu PIB\n");
      PIB01 > PIB02 ? (printf("Carta 1 ganhou\n"), pontosC1++) : (printf("Carta 2 ganhou\n"), pontosC2++);
       break;

    case 4:
        printf("Você escolheu Pontos Turísticos \n");
    Pontos_Turísticos01 > Pontos_Turísticos02 ? (printf(" Carta 1 ganhou"), pontosC1++) : (printf("Carta 2 ganhou\n"), pontosC2++);
       break;

   case 5:
        printf("Você escolheu PIB Per Capita\n");
   pibCapita01 > pibCapita02 ? (printf("Carta 1 ganhou\n"), pontosC1++) : (printf("Carta 2 ganhou:\n"), pontosC2++);
        break;

   case 6:
        printf("Você escolheu Densidade\n");
   Densidade01 > Densidade02 ? (printf("Carta 1 ganhou\n"), pontosC1++) : (printf("Carta 2 ganhou\n"), pontosC2++);
        break;

   case 7:     
        printf("Você escolheu Super Poder\n");
   Superpoder01 > Superpoder02 ? (printf("Carta 1 Ganhou\n"), pontosC1++) : (printf("Carta 2 Ganhou\n"), pontosC2++);
        break;
  }

  printf("Carta 1 tem %d pontos\n", pontosC1);
  printf("Carta 2 tem %d pontos\n", pontosC2);

  pontosC1 > pontosC2 ? printf("O jogador 1 venceu") : pontosC2 > pontosC1 printf("O jogador 2 venceu") : printf("Empate")
 
    return 0;
}
