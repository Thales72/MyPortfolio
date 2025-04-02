#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num;
    char letra;
    printf("Digitando um número e uma letra ");
    printf("\nTecle ENTER entre os dois valores: ");
    scanf(" %d", &num);
    scanf(" %c", &letra);
    printf("\nnúmero digitado: %d", num);
    printf("\nletra digitada: %c", letra);

    printf("\nDigite algo para voltar...\n");
    getche();

    int a = 5, b = 2;
    float c;
    c = (float) a/b;
    printf("\na=%d / b=%d a/b=%d c=%f", a, b, a/b, c);
}
