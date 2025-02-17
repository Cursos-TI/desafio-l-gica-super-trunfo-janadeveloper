#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

// Estrutura que representa uma carta de cidade
struct Carta {
    char codigo[20];
    char cidade[50];
    char estado[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

// Função para exibir os dados de uma carta
void exibir_dados(struct Carta carta) {
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("Estado: %s\n", carta.estado);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f milhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
}

// Função para comparar duas cartas de acordo com o atributo escolhido
struct Carta comparar_cartas(struct Carta carta1, struct Carta carta2, int atributo) {
    switch (atributo) {
        case 1: // Comparação por população
            return (carta1.populacao > carta2.populacao) ? carta1 : carta2;
        case 2: // Comparação por área
            return (carta1.area > carta2.area) ? carta1 : carta2;
        case 3: // Comparação por PIB
            return (carta1.pib > carta2.pib) ? carta1 : carta2;
        case 4: // Comparação por pontos turísticos
            return (carta1.pontos_turisticos > carta2.pontos_turisticos) ? carta1 : carta2;
        case 5: // Comparação por densidade populacional
            {
                float densidade1 = carta1.populacao / carta1.area;
                float densidade2 = carta2.populacao / carta2.area;
                return (densidade1 < densidade2) ? carta1 : carta2;  // Menor densidade vence
            }
        default:
            return carta1; // Retorna a carta 1 em caso de erro
    }
}

// Função para cadastrar uma carta
struct Carta cadastrar_carta() {
    struct Carta carta;
    printf("\nDigite o código da carta: ");
    scanf("%s", carta.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta.cidade);  // Lê até o final da linha
    printf("Digite o estado da cidade: ");
    scanf(" %[^\n]", carta.estado);
    printf("Digite a população da cidade: ");
    scanf("%d", &carta.populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta.area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &carta.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta.pontos_turisticos);
    return carta;
}

int main() {


    printf("Bem-vindo ao desafio Super Trunfo - Países!\n");

    // Cadastra as duas cartas
    struct Carta carta1 = cadastrar_carta();
    struct Carta carta2 = cadastrar_carta();

    // Solicita ao usuário o atributo para a comparação
    int atributo;
    printf("\nEscolha o atributo para a comparação (1 - populacao, 2 - area, 3 - pib, 4 - pontos_turisticos, 5 - densidade_populacional): ");
    scanf("%d", &atributo);

    // Compara as cartas com base no atributo escolhido
    struct Carta vencedor = comparar_cartas(carta1, carta2, atributo);

    // Exibe os resultados da comparação
    printf("\nDados da Carta 1:\n");
    exibir_dados(carta1);
    printf("Dados da Carta 2:\n");
    exibir_dados(carta2);

    // Exibe quem venceu
    printf("\nA carta vencedora é a de %s!\n", vencedor.cidade);

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

