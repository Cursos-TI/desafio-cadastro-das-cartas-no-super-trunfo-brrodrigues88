#include <stdio.h>

int main() {
    // Carta 1
    char Codigo1[15] = "A01";
    char Estado1[15]= "Paraná";
    char Cidade1[15] = "Jacarezinho";
    unsigned long int Populacao1 = 40375;
    float Area1 = 602;
    float PIB1 = 1598109262; 
    int Turismo1 = 8;
    float Densidade1 = Populacao1 / Area1;
    float PIBperCapita1 = PIB1 / Populacao1;
    float  Superpoder1 = (Populacao1) + (Area1) + (PIB1) + (Turismo1) + (PIBperCapita1) + ( Densidade1);

    // Carta 2
    char Codigo2[15] = "A02";
    char Estado2[15]= "São Paulo";
    char Cidade2[15] = "Campinas";
    unsigned long int Populacao2 = 1214000;
    float Area2 = 795;
    float PIB2 = 72900000000; 
    int Turismo2 = 15;
    float Densidade2 = Populacao2 / Area2;
    float PIBperCapita2 = PIB2 / Populacao2;
    float Superpoder2 = (Populacao2) + (Area2) + (PIB2) + (Turismo2) + (PIBperCapita2) + ( Densidade2);

    // Exibir Carta 1
    printf("=== Carta 1 ===\n");
    printf("Código: %s\n", Codigo1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %lu Habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhões\n", PIB1 / 1e9); 
    printf("Pontos Turísticos: %d\n", Turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);
    printf("Superpoder %s: %.2f\n", Cidade1, Superpoder1);
    printf("\n");
    
    // Exibir Carta 2 
    printf("=== Carta 2 ===\n");
    printf("Código: %s\n", Codigo2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %lu Habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhões\n", PIB2 / 1e9);
    printf("Pontos Turísticos: %d\n", Turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);
    printf("Superpoder %s: %.2f\n", Cidade2, Superpoder2);
    printf("\n"); 

        // Comparações das Cartas
    if (Populacao1 > Populacao2)
        printf("População: %s venceu!\n", Cidade1);
    else if (Populacao2 > Populacao1)
        printf("População: %s venceu!\n", Cidade2);
    else
        printf("População: Empate!\n");

    if (Area1 > Area2)
        printf("Área: %s venceu!\n", Cidade1);
    else if (Area2 > Area1)
        printf("Área: %s venceu!\n", Cidade2);
    else
        printf("Área: Empate!\n");

    if (PIB1 > PIB2)
        printf("PIB: %s venceu!\n", Cidade1);
    else if (PIB2 > PIB1)
        printf("PIB: %s venceu!\n", Cidade2);
    else
        printf("PIB: Empate!\n");

    if (Turismo1 > Turismo2)
        printf("Turismo: %s venceu!\n", Cidade1);
    else if (Turismo2 > Turismo1)
        printf("Turismo: %s venceu!\n", Cidade2);
    else
        printf("Turismo: Empate!\n");

    if (Densidade1 < Densidade2)
        printf("Densidade Populacional: %s venceu!\n", Cidade1);
    else if (Densidade2 < Densidade1)
        printf("Densidade Populacional: %s venceu!\n", Cidade2);
    else
        printf("Densidade Populacional: Empate!\n");

    if (PIBperCapita1 > PIBperCapita2)
        printf("PIB per Capita: %s venceu!\n", Cidade1);
    else if (PIBperCapita2 > PIBperCapita1)
        printf("PIB per Capita: %s venceu!\n", Cidade2);
    else
        printf("PIB per Capita: Empate!\n");

    if (Superpoder1 > Superpoder2)
        printf("Superpoder: %s venceu!\n", Cidade1);
    else if (Superpoder2 > Superpoder1)
        printf("Superpoder: %s venceu!\n", Cidade2);
    else
        printf("Superpoder: Empate!\n");

    return 0;
}
