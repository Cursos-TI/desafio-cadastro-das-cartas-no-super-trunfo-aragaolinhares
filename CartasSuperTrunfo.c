#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[10];
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1, superPoder1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2, superPoder2;

    // Leitura dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: \n");
    scanf("%lu", &populacao1);

    printf("Área (em km²):\n ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1;

    // Leitura dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: \n ");
    scanf(" %c", &estado2);

    printf("Código: \n ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: \n ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): \n ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais):  \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1e9) + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1e9) + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Exibição dos resultados
    printf("\n--- Resultado Final ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
