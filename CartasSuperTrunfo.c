#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


// Declaração das variáveis da carta 1
    int populacao1; // População da cidade 1
    float area1;   // Área da cidade 1
    float pib1;   // PIB da cidade 1
    int pontosTuristicos1; // Número de pontos turísticos da cidade 1
    char continuar =  'S'; // interação. 
  
    // Declaração das variáveis da carta 2
    int populacao2; // População da cidade 2
    float area2;    // Área da cidade 2
    float pib2;     // PIB da cidade 2
    int pontosTuristicos2; // Número de pontos turísticos da cidade 2

    // Mensagem de boas-vindas ao jogador 
    printf("Bem-vindo ao Super Trunfo: Tema 'Cidades'!\n");
    printf("\nPronto para entrar nessa aventura? (S/n):\n  ");
    scanf(" %c", &continuar); 
   
   
    // ------------------ Cadastro da carta 1 ------------------
    printf("\n--- Cadastro da Carta 1 ---\n");

    // armazena a população
    printf("Digite a população: ");
    scanf("%d", &populacao1);

    // armazena a área
    printf("Digite a área (em km²): ");
    scanf("%f", &area1); 

    // armazena o PIB
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1); 

    // armazena o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1); 

    // ------------------ Cadastro da carta 2 ------------------
    printf("\n--- Cadastro da Carta 2 ---\n");

    //armazena a população
    printf("Digite a população: ");
    scanf("%d", &populacao2);

    //armazena a área
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    // armazena o PIB
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    //armazena o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ------------------ Exibição dos dados da carta 1 ------------------
    printf("\n===== CARTA 1 =====\n");
    printf("População: %d\n", populacao1); // Exibe população
    printf("Área: %.2f km²\n", area1);    // Exibe área com 2 casas decimais
    printf("PIB: %.2f bilhões\n", pib1);  // Exibe PIB com 2 casas decimais
    printf("Pontos turísticos: %d\n", pontosTuristicos1); // Exibe pontos turísticos

    // ------------------ Exibição dos dados da carta 2 ------------------
    printf("\n===== CARTA 2 =====\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    printf("Novo comit\n");


}

