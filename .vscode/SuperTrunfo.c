#include <stdio.h>

int main() {
    // Defina variáveis para cada atributo da cidade
    char estado[50];
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int pontos;

    // Cadastro das Cartas:
    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);  // Use %d para int

    

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome); 
    

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);  

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);  

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);  

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos);  

    // Exibição dos Dados das Cartas:
    printf("\nDados da cidade cadastrada:\n");
    printf("Código da cidade: %d\n", codigo);  // Use %d para int
    printf("Nome da cidade: %s\n", nome);  // Use %s para strings
    printf("População: %d\n", populacao);  
    printf("Área: %f\n", area);  
    printf("PIB: %f\n", PIB);  
    printf("Pontos turísticos: %d\n", pontos); 

    return 0;
}