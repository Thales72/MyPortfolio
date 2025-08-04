#include <stdio.h>
#include <locale.h>

void drawLine() {
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}

void pares(int n) {
    for(int i = 0; i <= n; i++) {
        if(i % 2 == 0)
            printf("%d ", i);
    }
}

int mdc(int n1, int n2) {
    int resto;
    if (n1 > n2) {
        while(n2 != 0) {
            resto = n1 % n2;
            n1 = n2;
            n2 = resto;
        }
        return n1;
    } else if (n1 == n2){
        return n1;
    } else {
        while(n1 != 0) {
            resto = n2 % n1;
            n2 = n1;
            n1 = resto;
        }
        return n2;
    }
}

float elevado(float x, float n) {
    float resultado = 1;
    for(int i = 0; i < n; i++) {
        resultado = resultado * x;
    }
    return resultado;
}

int soma(int n) {
    int soma = 0;
    for(int i = 0; i <= n; i++) {
        soma = soma + i;
    }
    return soma;
}

int mostraMenor(int vetor[], int n) {
    int menor = vetor[0];
    for(int i = 0; i < n; i++) {
        if(menor >= vetor[i]) {
            menor = vetor[i];
        }
    }
    return menor;
}

int somaVetor(int vetor[], int n) {
    int soma = 0;
    for(int i = 0; i <= n; i++) {
        soma = soma + vetor[i];
    }
    return soma;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    /* int numero;
    drawLine();
    printf("Números pares de 0\n");
    drawLine();
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    pares(numero);
    printf("\n");
    drawLine(); */

    int n;
    printf("Informe a quantidade elementos do vetor\n");
    scanf(" %d", &n);
    int vetor[n];
    for(int i = 0; i <= n; i++) {
        vetor[i] = i;
        printf("%d ", vetor[i]);
    }
    printf("\n%d", mostraMenor(vetor, n));

    return 0;
}
