#include <stdio.h>

// estrutura que representa uma carta de cidade
struct Carta {
    char codigo[4];       // Exemplo: A01, B02...
    char nomeCidade[30];  // Nome da cidade
    int populacao;        // População
    float area;           // Área em km²
    float pib;            // PIB em bilhões
    int pontosTuristicos; // Número de pontos turísticos
};

int main() {
    int quantidade;
    printf("Quantas cidades deseja cadastrar? ");
    scanf("%d", &quantidade);

    struct Carta cartas[quantidade];

    // Cadastrando as cartas
    for (int i = 0; i < quantidade; i++) {
        printf("\n=== Cadastro da Cidade %d ===\n", i + 1);

        printf("Codigo (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade); // permite ler nomes com espaço

        printf("Populacao: ");
        scanf("%d", &cartas[i].populacao);

        printf("Area (km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB (em bilhões): ");
        scanf("%f", &cartas[i].pib);

        printf("Numero de pontos turisticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    // Exibindo os dados cadastrados
    printf("\n\n=== Cartas de Cidades Cadastradas ===\n");
    for (int i = 0; i < quantidade; i++) {
        printf("\n------------------------------\n");
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].nomeCidade);
        printf("Populacao: %d habitantes\n", cartas[i].populacao);
        printf("Area: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontosTuristicos);
    }
    printf("\n------------------------------\n");

    return 0;
}