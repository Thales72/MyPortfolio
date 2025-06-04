#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int v[], int comprimento) {
    int aux;
    char otimizar = 1;
    while(otimizar) {
        otimizar = 0;
        while(comprimento > 1) {
            for(int i = 0; i < comprimento-1; i++) {
                if(v[i] > v[i+1]) {
                    aux = v[i];
                    v[i] = v[i+1];
                    v[i+1] = aux;
                    otimizar = 1;
                }
            }
            comprimento--;
        }
    }
}

int main() {
    int n;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf(" %d", &n);
    int v[n];
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        v[i] = rand();
        printf("\n%d || %d\n", v[i], i);
    }
    bubbleSort(v, n);
    for(int i = 0; i < n; i++) {
        printf("\nVetor ordenado: v[%d] = %d", i, v[i]);
    }
}