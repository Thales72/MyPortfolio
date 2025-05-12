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
        printf("O valor de C[%d] �: %.2f\n", i+1, c[i]);
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
    for(int i = 0; i < 0; i++) {
        printf("\n----------------------\nDigite o valor de A[%d] e B[%d]: ", i+1, i+1);
        scanf(" %d", &a3[i]);
        scanf(" %d", &b3[i]);
        aux = a3[i];
        a3[i] = b3[i];
        b3[i] = aux;
        printf("\nA[%d] e B[%d] trocados são, respectivamente: %d e %d", i+1, i+1, a3[i], b3[i]);
    }
    getche();

    // 5
    int a4[15], b4[15], c4[30];
    for(int i = 0; i <30; i++) {
        a4[i] = 0;
        b4[i] = 0;
        c4[i] = 0;
    }
    for(int i = 0; i < 15; i++) {
        printf("\n----------------------\nDigite o valor de A[%d] e B[%d]: ", i+1, i+1);
        scanf(" %d", &a4[i]);
        scanf(" %d", &b4[i]);
        c4[i] = a4[i];
        if(i == 14) {
            for(int j = 0; j < 15; j++) {
                c4[j+15] = b4[j];
            }
        }
    }
    for(int i = 0; i < 30; i++) {
        printf("\nC[%d]: %d", i+1, c4[i]);
    }
    getche();

    
    return 0;
}
