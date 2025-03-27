#include <stdio.h>
int main() {
    char estado, codigo;
    char cidade[100]; //carta1
    int populacao, pturisticos;
    float area, pib;
    printf("Carta 1:\n");

    printf ("Digite uma letra representando seu estado de A a H: \n");
    scanf(" %c", &estado);

    printf("Escolha o código da carta:\n"); 
    scanf(" %c", &codigo);

    getchar();
    
    printf("Digite o nome de uma cidade: \n"); 
    scanf (" %[^\n]", cidade);

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite a área da sua cidade em KM2: \n");
    scanf("%f", &area);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos);

    printf("Carta1:");
    
    printf("Estado: %c\n", estado);
    printf("Código: %c\n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área:%.2f KM2\n", area);
    printf("PIB: %.2f \n", pib);
    printf("Número de pontos turísticos: %d \n", pturisticos);

    return 0;
}
