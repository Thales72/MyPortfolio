#include <stdio.h>
#include <locale.h>
#include <errno.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");
    // Escreva um programa que leia um conjunto de números positivos e exiba a soma, o menor e o maior. Suporemos que o número de elementos deste conjunto não é conhecido, e que um número negativo será utilizado para sinalizar o fim dos dados. Use a estrutura array.
    int *numeros, n, soma = 0, numeroNatural;
    printf("Digite a quantidade de entrada de dados: \n");
    scanf(" %d", &n);
    numeros = (int*) calloc(n, sizeof(int)); // "calloc" zera o array
    if(numeros == NULL) {
        perror("Impossível alocar memória: FATAL ERROR\n");
        printf("Código de erro: %d\n", errno);
        return 1;
    }

    for(int i = 0; i < n; i++) {
        printf("\nInforme o %dº número: \n", i+1);
        scanf(" %d", &numeroNatural);
        if (numeroNatural < 0) {
            n = i;
            break;
        }

        numeros[i] = numeroNatural;
        soma += numeros[i];
    }

    int maior = numeros[0];
    int menor = numeros[0];

    for(int i = 0; i < n; i++) {
        if(maior < numeros[i]) {
            maior = numeros[i];
        }
        if(menor > numeros[i]) {
            menor = numeros[i];
        }
    }

    printf("\nRESULTADOS FINAIS\nA soma foi igual a %d, o maior número é %d e o menor é %d.", soma, maior, menor);
    free(numeros);

    return 0;
}