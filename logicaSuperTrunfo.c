#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1[3], codigo1[4], nomeCidade1[50]; 
    int populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;
    int pontosTuristicos1; 

    // Declaração de variáveis para a segunda carta
    char estado2[3], codigo2[4], nomeCidade2[50];
    int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;
    int pontosTuristicos2; 

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);  // Lê o nome da cidade
    printf("População: (escreva sem pontos ou vírgulas)");
    scanf("%d", &populacao1);
    printf("Área (em km²):");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais):");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para a Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // PIB convertido para reais
    // (pib1 * 1.000.000.000) porque pib1 está em bilhões de reais

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);  // Lê o nome da cidade
    printf("População: (escreva sem pontos ou vírgulas)");
    scanf("%d", &populacao2);
    printf("Área (em km²):");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais):");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;  // PIB convertido para reais

    // Comparando o atributo População (você pode mudar aqui para Área, PIB, etc.)
    printf("\nComparação de Cartas (Atributo: População):\n");

    // Exibição dos dados das duas cartas para o atributo escolhido
    printf("\nCarta 1 - %s (%s): População = %lu, Pontos Turísticos = %d\n", nomeCidade1, estado1, populacao1, pontosTuristicos1);
    printf("Carta 2 - %s (%s): População = %lu, Pontos Turísticos = %d\n", nomeCidade2, estado2, populacao2, pontosTuristicos2);

    // Comparação do atributo População
    printf("O atributo escolhido para a comparação: população")
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

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
