#include <stdio.h>
#include <stdlib.h>



int main() {
    int Carta1, Carta2;
    int opção;
 
    //Carta 1
    char Código1[15] = "A01";
    char Estado1[15]= "Paraná";
    char Cidade1[15] = "Jacarezinho";
    int População1 = 40375;
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
    printf("População: %d Mil habitantes\n", População1);
    printf("Área: %.fkm²\n", Área1);
    printf("PIB: %.f Bilhões de Reais\n", PIB1);
    printf("Números de Pontos Turísticos: %d\n", Turismo1);
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
    printf("\n"); 

    //Menus Interativo
    printf("Escolha uma das opções abaixo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opção);

    //Comparar Cartas População e Área 
if (População1 > População2) {
    printf("# Jacarezinho-Pr Venceu! #\n"); 
} else if (População1 < População2) {
    printf("# Campinas-Sp Venceu! #\n");
} else {
    printf("# Houve um Empate! #\n");

    if (Área1 > Área2) {
    printf("# Jacarezinho-Pr Venceu! #\n"); 
} else if (Área1 < Área2) {
    printf("# Campinas-Sp Venceu! #\n");
} else {
    printf("# Houve um Empate! #\n");
}
}
    return 0;
}
