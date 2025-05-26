#include <stdio.h>

int main(void) {

    // Declaração das variáveis da carta 1
    char estado[3], codigo_da_carta[4], nome_da_cidade[30];
    unsigned long int populacao;
    float area, pib, pib_per_capita, densidade_populacional, super_poder;

    int numero_de_pontos_turisticos;

    // Declaração das variáveis da carta 2
    char estado2[3], codigo_da_carta2[4], nome_da_cidade2[30];
    unsigned long int populacao2;
    float area2, pib2, pib_per_capita2, densidade_populacional2, super_poder2;

    int numero_de_pontos_turisticos2;

    printf("### SUPER TRUNFO ###\n\n");

    // Entrada da carta 1
    printf("### CARTA 1 ###\n\n");
    printf("estado: ");
    scanf("%s", estado);
    printf("codigo da carta: ");
    scanf("%s", codigo_da_carta);
    printf("nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade);
    printf("populacao: ");
    scanf("%lu", &populacao);
    printf("area(km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("numero de pontos turisticos: ");
    scanf("%i", &numero_de_pontos_turisticos);

    // Entrada da carta 2
    printf("\n### CARTA 2 ###\n\n");
    printf("estado: ");
    scanf("%s", estado2);
    printf("codigo da carta: ");
    scanf("%s", codigo_da_carta2);
    printf("nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);
    printf("populacao: ");
    scanf("%lu", &populacao2);
    printf("area(km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("numero de pontos turisticos: ");
    scanf("%i", &numero_de_pontos_turisticos2);

    // Cálculos
    pib_per_capita = pib / populacao;
    densidade_populacional = populacao / area;
    super_poder = populacao + area + pib + numero_de_pontos_turisticos + pib_per_capita + (1 / densidade_populacional);

    pib_per_capita2 = pib2 / populacao2;
    densidade_populacional2 = populacao2 / area2;
    super_poder2 = populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Exibição das cartas
    printf("\n### CARTAS REGISTRADAS ###\n\n");

    printf("### Carta 1 ###\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %i\n", numero_de_pontos_turisticos);
    printf("PIB per capita: %.2f\n", pib_per_capita);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("SUPER PODER: %.2f\n", super_poder);

    printf("\n### Carta 2 ###\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %i\n", numero_de_pontos_turisticos2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("SUPER PODER: %.2f\n", super_poder2);

    // Comparações
    printf("\n### COMPARAÇÃO DE CARTAS ###\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numero_de_pontos_turisticos > numero_de_pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder > super_poder2);

    return 0;
}
