#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");
    unsigned long long int termo1 = 0, termo2 = 1, auxiliar;
    long long int n;
    printf("Olá, bem vindo ao gerador da sequência de Fibonacci!\n");
    printf("----------------------------------------------------\n");
    printf("Digite o número de casas que você deseja saber da sequência de Fibonacci\n");
    scanf(" %lld", &n);
    while(n < 1) {
        printf("O número não pode ser negativo, nem zero (não faz sentido). Digite novamente um número inteiro positivo\n");
        scanf(" %lld", &n);
    }
    printf("\nA sequência de Fibonacci com %lld termo é de: \n", n);
    printf("----------------------------------------------------\n");
    for(int i = 0; i < n; i++) {
        printf("%llu ", termo1);
        auxiliar = termo1;
        termo1 = termo1 + termo2;
        termo2 = auxiliar;
    }
    return 0;
}