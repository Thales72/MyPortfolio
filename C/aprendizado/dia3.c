#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char vetor1[25] = "Algortms Estrutuados";
    char vetor2[25] = "Algoritmos Estruturados";

    for(int i = 0; i < 25; i++) {
        if(vetor1[i] != vetor2[i]) {
            int tamanho = strlen(vetor1);
            for(int j = tamanho; j >= i; j--) {
                vetor1[j+1] = vetor1[j];
            }
            vetor1[i] = vetor2[i];
            printf("%s\n", vetor1);
        }
    }

    return 0;
}