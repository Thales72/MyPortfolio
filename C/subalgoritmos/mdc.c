#include <stdio.h>

int functionMDC(int a, int b) {
    int resto;
    if(a > b) {
        while(b != 0) {
            resto = a % b;
            a = b;
            b = resto;
        }
    } else if(a == b) {
        return a;
    } else {
        resto = b;
        b = a;
        a = resto;
        while(b != 0) {
            resto = a % b;
            a = b;
            b = resto;
        }
    }
    return a;
}

int main() {
    int a, b, mdc;
    printf("Informe dois números: ");
    scanf("%d", &a);
    scanf(" %d", &b);
    mdc = functionMDC(a, b);
    printf("\nO MDC é: %d", mdc);
    return 0;
}