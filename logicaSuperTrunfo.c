#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1, comparacao;
    float dp1 = (float) populacao1 / area1;
    float ppc1 = (float) (pib1 * 1000000000) / populacao1;


    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    float dp2 = (float) populacao2 / area2;
    float ppc2 = (float) (pib2 * 1000000000) / populacao2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Dados carta 1:
    
    printf("### DIGITE OS DADOS DA CARTA 1 ###: \n");

    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código (Ex: A01): \n");
    scanf(" %s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade1);

    printf("Digite a população: \n");
    scanf(" %i", &populacao1);

    printf("Digite a área da cidade (em KM²): \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %i", &pontosturisticos1);


        // Dados da carta 2:  
    
    printf("### DIGITE OS DADOS DA CARTA 2 ###: \n");

    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código (ex: A01): \n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade2);

    printf("Digite a população: \n");
    scanf(" %i", &populacao2);

    printf("Digite a área da cidade (em KM²): \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %i", &pontosturisticos2);

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

     // Exibir carta 1:

    printf("### Carta 1: ### \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %i \n", populacao1);
    printf("Àrea: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %i \n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", dp1);
    printf("PIB per Capita: %.2f reais \n", ppc1);

        //Exibir carta 2:

    printf("### Carta 2: ###\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %i \n", populacao2);
    printf("Àrea: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %i \n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", dp2);
    printf("PIB per Capita: %.2f reais \n", ppc2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
  
     printf("### QUAL ATRIBUTO COMPARAR? ### \n");

    printf("1. Pupulação\n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turiticos \n");
    printf("5. Densidade populacional \n");
    scanf("%i", &comparacao);
        
    switch (comparacao)
    {
    case 1:
         if (populacao1 > populacao2){
        printf("Carta 1 - %s (%c), População: %i habitantes \n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c), População: %i habitantes \n", cidade2, estado2, populacao2);
        printf("Carta 1 (%s) venceu! \n", cidade1);
    } else if (populacao1 < populacao2){
        printf("Carta 1 - %s (%c), População: %i habitantes \n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c), População: %i habitantes \n", cidade2, estado2, populacao2);
        printf("Carta 2 (%s) venceu! \n", cidade2);
    } else{
        printf("Carta 1 - %s (%c), População: %i habitantes \n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c), População: %i habitantes \n", cidade2, estado2, populacao2);
        printf("Empate! \n");
    }
        break;
    case 2:
     if (area1 > area2){
        printf("Carta 1 - %s (%c), Área: %.2f Km² \n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%c), Área: %.2f Km² \n", cidade2, estado2, area2);
        printf("Carta 1 (%s) venceu! \n", cidade1);
    } else if (area1 < area2){
        printf("Carta 1 - %s (%c), Área: %.2f Km² \n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%c), Área: %.2f Km² \n", cidade2, estado2, area2);
        printf("Carta 2 (%s) venceu! \n", cidade2);
    } else{
        printf("Carta 1 - %s (%c), Área: %.2f Km² \n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%c), Área: %.2f Km² \n", cidade2, estado2, area2);
        printf("Empate! \n");
    }
        break;
    case 3:
    if (pib1 > pib2){
        printf("Carta 1 - %s (%c), PIB: R$ %.2f bilhões reais \n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c), PIB: R$ %.2f bilhões reais \n", cidade2, estado2, pib2);
        printf("Carta 1 (%s) venceu! \n", cidade1);
    } else if (pib1 < pib2){
        printf("Carta 1 - %s (%c), PIB: R$ %.2f bilhões reais \n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c), PIB: R$ %.2f bilhões reais \n", cidade2, estado2, pib2);
        printf("Carta 2 (%s) venceu! \n", cidade2);
    } else{
        printf("Carta 1 - %s (%c), PIB: R$ %.2f bilhões reais \n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%c), PIB: R$ %.2f bilhões reais \n", cidade2, estado2, pib2);
        printf("Empate! \n");
    }
        break;
    case 4:    
    if (pontosturisticos1 > pontosturisticos2){
        printf("Carta 1 - %s (%c), Número de pontos turísticos: %i \n", cidade1, estado1, pontosturisticos1);
        printf("Carta 2 - %s (%c), Número de pontos turísticos: %i \n", cidade2, estado2, pontosturisticos2);
        printf("Carta 1 (%s) venceu! \n", cidade1);
    } else if (pontosturisticos1 < pontosturisticos2){
        printf("Carta 1 - %s (%c), Número de pontos turísticos: %i \n", cidade1, estado1, pontosturisticos1);
        printf("Carta 2 - %s (%c), Número de pontos turísticos: %i \n", cidade2, estado2, pontosturisticos2);
        printf("Carta 2 (%s) venceu! \n", cidade2);
    } else{
        printf("Carta 1 - %s (%c), Número de pontos turísticos: %i \n", cidade1, estado1, pontosturisticos1);
        printf("Carta 2 - %s (%c), Número de pontos turísticos: %i \n", cidade2, estado2, pontosturisticos2);
        printf("Empate! \n");
    }
        break;
    case 5:
    if (dp1 < dp2){
        printf("Carta 1 - %s (%c), Densidade Populacional: %.2f hab/km² \n", cidade1, estado1, dp1);
        printf("Carta 2 - %s (%c), Densidade Populacional: %.2f hab/km² \n", cidade2, estado2, dp2);
        printf("Carta 1 (%s) venceu! \n", cidade1);
    } else if (dp1 > dp2){
        printf("Carta 1 - %s (%c), Densidade Populacional: %.2f hab/km² \n", cidade1, estado1, dp1);
        printf("Carta 2 - %s (%c), Densidade Populacional: %.2f hab/km² \n", cidade2, estado2, dp2);
        printf("Carta 2 (%s) venceu! \n", cidade2);
    } else{
        printf("Carta 1 - %s (%c), Densidade Populacional: %.2f hab/km² \n", cidade1, estado1, dp1);
        printf("Carta 2 - %s (%c), Densidade Populacional: %.2f hab/km² \n", cidade2, estado2, dp2);
        printf("Empate! \n");
    }
     break;
    default:
        printf("Entrada Invalida \n");
        break;
    }
}


