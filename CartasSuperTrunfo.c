#include <stdio.h>

int main() {
    //Carta 1
    char Código1[15] = "A01";
    char Estado1[15]= "Paraná";
    char Cidade1[15] = "Jacarezinho";
    int População1 = 40.000;
    float Área1 = 602;
    float PIB1 = 1598109262;
    int Turismo1 = 8;

    //Carta 2
    char Código2[15] = "A02";
    char Estado2[15]= "São Paulo";
    char Cidade2[15] = "Campinas";
    int População2 = 1214000;
    float Área2 = 795;
    float PIB2 = 72900000000;
    int Turismo2 = 15;

    //Exibir Carta 1
    printf("Carta1\n");
    printf("Código: %s\n", Código1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d Mil\n", População1);
    printf("Área: %.fkm²\n", Área1);
    printf("PIB: %.f Bilhões\n", PIB1);
    printf("Números de Pontos Turísticos: %d\n", Turismo1);
    printf("\n");
    
    //Exibir Carta 2 
    printf("Carta2\n");
    printf("Código: %s\n", Código2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d Milhão\n", População2);
    printf("Área: %.fkm²\n", Área2);
    printf("PIB: %.f Bilhões\n", PIB2);
    printf("Números de Pontos Turísticos: %d\n", Turismo2);
    

return 0;
}
