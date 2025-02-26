#include <stdio.h>

// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definindo as variáveis para as duas cartas
    char estado1[3] = "SP", estado2[3] = "RJ";
    char codigo1[4] = "A01", codigo2[4] = "B02";
    char nomeCidade1[50] = "São Paulo", nomeCidade2[50] = "Rio de Janeiro";
    unsigned long int populacao1 = 12300000, populacao2 = 6000000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int pontosTuristicos1 = 50, pontosTuristicos2 = 60;
    float densidadePopulacional1 = populacao1 / area1, densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1, pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Definindo as variáveis para a escolha do atributo
    int escolha1, escolha2;

    // Menu interativo para escolher os dois atributos
    printf("Escolha o primeiro atributo para comparação entre as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolha1);

    // Garantir que o jogador escolha um atributo válido
    if (escolha1 < 1 || escolha1 > 5) {
        printf("Opção inválida! Exiting...\n");
        return 0;
    }

    // Mostrar o menu novamente, mas sem a escolha anterior
    printf("\nEscolha o segundo atributo para comparação (não pode ser o mesmo que o primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolha2);

    // Garantir que o jogador escolha um atributo válido e diferente do primeiro
    if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        printf("Opção inválida ou atributo repetido! Exiting...\n");
        return 0;
    }

    // Lógica para comparar os dois atributos
    float resultadoCarta1 = 0, resultadoCarta2 = 0;

    // Primeiro atributo
    printf("\nAtributo escolhido: ");
    switch(escolha1) {
        case 1: // População
            printf("População\n");
            printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);
            resultadoCarta1 = populacao1;
            resultadoCarta2 = populacao2;
            break;
        case 2: // Área
            printf("Área\n");
            printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);
            resultadoCarta1 = area1;
            resultadoCarta2 = area2;
            break;
        case 3: // PIB
            printf("PIB\n");
            printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeCidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeCidade2, pib2);
            resultadoCarta1 = pib1;
            resultadoCarta2 = pib2;
            break;
        case 4: // Pontos Turísticos
            printf("Pontos Turísticos\n");
            printf("Carta 1 - %s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            resultadoCarta1 = pontosTuristicos1;
            resultadoCarta2 = pontosTuristicos2;
            break;
        case 5: // Densidade Demográfica
            printf("Densidade Demográfica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);
            resultadoCarta1 = densidadePopulacional1;
            resultadoCarta2 = densidadePopulacional2;
            break;
    }

    // Segundo atributo
    printf("\nAtributo escolhido: ");
    switch(escolha2) {
        case 1: // População
            printf("População\n");
            printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);
            resultadoCarta1 += populacao1;
            resultadoCarta2 += populacao2;
            break;
        case 2: // Área
            printf("Área\n");
            printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);
            resultadoCarta1 += area1;
            resultadoCarta2 += area2;
            break;
        case 3: // PIB
            printf("PIB\n");
            printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeCidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeCidade2, pib2);
            resultadoCarta1 += pib1;
            resultadoCarta2 += pib2;
            break;
        case 4: // Pontos Turísticos
            printf("Pontos Turísticos\n");
            printf("Carta 1 - %s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            resultadoCarta1 += pontosTuristicos1;
            resultadoCarta2 += pontosTuristicos2;
            break;
        case 5: // Densidade Demográfica
            printf("Densidade Demográfica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);
            resultadoCarta1 += densidadePopulacional1;
            resultadoCarta2 += densidadePopulacional2;
            break;
    }

    // Exibindo o resultado final
    printf("\nSoma dos atributos:\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, resultadoCarta1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, resultadoCarta2);

    // Comparando a soma dos atributos com operador ternário
    printf("Resultado: ");
    printf("%s\n", resultadoCarta1 > resultadoCarta2 ? "Carta 1 venceu!" : (resultadoCarta2 > resultadoCarta1 ? "Carta 2 venceu!" : "Empate!"));

    return 0;
}







