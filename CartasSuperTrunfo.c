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

    char estado2, codigo2; //carta2
    char cidade2[50];
    int populacao2, pturisticos2;
    float area2, pib2;

    printf("Carta 2:\n");
    printf ("Digite uma letra representando seu estado de A a H: \n");
    scanf(" %c", &estado2);

    printf("Escolha o código da carta: \n"); //Associe um número a letra da carta que foi escolhida na primeira pergunta.
    scanf(" %c", &codigo2);

    getchar();
    printf("Digite o nome de uma cidade: \n"); //Escolha o nome da cidade da sua carta.
    scanf(" %[^\n]", cidade2);

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a área da sua cidade em KM2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pturisticos2);

    printf("Carta2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área:%.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pturisticos2);


    return 0;
}
