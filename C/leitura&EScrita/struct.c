#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

typedef struct{
    char nome[50], sexo, saude[4];
    int idade;
} Conscrito;

void toUpperCase(char str[]) {
    for(int i = 0; i < strlen(str); i++)
        str[i] = toupper(str[i]);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    // Escrever um algoritmo que leia os dados de N pessoas (nome, sexo, idade e saúde) e informe se está apta ou não para cumprir o serviço militar obrigatório. Informe os totais.
    int n, i, aptos = 0, inaptos = 0;

    printf("Informe a quantidade de entrada de dados: ");
    scanf(" %d", &n);
    Conscrito pessoa[n];
    for(int i = 0; i < n; i++) {
        printf("\n\nDigite o nome, a idade, o sexo [M ou F] e a saúde [BOA ou RUIM]: ");
        scanf(" %s", pessoa[i].nome);
        scanf(" %d", &pessoa[i].idade);
        scanf(" %c", &pessoa[i].sexo);
        scanf(" %s", pessoa[i].saude);
        pessoa[i].sexo = toupper(pessoa[i].sexo);
        toUpperCase(pessoa[i].saude);
        printf(pessoa[i].nome);
        if (pessoa[i].idade >= 18 && strcmp(pessoa[i].saude, "BOA") == 0 && pessoa[i].sexo == 'M') {
            printf("O candidato %s está apto ao serviço militar\n", pessoa[i].nome);
            aptos++;
        } else {
            printf("O candidato %s não está apto ao serviço militar\n", pessoa[i].nome);
            inaptos++;
        }
    }
    
    printf("\nAs pessoas aptas para o serviço militar obrigatório são %d, e as inaptas são %d", aptos, inaptos);
    return 0;
}