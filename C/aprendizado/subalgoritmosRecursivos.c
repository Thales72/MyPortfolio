#include <stdio.h>
#include <locale.h>

// fibbonaci
unsigned int fibo(int n) {
    if(n<2) {
        return 1;
    }
    else return fibo(n-1)+fibo(n-2);
}

// exec. 1 - procedure
void par(int n) {
    if(n != 0) {
        if(n % 2 == 0) {
            printf("%d ", n);
        }
        par(n-1);
    }
}

// exec. 2 - function
int mdc(int n, int m) {
    if(m == 0) {
        return n;
    } else {
        return mdc(m, n%m);
    }
}

// exec. 3 - function
int elevado(int x, int n) {
    if(n == 0) {
        return 1;
    } else {
        return x * elevado(x, n-1);
    }
}

// exec. 4 - procedure
void parPrimeiros(int n) {
    if(n >= 0) {
        parPrimeiros(n - 1);
    }
    if(n % 2 == 0) {
        printf("%d\n", n);
    }
}

// exec. 5 - function
int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

// exec. 6 - function
int menorElementoVetor(int *vetor, int tamanho) {
    if(tamanho == 1) {
        return vetor[0];
    } else {
        int menor = menorElementoVetor(vetor, tamanho - 1);
        if(menor < vetor[tamanho - 1]) {
            return menor;
        } else {
            return vetor[tamanho - 1];
        }
    }
}

// exec. 7 - function
float somaElementosVetor(float *vetor, int tamanho) {
    if(tamanho == 1) {
        return vetor[0];
    } else {
        return vetor[tamanho - 1] + somaElementosVetor(vetor, tamanho - 1);
    }
}

// exec. 8 - function
int somaCubica(int n) {
    if(n == 0) {
        return 0;
    } else {
        return elevado(n, 3) + somaCubica(n - 1);
    }
}

// exec. 9 - function
int* convertio(int decimal, int *binario, int bits) {
    if(bits == 0) {
        return binario;
    } else {
        convertio(decimal/2, binario, bits - 1);
        binario[bits - 1] = decimal % 2;
    }
    return binario;
}

// exec. 10 - function
float media(float *vetor, int tamanho) {
        return somaElementosVetor(vetor, tamanho)/tamanho;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    float vetor[] = {1, 3, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    printf("%d ", tamanho);
    printf("%f", media(vetor, tamanho));
    // int vetor[] = {0, 0, 0, 0, 0, 0, 0, 0};
    // int *resultado = convertio(6, vetor, 8);
    // for(int i = 0; i < 8; i++) {
    //     printf("%d", resultado[i]);
    // }
    return 0;
}
