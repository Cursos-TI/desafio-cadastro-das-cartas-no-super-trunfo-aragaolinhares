#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[10];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2;

    // Leitura dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade1); // Lê até o fim da linha (permite espaços)

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área (em km²):\n ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB estava em bilhões

    // Leitura dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: \n ");
    scanf(" %c", &estado2);

    printf("Código: \n ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: \n ");
    scanf("%d", &populacao2);

    printf("Área (em km²): \n ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais):  \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos resultados
    printf("\n--- Resultado Final ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
