#include <stdio.h>

int main() {
    // Carta 1
    char Codigo1[15] = "A01";
    char Estado1[15] = "Paraná";
    char Cidade1[15] = "Jacarezinho";
    int Populacao1 = 40000;
    float Area1 = 602;
    float PIB1 = 1598109262;
    int Turismo1 = 8;
    float Densidade1 = Populacao1 / Area1;
    float PIBperCapita1 = PIB1 / Populacao1;

    // Carta 2
    char Codigo2[15] = "A02";
    char Estado2[15] = "São Paulo";
    char Cidade2[15] = "Campinas";
    int Populacao2 = 1214000;
    float Area2 = 795;
    float PIB2 = 72900000000; 
    int Turismo2 = 15;
    float Densidade2 = Populacao2 / Area2;
    float PIBperCapita2 = PIB2 / Populacao2;

    // Exibir Carta 1
    printf("=== Carta 1 ===\n");
    printf("Código: %s\n", Codigo1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhoes de Reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: %.2f Mil Reais\n", PIBperCapita1);
    printf("\n");
    
    // Exibir Carta 2
    printf("=== Carta 2 ===\n");
    printf("Código: %s\n", Codigo2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhoes de Reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: %.2f Mil Reais\n", PIBperCapita2);
    printf("\n");

    // Comparacões
    printf("=== COMPARAÇÃO ENTRE AS CARTAS ===\n");
    
    // Densidade Populacional
    if (Densidade1 > Densidade2) {
        printf("Densidade Populacional: %s Venceu!\n", Cidade1);
    } else if (Densidade2 > Densidade1) {
        printf("Densidade Populacional: %s Venceu!\n", Cidade2);
    } else {
        printf("Densidade Populacional: Empate!\n");
    }

    // PIB per Capita
    if (PIBperCapita1 > PIBperCapita2) {
        printf("PIB per Capita: %s venceu!\n", Cidade1);
    } else if (PIBperCapita2 > PIBperCapita1) {
        printf("PIB per Capita: %s venceu!\n", Cidade2);
    } else {
        printf("PIB per Capita: Empate!\n");
    }

    return 0;
}
