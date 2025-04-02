#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char texto[1000];
    char memBuffer[5000];
    arquivo = fopen("sample.txt", "w");
    if(arquivo == NULL) {
        perror("Não foi possível acessar a memória…\n");
        printf("Código do erro: %d\n", errno);
        return 1;
    }

    fprintf(arquivo, "Writen bits!");
    fclose(arquivo);

    arquivo = fopen("sample.txt", "r");
    if(arquivo == NULL) {
        perror("Não foi possível acessar a memória…\n");
        printf("Código do erro: %d\n", errno);
        return 1;
    }

    while(fgets(texto, 100, arquivo) != NULL) {
        printf("AMOSTRA 1: %s\n\n\n", texto);
    }
    fclose(arquivo);

    arquivo = fopen("sample.txt", "a"); // --> professor Lucas fofinho, observe o uso do parâmetro "a" aqui!
    if(arquivo == NULL) {
        perror("Não foi possível acessar a memória…\n");
        printf("Código do erro: %d\n", errno);
        return 1;
    }

    fprintf(arquivo, "\nPROFESSOR LUCAS MUITO FOFINHO. Parabéns por ser um grande professor! ♥\nNão esqueça de presentear a sua namorada!\nÉ isso! Fofinho 😌");
    fclose(arquivo);

    arquivo = fopen("sample.txt", "r");
    if(arquivo == NULL) {
        perror("Não foi possível acessar a memória…\n");
        printf("Código do erro: %d\n", errno);
        return 1;
    }

    while (fgets(texto, sizeof(texto), arquivo) != NULL) {
        strcat(memBuffer, texto);
    }
    fclose(arquivo);

    printf("AMOSTRA 2 [PINTO CODE]: %s", memBuffer);

    return 0;
}