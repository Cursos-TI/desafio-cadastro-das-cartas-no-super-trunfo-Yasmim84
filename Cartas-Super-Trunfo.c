#include <stdio.h>

int main () {
    // Declaração das variáveis.
    char Estado[4];
    char Código [8];
    char cidade [40];
    int População, P_turístico;
    float Área, PIB;

     // Informações sobre as cartas.

     printf("Carta 01:\n\n");

     printf("Informe qual é o estado da carta: ");
     scanf("%s", Estado);

     printf("Informe qual é codígo da carta: ");
     scanf("%s", Código);

     printf("Informe qual é o nome da cidade: ");
     scanf("%s", cidade);

     printf("Informe qual é a população desta carta: ");
     scanf("%d", População);

     printf("Informe qual a área em Km²: ");
     scanf("%f", Área);

     printf("Informe qual é o PIB desta carta: ");
     scanf("%f", PIB);

     printf("Informe quantos pontos turísticos essa carta possui: ");
     scanf("%d", P_turístico);








    return 0;
}
