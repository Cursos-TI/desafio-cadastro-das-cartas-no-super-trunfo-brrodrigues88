#include <stdio.h>

int main() {
    int opcao;

    // Carta 1
    char Codigo1[15] = "A01";
    char Estado1[15] = "Paraná";
    char Cidade1[15] = "Jacarezinho";
    int Populacao1 = 40000;
    float Area1 = 602;
    float PIB1 = 1598109262;
    int Turismo1 = 8;
    float Densidade1 = Populacao1 / Area1;

    // Carta 2
    char Codigo2[15] = "A02";
    char Estado2[15] = "São Paulo";
    char Cidade2[15] = "Campinas";
    int Populacao2 = 1214000;
    float Area2 = 795;
    float PIB2 = 72900000000;
    int Turismo2 = 15;
    float Densidade2 = Populacao2 / Area2;

    // Exibir Carta 1
    printf("=== Carta 1 ===\n");
    printf("Codigo: %s\n", Codigo1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d Mil habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Números de Pontos Turísticos: %d\n", Turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("\n");

    // Exibir Carta 2 
    printf("=== Carta 2 ===\n");
    printf("Codigo: %s\n", Codigo2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d Mil habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Números de Pontos Turísticos: %d\n", Turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("\n"); 

    // Menu Interativo
    printf("Escolha uma das opções abaixo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Densidade Populacional\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    // Comparações
    if (opcao == 1) {
        if (Populacao1 > Populacao2) {
            printf("# %s Venceu! #\n", Cidade1);
        } else if (Populacao2 > Populacao1) {
            printf("# %s Venceu! #\n", Cidade2);
        } else {
            printf("# Houve um Empate! #\n");
        }
    } 
    else if (opcao == 2) {
        if (Area1 > Area2) {
            printf("# %s Venceu! #\n", Cidade1);
        } else if (Area2 > Area1) {
            printf("# %s Venceu! #\n", Cidade2);
        } else {
            printf("# Houve um Empate! #\n");
        }
    }
    
    if (opcao == 3) {
        if (Densidade1 <= Densidade2) {
            printf("# %s Venceu! #\n", Cidade1);
        } else if (Densidade2 > Densidade1) {
            printf("# %s Venceu! #\n", Cidade2);
        } else {
            printf("# Houve um Empate! #\n");
        }
    } else {
        printf("Opção inválida\n");
    }

        
    return 0;
}
