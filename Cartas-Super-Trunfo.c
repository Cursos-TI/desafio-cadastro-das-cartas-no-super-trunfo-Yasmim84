#include <stdio.h>

int main() {

    // Declaração das variáveis de duas cartas

    char Cidade1[50], Cidade2[50];
    char Estado1[50], Estado2[50];
    char Código1[20], Código2[20];
    int População1, População2;
    int P_turístico1, P_turístico2;
    float Área1, Área2;
    float PIB1, PIB2;
     
    // Coleta de informações sobre a primeira carta 

    printf("Carta 01 \n");

    printf("Informe qual é o código da carta: ");
    scanf("%s", Código1);

    printf("Informe qual é o estado da carta: ");
    scanf("%s", Estado1);

    printf("Informe o nome da cidade: ");
    getchar(); // Limpar o buffer de entrada
    fgets(Cidade1, sizeof(Cidade1), stdin);

    printf("Informe qual é a população desta carta: ");
    scanf("%d", &População1);

    printf("Informe qual a área em Km²: ");
    scanf("%f", &Área1);

    printf("Informe qual é o PIB: ");
    scanf("%f", &PIB1);

    printf("Informe quantos pontos turísticos: ");
    scanf("%d", &P_turístico1);

    // Coleta de informações da segunda carta

    printf("Carta 02 \n");

    printf("Informe qual é o código da carta: ");
    scanf("%s", Código2);

    printf("Informe qual é o estado da carta: ");
    scanf("%s", Estado2);

    printf("Informe o nome da cidade: ");
    getchar(); // Limpar o buffer de entrada
    fgets(Cidade2, sizeof(Cidade2), stdin);

    printf("Informe qual é a população desta carta: ");
    scanf("%d", &População2);

    printf("Informe qual a área em Km²: ");
    scanf("%f", &Área2);

    printf("Informe qual é o PIB: ");
    scanf("%f", &PIB2);

    printf("Informe quantos pontos turísticos: ");
    scanf("%d", &P_turístico2);

    // saída com os dados coletados

    printf("\n Dados da Carta 1:\n");
    printf("Código: %s\n", Código1);
    printf("Estado: %s\n", Estado1);
    printf("Nome da Cidade: %s", Cidade1);
    printf("População: %d\n", População1);
    printf("Área: %.2f Km²\n", Área1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n\n", P_turístico1);

    printf("\n Dados da Carta 2:\n");
    printf("Código: %s\n", Código2);
    printf("Estado: %s\n", Estado2);
    printf("Nome da Cidade: %s", Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %.2f Km²\n", Área2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", P_turístico2);

    return 0;
}
