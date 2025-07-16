#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite a letra do Estado (A a H):\n");
    scanf(" %c", &estado1);
    getchar(); // limpa o '\n' deixado pelo scanf anterior

    printf("Digite o Código da Carta (ex: A01):\n");
    scanf("%s", codigo1);
    getchar(); // limpa o '\n' deixado pelo scanf

    printf("Digite o Nome da Cidade (pode conter espaços):\n");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); // permite nome com espaços

    printf("Digite a População:\n");
    scanf("%d", &populacao1);
    getchar();

    printf("Digite a Área (em km²):\n");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);
    getchar();

    // Entrada Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite a letra do Estado (A a H):\n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o Código da Carta (ex: B02):\n");
    scanf("%s", codigo2);
    getchar();

    printf("Digite o Nome da Cidade (pode conter espaços):\n");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("Digite a População:\n");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a Área (em km²):\n");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);
    getchar();

    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nomeCidade1); // não precisa \n, fgets já inclui
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
