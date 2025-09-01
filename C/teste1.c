#include <stdio.h>
#include <stdlib.h>

int main() {
    int divisor;
    unsigned long long casas;
    printf("Digite o divisor (inteiro > 1): ");
    scanf("%d", &divisor);
    printf("Quantas casas decimais deseja? ");
    scanf("%llu", &casas); // "%llu" para ler unsigned long long

    // Alocando memória dinamicamente com base no valor lido
    int *resultado = calloc(casas, sizeof(int));
    if (!resultado) {
        printf("Falha ao alocar memória.\n");
        return 1;
    }

    int resto = 1;
    for (unsigned long long i = 0; i < casas; i++) {
        resto *= 10;
        resultado[i] = resto / divisor;
        resto %= divisor;
    }

    FILE *arquivo = fopen("resultado.txt", "w");
    if (!arquivo) {
        printf("Erro ao criar arquivo.\n");
        free(resultado);
        return 1;
    }

    fprintf(arquivo, "0.");
    for (unsigned long long i = 0; i < casas; i++) {
        fprintf(arquivo, "%d", resultado[i]);
        if ((i + 1) % 100 == 0) fprintf(arquivo, "\n");
    }

    fclose(arquivo);
    free(resultado);
    printf("Resultado salvo em 'resultado.txt'.\n");
    return 0;
}