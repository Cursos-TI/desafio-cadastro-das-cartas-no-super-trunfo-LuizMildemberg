#include <stdio.h>

int main() {
    // Defina variáveis para cada atributo da cidade
    char estado[3]; 
    char codigo[4];  
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int pontos;

    // Cadastro das Cartas:
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo);  
    getchar();  // Limpa o buffer de entrada (consome o \n deixado pelo scanf)

    printf("Digite o estado (sigla): \n");
    scanf("%s", estado);  
    getchar();  

    printf("Digite o nome da cidade: \n");
    fgets(nome, sizeof(nome), stdin);  // Usando fgets para ler strings com espaços

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);
    getchar();  

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    getchar();  

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);
    getchar();  

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos);
    getchar();  

    // Exibição dos Dados das Cartas:
    printf("\nDados da cidade cadastrada:\n");
    printf("Código da cidade: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Nome da cidade: %s", nome);  
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);  
    printf("PIB: %.2f\n", PIB);  
    printf("Pontos turísticos: %d\n", pontos);

    return 0;
}