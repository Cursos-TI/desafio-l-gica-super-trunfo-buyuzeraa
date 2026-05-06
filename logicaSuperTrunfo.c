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

    if (Área01 > Área02){
        printf("Carta 1 ganhou: %f\n", Área01);
}   else if(Área02 > Área01){
        printf("Carta 2 ganhou: %f\n", Área02);
}   else{
    printf("Empate");

}    if(população01 > população02){
        printf("Carta 1 ganhou: %f\n", população01);
}   else if(população02 > população01){
        printf("Carta 2 ganhou: %f\n", população02);
}   else{
    printf("Empaten\n");

}    if(PIB01 > PIB02){
        printf("Carta 1 ganhou: %f\n", PIB01);
}   else if(PIB02 > PIB01){
        printf("Carta 2 ganhou: %f\n", PIB02);
}   else{
    printf("Empate\n");  

}    if (Pontos_Turísticos01 > Pontos_Turísticos02){
        printf("Carta 1 ganhou: %d\n", Pontos_Turísticos01);
}   else if(Pontos_Turísticos02 > Pontos_Turísticos01){
        printf("Carta 2 ganhou: %d\n", Pontos_Turísticos02);
}   else{
    printf("Empate"); 

}    if (pibCapita01 > pibCapita02){
        printf("Carta 1 ganhou: %f\n", pibCapita01);
}   else if(pibCapita02 > pibCapita01){
        printf("Carta 2 ganhou: %f\n", pibCapita02);
}   else{
    printf("Empate\n");
}
    if (Densidade01 > Densidade02){
        printf("Carta 1 ganhou: %f\n", Densidade01);

}   else if(Densidade02 > Densidade01){
        printf("Carta 2 ganhou: %f\n", Densidade02);
}   else{
        printf("Empate");
    
}    if(Superpoder01 > Superpoder02){
        printf("Carta 1 Ganhou:%f\n", Superpoder01);
     
}    else if(Superpoder01 < Superpoder02){       
       printf("Carta 2 Ganhou: %f\n");
}    else{
       printf("Empate!");

} 
    return 0;
}
