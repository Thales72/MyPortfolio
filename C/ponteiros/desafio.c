#include <stdio.h>
#include <locale.h>
#include <errno.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");

    // Crie um programa que permita ao usuário digitar uma quantidade de números inteiros e, em seguida, insira valores nessa quantidade de números. O programa deve calcular e exibir a soma desses números. Utilize alocação dinâmica de memória com malloc e libere a memória depois de usá-la com free.
    int n, *numeros, soma = 0;
    printf("Informe a quantidade da entrada de dados: ");
    scanf(" %d", &n);
    numeros = (int*) malloc(n * sizeof(int));
    if(numeros == NULL) {
        perror("Não foi possível acessar a memória…\n");
        printf("Código do erro: %d\n", errno);
        return 1;
    }
    printf("Digite a quantia %d de números.\n", n);
    for(int i = 0; i < n; i++) {
        scanf(" %d", &numeros[i]);
        soma += numeros[i];
    }
    printf("A soma dos números é %d \n", soma);
    free(numeros);

    return 0;
}