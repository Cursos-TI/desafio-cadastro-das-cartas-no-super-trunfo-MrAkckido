#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
//nivel novato

int main() {
    char estado1[1], codigo1[3], cidade1[50], estado2[1], codigo2[3], cidade2[50];
    int populacao1, turismo1, populacao2, turismo2;
    float area1, PIB1, area2, PIB2;

    printf("Digite os valores da carta 1:");

    printf("\nEstado(1 caractere): ");
    scanf("%s", &estado1);

    printf("\nCodigo(Ex:A01): ");
    scanf("%s", &codigo1);

    printf("\nNome da cidade: ");
    scanf("%s", &cidade1);

    printf("\nPopulacao: ");
    scanf("%d", &populacao1);

    printf("\nArea Km²: ");
    scanf("%f", &area1);

    printf("\nPIB: ");
    scanf("%f", &PIB1);

    printf("\nNumero de pontos turisticos: ");
    scanf("%d", &turismo1);

    printf("\n\nDigite os valores da carta 2:");

    printf("\nEstado(1 caractere): ");
    scanf("%s", &estado2);

    printf("\nCodigo(Ex:A01): ");
    scanf("%s", &codigo2);

    printf("\nNome da cidade: ");
    scanf("%s", &cidade2);

    printf("\nPopulacao: ");
    scanf("%d", &populacao2);

    printf("\nArea Km²: ");
    scanf("%f", &area2);

    printf("\nPIB: ");
    scanf("%f", &PIB2);

    printf("\nNumero de pontos turisticos: ");
    scanf("%d", &turismo2);

    printf("\n\nCarta 1: \nEstado: %s \nCodigo: %s \n", estado1, codigo1);
    printf("Nome da cidade: %s \nPopulacao: %d \nArea Km²: %.2f \n", cidade1, populacao1, area1);
    printf("PIB: %.2f \nNumero de pontos turisticos: %d", PIB1, turismo1);

    printf("\n\nCarta 2: \nEstado: %s \nCodigo: %s \n", estado2, codigo2);
    printf("Nome da cidade: %s \nPopulacao: %d \nArea Km²: %.2f \n", cidade2, populacao2, area2);
    printf("PIB: %.2f \nNumero de pontos turisticos: %d", PIB2, turismo2);

    return 0;
}
