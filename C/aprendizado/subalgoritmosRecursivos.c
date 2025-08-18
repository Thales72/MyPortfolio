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
int sum(int soma, int n) {
    if (n == 0) {
        return soma;
    } else {
        soma = soma + n + sum(soma, n - 1);
    }
    return soma;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("%d", sum(0, 100));
    return 0;
}
