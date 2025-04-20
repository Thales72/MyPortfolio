#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

void conversor() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    // Calcular todas as temperaturas em todas as unidades possíveis: graus, Fahrenheit ou Kelvin; Permita que o usuário escolha se repetirá o programa novamente;
    float graus;
    char entrada;
    printf("\nOlá!\nBem-vindo a interface do programa conversão de temperaturas!\n");
    printf("Você deseja saber a temperatura em qual unidade? Digite K, ºF ou ºC?\n");
    scanf(" %c", &entrada);
    entrada = toupper(entrada);

    switch(entrada) {
        case 'K':
            printf("\nVocê deseja converter para KELVIN. Qual unidade você quer converter para KELVIN? ºF ou ºC?: \n");
            scanf(" %c", &entrada);
            entrada = toupper(entrada);
            switch(entrada) {
                case 'F':
                    printf("\nInforme os graus em FAHRENHEIT: ");
                    scanf(" %f", &graus);
                    printf("\nFAHRENHEIT convertidos para KELVIN: %.2f K", (graus - 32) / 1.8 + 273.15);
                    break;
                case 'C':
                    printf("\nInforme os graus em CELSIUS: ");
                    scanf(" %f", &graus);
                    printf("\nCELSIUS para KELVIN convertidos: %.2f K", graus + 273.15);
                    break;
            }
            break;
        case 'F':
            printf("\nVocê deseja converter para FAHRENHEIT. Qual unidade você quer converter para FAHRENHEIT? K ou ºC?: \n");
            scanf(" %c", &entrada);
            entrada = toupper(entrada);
            switch(entrada) {
                case 'K':
                    printf("\nInforme os graus em KELVIN: ");
                    scanf(" %f", &graus);
                    printf("\nKELVIN convertidos para FAHRENHEIT: %.2f ºF", (graus - 273.15) * 1.8 + 32);
                    break;
                case 'C':
                    printf("\nInforme os graus em CELSIUS: ");
                    scanf(" %f", &graus);
                    printf("\nCELSIUS para FAHRENHEIT convertidos: %.2f ºF", (graus * 1.8) + 32);
                    break;
            }
            break;
        case 'C':
            printf("\nVocê deseja converter para CELSIUS. Qual unidade você quer converter para CELSIUS? K ou ºF?: \n");
            scanf(" %c", &entrada);
            entrada = toupper(entrada);
            switch(entrada) {
                case 'K':
                    printf("\nInforme os graus em KELVIN: ");
                    scanf(" %f", &graus);
                    printf("\nKELVIN convertidos para CELSIUS: %.2f ºC", graus - 273.15);
                    break;
                case 'F':
                    printf("\nInforme os graus em FAHRENHEIT: ");
                    scanf(" %f", &graus);
                    printf("\nFAHRENHEIT para CELSIUS convertidos: %.2f ºC", (graus - 32) * 5 / 9);
                    break;
            }
            break;
        default:
            printf("\nOPÇÃO INVÁLIDA!\n");
            break;
    }
}

int main() {
    char loop = 'S';
    while(loop == 'S') {
        conversor();
        printf("\nVocê deseja executar o programa novamente? (S/N)\n");
        scanf(" %c", &loop);
        loop = toupper(loop);
        switch(loop) {
            case 'S':
                continue;
            case 'N':
                break;
            default:
                printf("\nOpção inválida.\nDeseja tentar novamente? (S/N)\n");
                scanf(" %c", &loop);
                loop = toupper(loop);
                if(loop == 'S') 
                    conversor();
                else if(loop == 'N') {
                    printf("\nOK, BYE\n");
                    break;
                } else {
                    while(loop != 'S') {
                        printf("\nOPÇÃO INVÁLIDA. DESEJA TENTAR NOVAMENTE? (S/N) \n");
                        scanf(" %c", &loop);
                        loop = toupper(loop);
                        if(loop == 'N') 
                            break;
                    }
                }
        }
    }
    printf("\nADEUS!\n");
    return 0;
}