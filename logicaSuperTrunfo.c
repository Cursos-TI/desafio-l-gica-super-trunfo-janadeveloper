#include <stdio.h>

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










/*
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

// Estrutura que representa uma carta de cidade

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char codigoA[20], codigoB[20];
    char cidadeA[50], cidadeB[50];
    char estadoA[50], estadoB[50];
    int populacaoA, populacaoB;
    float areaA, areaB, pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;
    
    // Cadastro das Cartas:
    // Solicitando dados da cidade 1
    printf("Digite o código da cidade 1: ");
    scanf("%s", codigoA);
    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]", cidadeA);
    printf("Digite o estado da cidade 1: ");
    scanf(" %[^\n]", estadoA);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacaoA);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &areaA);
    printf("Digite o PIB da cidade 1 (em milhões): ");
    scanf("%f", &pibA);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosTuristicosA);
    
    // Solicitando dados da cidade 2
    printf("\nDigite o código da cidade 2: ");
    scanf("%s", codigoB);
    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]", cidadeB);
    printf("Digite o estado da cidade 2: ");
    scanf(" %[^\n]", estadoB);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacaoB);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &areaB);
    printf("Digite o PIB da cidade 2 (em milhões): ");
    scanf("%f", &pibB);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosTuristicosB);
    
    // Comparação de Cartas:
    int escolha;
    printf("\nEscolha o atributo para a comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: // Comparar população
            if (populacaoA > populacaoB) {
                printf("\nA cidade %s tem maior população.\n", cidadeA);
            } else if (populacaoA < populacaoB) {
                printf("\nA cidade %s tem maior população.\n", cidadeB);
            } else {
                printf("\nAs duas cidades têm a mesma população.\n");
            }
            break;

        case 2: // Comparar área
            if (areaA > areaB) {
                printf("\nA cidade %s tem maior área.\n", cidadeA);
            } else if (areaA < areaB) {
                printf("\nA cidade %s tem maior área.\n", cidadeB);
            } else {
                printf("\nAs duas cidades têm a mesma área.\n");
            }
            break;

        case 3: // Comparar PIB
            if (pibA > pibB) {
                printf("\nA cidade %s tem maior PIB.\n", cidadeA);
            } else if (pibA < pibB) {
                printf("\nA cidade %s tem maior PIB.\n", cidadeB);
            } else {
                printf("\nAs duas cidades têm o mesmo PIB.\n");
            }
            break;

        case 4: // Comparar pontos turísticos
            if (pontosTuristicosA > pontosTuristicosB) {
                printf("\nA cidade %s tem mais pontos turísticos.\n", cidadeA);
            } else if (pontosTuristicosA < pontosTuristicosB) {
                printf("\nA cidade %s tem mais pontos turísticos.\n", cidadeB);
            } else {
                printf("\nAs duas cidades têm o mesmo número de pontos turísticos.\n");
            }
            break;

        case 5: // Comparar densidade populacional
            {
                float densidadeA = populacaoA / areaA;
                float densidadeB = populacaoB / areaB;
                
                if (densidadeA < densidadeB) { // Menor densidade vence
                    printf("\nA cidade %s tem menor densidade populacional.\n", cidadeA);
                } else if (densidadeA > densidadeB) {
                    printf("\nA cidade %s tem menor densidade populacional.\n", cidadeB);
                } else {
                    printf("\nAs duas cidades têm a mesma densidade populacional.\n");
                }
            }
            break;

        default:
            printf("\nOpção inválida.\n");
            break;
    }

    return 0;
}

      // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
*/
