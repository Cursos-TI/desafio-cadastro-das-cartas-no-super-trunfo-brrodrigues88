#include <stdio.h>


int main() {
    int Carta1, Carta2;


    //Carta 1
    char Código1[15] = "A01";
    char Estado1[15]= "Paraná";
    char Cidade1[15] = "Jacarezinho";
    int População1 = 40375;
    float Área1 = 602;
    float PIB1 = 1598109262;
    int Turismo1 = 8;
    float Densidade1 = População1 / Área1;
    float PIBperCapita1 = PIB1 / População1;

    //Carta 2
    char Código2[15] = "A02";
    char Estado2[15]= "São Paulo";
    char Cidade2[15] = "Campinas";
    int População2 = 1214000;
    float Área2 = 795;
    float PIB2 = 72900000000;
    int Turismo2 = 15;
    float Densidade2 = População2 / Área2;
    float PIBperCapita2 = PIB2 / População2;

    
    //Exibir Carta 1
    printf("Carta1\n");
    printf("Código: %s\n", Código1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d Mil habitantes\n", População1);
    printf("Área: %.fkm²\n", Área1);
    printf("PIB: %.f Bilhões de Reais\n", PIB1);
    printf("Números de Pontos Turísticos: %d\n", Turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: %.2f Mil Reais\n", PIBperCapita1);
    printf("\n");
    
    //Exibir Carta 2 
    printf("Carta2\n");
    printf("Código: %s\n", Código2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d Milhão de habitantes\n", População2);
    printf("Área: %.fkm²\n", Área2);
    printf("PIB: %.f Bilhões de Reais\n", PIB2);
    printf("Números de Pontos Turísticos: %d\n", Turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: %.2f Mil Reais\n", PIBperCapita2);
    printf("\n"); 


    return 0;
}
