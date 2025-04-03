#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num1, num2, soma;
    int *ponteiro1, *ponteiro2;
    printf("Digite dois números para serem somados:\n");
    scanf(" %d", &num1);
    scanf(" %d", &num2);
    ponteiro1 = &num1;
    ponteiro2 = &num2;
    soma = *ponteiro1 + *ponteiro2;
    printf("A soma de %d + %d é igual à: %d", *ponteiro1, *ponteiro2, soma);

    return 0;
}