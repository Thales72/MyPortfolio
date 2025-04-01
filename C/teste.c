#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    // Faça um programa que gera e escreve os números ímpares dos números lidos entre 100 e 200.
    printf("PROGRAMA 1\n");
    for (int i = 101; i < 200; i += 2) {
        printf("\nO número gerado é: %d", i);
    }
    // Faça um programa que exiba os números de 1 até 2000.
    printf("\nPROGRAMA 2\n");
    for (int i = 1; i < 2; i++) {
        printf("\nNúmero gerado: %d", i);
    }
    // Faça um programa para imprimir uma tabuada.
    printf("\n\nPROGRAMA 3\n");
    long long int numeroTabuada;  
    printf("Digite o número que deseja saber a tabuada: \n");
    scanf("%lld", &numeroTabuada); 

    for (int i = 0; i < 11; i++) {
        printf("%lld x %d = %lld\n", numeroTabuada, i, numeroTabuada * i);
    }
    // Escreva um programa que leia um conjunto de números positivos e exiba o menor e o maior. Suporemos que o número de elementos deste conjunto não é conhecido, e que um número negativo será utilizado para sinalizar o fim dos dados.
    printf("\nPROGRAMA 4\n");
    int numeros[100];
    int contagem = 0;
    int numeroNatural;
    printf("Digite os números naturais! {Digite qualquer número negativo para finalizar a contagem}:\n");
    while (1) {
        scanf("%d", &numeroNatural);
        if(numeroNatural < 0) {
            break;
        }
        numeros[contagem] = numeroNatural;
        contagem++;
    }

    if(contagem == 0) {
        printf("Nenhum número natural foi inserido.\n");
        return 0;
    }

    int maior = numeros[0];
    int menor = numeros[0];
    for(int i = 1; i < contagem; i++) {
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    printf("O menor número é %d, e o maior número é %d", menor, maior);
    return 0;
} 