#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo1[5], codigo2[5]; 
    char cidade1[50], cidade2[50];
    int habitantes1, habitantes2; 
    int pontosTuristicos1, pontosTuristicos2;
    int comparacaoHabitantes;
    int comparacaoPontosTuristicos;
    float area1, area2;
    float pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    float comparacaoArea, comparacaoPib, comparacaoDensidadePopulacional, comparacaoPibPerCapita, comparacaoSuperPoder;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //Solicitação dos dados da carta 1
    printf("Digite o estado da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da primeira carta: ");
    scanf("%s", cidade1);

    printf("Digite a população da primeira carta: ");
    scanf("%d", &habitantes1);

    printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    //SolIcitação dos dados da carta 2
    printf("Digite o estado da segunda carta: ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da segunda carta: ");
    scanf("%s", cidade2);

    printf("Digite a população da segunda carta: ");
    scanf("%d", &habitantes2);

    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    //calculando a densidade populacional, o pib per capita e o super poder
    densidadePopulacional1 = (float) habitantes1/area1;
    densidadePopulacional2 = (float) habitantes2/area2;
    pibPerCapita1 = (float) pib1/habitantes1;
    pibPerCapita2 = (float) pib2/habitantes2;
    superPoder1 = (float) habitantes1+pib1+area1+pontosTuristicos1+pibPerCapita1+(1/densidadePopulacional1);
    superPoder2 = (float) habitantes2+pib2+area2+pontosTuristicos2+pibPerCapita2+(1/densidadePopulacional2);
    
    // Exibição dos Dados das Cartas:
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //Impressão das informações da carta 1
    printf("------------------- CARTA 1 -------------------\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", habitantes1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB por capita: %.2f reais\n", pibPerCapita1);
    printf("------------------------------------------------\n\n");

    //Impressão das informações da carta 2
    printf("------------------- CARTA 2 -------------------\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", habitantes2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB por capita: %.2f reais\n", pibPerCapita2);
    printf("------------------------------------------------\n");

    //Comparando as cartas
    comparacaoHabitantes = habitantes1 > habitantes2;
    comparacaoArea = area1 > area2;
    comparacaoPib = pib1 > pib2;
    comparacaoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    comparacaoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    comparacaoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    comparacaoSuperPoder = superPoder1 > superPoder2;

    //Imprimindo resultados das comparações
    printf("*****Comparação de Cartas*****\n");
    printf("Considere que resultado (1) a carta 1 vence, e resultado (0) a carta 2 vence\n");
    printf("População: %d\n", comparacaoHabitantes);
    printf("Área: %d\n", comparacaoArea);
    printf("PIB: %.2f\n", comparacaoPib);
    printf("Pontos Turísticos: %.2f\n", comparacaoPontosTuristicos);
    printf("Densidade Populacional: %.2f\n", comparacaoDensidadePopulacional);
    printf("PIB Per Capita: %.2f\n", comparacaoPibPerCapita);
    printf("Super Poder: %.2f\n", comparacaoSuperPoder);
    
    return 0;
}
