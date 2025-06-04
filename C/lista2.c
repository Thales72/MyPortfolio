#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define n 5

// bolha
void bubbleSort(int vetorBolha[], int tamanho) {
    while(tamanho > 1) {
        for(int i = 0; i < tamanho-1; i++) {
            if(vetorBolha[i] > vetorBolha[i+1]) {
                int aux = vetorBolha[i];
                vetorBolha[i] = vetorBolha[i+1];
                vetorBolha[i+1] = aux;
            }
        }
        tamanho--;
    }
}

// maiúsculo
void maiusculo(char str[]) {
    for(int i = 0; i < strlen(str); i++)
        str[i] = toupper(str[i]);
}

// remover espaços das strings
void removerEspacos(char str[], int comprimento) {
    int i = 0, j = 0;
    while(i < comprimento) {
        if(str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    // Semente aleatória a cada execução para rand();
    srand(time(NULL));
    setlocale(LC_ALL, "pt-BR.UTF-8");
    // 1
    int a[50], b[50];
    float c[50];
    for(int i = 0; i < 0; i++) {
        printf("--------------------------\nInforme o valor de A[%d] e B[%d]! ", i+1, i+1);
        scanf(" %d", &a[i]);
        scanf(" %d", &b[i]);
        c[i] = (float)(a[i] + b[i])/2;
        printf("O valor de C[%d] é: %.2f\n", i+1, c[i]);
    }
    getche();

    // 2
    int a1[30], b1[30];
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
        printf("\nA[%d] e B[%d] otimizars são, respectivamente: %d e %d", i+1, i+1, a3[i], b3[i]);
    }
    getche();

    // 5
    int a4[15], b4[15], c4[30];
    for(int i = 0; i <30; i++) {
        a4[i] = 0;
        b4[i] = 0;
        c4[i] = 0;
    }
    for(int i = 0; i < 0; i++) {
        printf("\n----------------------\nDigite o valor de A[%d] e B[%d]: ", i+1, i+1);
        scanf(" %d", &a4[i]);
        scanf(" %d", &b4[i]);
        c4[i] = a4[i];
        c4[i+15] = b4[i];
    }
    for(int i = 0; i < 30; i++) {
        printf("\nC[%d]: %d", i+1, c4[i]);
    }
    getche();

    // 6
    float preco[100], quantidade[100], faturamento = 0;
    for(int i = 0; i < 0; i++) {
        printf("\nInforme a quantidade e o preço da mercadoria com identificador %d", i+1);
        scanf(" %f", &quantidade[i]);
        scanf(" %f", &preco[i]);
        faturamento = faturamento + (quantidade[i] * preco[i]);
    }
    printf("\nO faturamento mensal foi de R$ %.2f", faturamento);
    getche();

    // 7
    int mat[4][5], somalinha[4], total = 0;
    for(int i = 0; i < 0; i++) {
        somalinha[i] = 0;
    }
    for(int i = 0; i < 0; i++) {
        for(int j = 0; j < 5; j++) {
            printf("\nInforme o elemento para a posição mat[%d][%d]: ", i+1, j+1);
            scanf(" %d", &mat[i][j]);
        }
    }
    for(int i = 0; i < 0; i++) {
        for(int j = 0; j < 5; j++) {
            somalinha[i] = mat[i][j] + somalinha[i];
        }
        total = somalinha[i] + total;
        printf("\nA soma das linhas é: %d", somalinha[i]);
    }
    printf("\nA soma total das linhas foi de: %d", total);
    getche();

    // 8
    float mat1[3][5], mat2[3][5], matrizSomada[3][5];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            matrizSomada[i][j] = 0;
        }
    }
    for(int i = 0; i < 0; i++) {
        for(int j = 0; j < 5; j++) {
            printf("\nInforme o elemento para a posição mat1[%d][%d] e mat2[%d][%d]: ", i+1, j+1, i+1, j+1);
            scanf(" %f", &mat1[i][j]);
            scanf(" %f", &mat2[i][j]);
            matrizSomada[i][j] = mat1[i][j] + mat2[i][j];
            printf("A matrizSomada[%d][%d] é: %.2f", i+1, j+1, matrizSomada[i][j]);
        }
    }
    getche();

    // 9
    float matrizQuadrada[20][20], elementoDiagonalPrincipal;
    for(int i = 0; i < 0; i++) {
        for(int j = 0; j < 3; j++) {
            printf("\nInforme o elemento para a posição matrizQuadrada[%d][%d]: ", i+1, j+1);
            scanf(" %f", &matrizQuadrada[i][j]);
        }
    }
    for(int i = 0; i < 0; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j) {
                elementoDiagonalPrincipal = matrizQuadrada[i][j];
                for(int k = 0; k < 3; k++) {
                    printf("\nA matriz quadrada modificada [%d][%d]: %.2f", i+1, k+1, matrizQuadrada[i][k]/elementoDiagonalPrincipal);
                }
            }
        }
    }
    getche();

    // 10
    float mat3[n][n];
    for(int i = 0; i < 0; i++) {
        for(int j = 0; j < n; j++) {
            printf("\n\nDigite o elemento da mat3[%d][%d]: ", i+1, j+1);
            scanf(" %f", &mat3[i][j]);
        }
    }
    for(int i = 0; i < 0; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                printf("\nOs elementos acima ou abaixos da diagonal principal [%d][%d] são: %.2f", i+1, j+1, mat3[i][j]);
            }
        }
    }
    getche();

    // 11
   /*  int vetor[n], vetorSR[n], frequencia, nRepetidos = 0, r;
    char encontrado;

    for(int i = 0; i < n; i++) {
        printf("\n\nInsira os elementos do vetor[%d]: ", i+1);
        scanf(" %d", &vetor[i]);
        vetorSR[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        frequencia = 0;
        encontrado = 1;
        if(nRepetidos >= 1) {
            r = 0;
            do {
                if(vetor[i] == vetorSR[r]) {
                    encontrado = 0;
                }else{
                    r = r+1;
                }
            } while(r < nRepetidos && encontrado == 1);
        }
        if(encontrado == 1) {
            for(int j = 0; j < n; j++) {
                if(vetor[j] == vetor[i]) {
                    frequencia = frequencia + 1;
                    vetorSR[nRepetidos] = vetor[i];
                }
            }
            printf("\nO elemento %d se repete %d vezes", vetor[i], frequencia);
            if(frequencia > 1) {
                nRepetidos = nRepetidos + 1;
            } 
        }
    }
    getche(); */

    // 11 - com Bubble Sort - Crie um algoritmo que leia um vetor v[N] números inteiros. Em seguida, informe os números (sem repeti-lo) e a sua correspondente frequência.
/*     int vetorBolha[n], frequenciaBolha;
    for(int i = 0; i < n; i++) {
        printf("\n\nInsira os elementos do vetor[%d]: ", i+1);
        scanf(" %d", &vetorBolha[i]);
    }
    bubbleSort(vetorBolha, n);
    for(int i = 0; i < n; i++) {
        printf("\nO vetor ordenado[%d] é: %d", i+1, vetorBolha[i]);
    }
    for(int i = 0; i < n; i++) {
        frequenciaBolha = 0;
        if(i == 0 || vetorBolha[i] != vetorBolha[i-1]) {
            for(int j = 0; j < n; j++) {
                if(vetorBolha[i] == vetorBolha[j]) {
                    frequenciaBolha++;
                }
            }
            printf("\n\nO elemento %d repete-se %d vezes", vetorBolha[i], frequenciaBolha);
        }
    }
    getche(); */

    // 12
    float vet[n];
    float pMin, pMax;
    for(int i = 0; i < n; i++) {
        vet[i] = (float)rand() / RAND_MAX * 100 - 1; // Geração aleatória de números do vetor
        printf("\ni: %d|| vet[i]: %.2f", i, vet[i]);
    }
    pMin = vet[0];
    pMax = vet[0];
    for(int i = 0; i < n; i++) {
        if(vet[i] < pMin)
            pMin = vet[i];
        if(vet[i] > pMax)
            pMax = vet[i];
    }
    printf("\n\npMin: %.2f\npMax: %.2f", pMin, pMax);
    getche();

    // 13 - vet shiftLeft
    float vetLeft[10], swap;
    // Inserção de valores no vetor
    for(int i = 0; i < 10; i++) {
        vetLeft[i] = (float)rand() / RAND_MAX * 100-1;
        printf("\n\ni: %d || vetor: %.2f", i, vetLeft[i]);
    }
    swap = vetLeft[0];
    printf("\n\nVetor deslocado");
    for(int i = 0; i < 10; i++) {
        vetLeft[i] = vetLeft[i+1];
        if(i == 9) {
            vetLeft[i] = swap;
        }
        printf("\n\ni: %d || vetor: %.2f", i, vetLeft[i]);
    }

    // 14 - vetor char
    char frase[20], fraseCopia[20], logico = 1;
    int comprimento;
    printf("\nDigite uma frase para verificar se ela é um palíndromo, ou seja, uma frase que possa ser lida de trás para frente. Exemplo: sacas. ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; // REMOVE O "\n" QUE O FGETS ADICIONA!
    maiusculo(frase);
    strncpy(fraseCopia, frase, 20);
    removerEspacos(fraseCopia, strlen(fraseCopia));
    comprimento = strlen(fraseCopia);
    for(int i = 0; i < comprimento / 2; i++) {
        if(fraseCopia[i] != fraseCopia[comprimento - 1 - i]) 
            logico = 0;
            break;
    }
    if(logico == 1)
        printf("\nA frase %s é palindrômica!", frase);
    else
        printf("\nA frase %s não é palindrômica!", frase);

    // 15
    float a15[12][2], b15[2][2], c[12][2];
    for(int i = 0; i < 12; i++) {
        
    }

    return 0;
}