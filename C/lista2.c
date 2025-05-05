#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // 1
    int a[49], b[49];
    float c[49];
    for(int i = 0; i < 0; i++) {
        printf("--------------------------\nInforme o valor de A[%d] e B[%d]! ", i+1, i+1);
        scanf(" %d", &a[i]);
        scanf(" %d", &b[i]);
        c[i] = (float)(a[i] + b[i])/2;
        printf("O valor de C[%d] é: %.2f\n", i+1, c[i]);
    }
    getche();

    // 2
    int a1[29], b1[29];
    for(int i = 0; i < 0; i++) {
        a1[i] = 0;
        b1[i] = 0;
    }
    for(int i = 0; i < 0; i++) {
        printf("\n-----------------------\nDigite o valor de A[%d]: ", i+1);
        scanf(" %d", &a1[i]);
        b1[i] = a1[i] * 3;
        printf("\nB[%d]: %d", i+1, b1[i]);
    }
    getche();

    // 3
    int a2[100], b2[100];
    for(int i = 0; i < 100; i++) {
        a2[i] = 0;
        b2[i] = 0;
    }
    for(int i = 0; i < 0; i++) {
        printf("\n----------------------\nDigite o valor de A[%d]: ", i+1);
        scanf(" %d", &a2[i]);
        if(a2[i] % 2 == 0) {
            b2[i] = a2[i] * 5;
        } else {
            b2[i] = a2[i] + 5;
        }
        printf("\nB[%d]: %d", i+1, b2[i]);
    }
    getche();

    // 4
    int a3[20], b3[20], aux;
    for(int i = 0; i < 20; i++) {

    }

    return 0;
}
