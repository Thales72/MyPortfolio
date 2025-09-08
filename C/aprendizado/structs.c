#include <stdio.h>
#include <locale.h>
#include <string.h>
#define n 50

struct typeFilial {
    int position, codigo, anoInicial, anoFinal;
    char descricao[20], marca[15], modelo[15], excluido;
    float precoVenda, quantidadeVendida;
};

struct typeMatriz {
    int position, codigo;
    float precoVenda, totalVenda;
    char excluido;
};

// a
void cadastrar(int tamanho, struct typeFilial *filial) {
    char fimCadastro = 1;
    int i = 0;
    while(fimCadastro == 1 && i < tamanho) {
        printf("Cadastre o CÓDIGO\n");
        filial[i].position = i + 1;
        filial[i].excluido = 0;
        scanf("%d", &filial[i].codigo);
        printf("Cadastre o ANO INICIAL\n");
        scanf(" %d", &filial[i].anoInicial);
        printf("Cadastre o ANO FINAL\n");
        scanf(" %d", &filial[i].anoFinal);
        fflush(stdin);
        printf("Cadastre a DESCRIÇÃO\n");
        gets(filial[i].descricao);
        printf("Cadastre a MARCA\n");
        gets(filial[i].marca);
        printf("Cadastre o MODELO\n");
        gets(filial[i].modelo);
        printf("Cadastre o PREÇO DE VENDA\n");
        scanf(" %f", &filial[i].precoVenda);
        printf("Cadastre a QUANTIDADE VENDIDA\n");
        scanf(" %f", &filial[i].quantidadeVendida);
        i++;
        printf("\nDeseja encerrar a inserção? 1 para continuar, 0 para interromper\n");
        scanf(" %c", &fimCadastro);
    }
}

// b
void totalizador(int tamanho, struct typeFilial *filial1, struct typeFilial *filial2, struct typeMatriz *matriz)

int main() {
    setlocale(LC_ALL, "Portuguese");

    /* struct obra {
        char codigo[20];
        char nome[50];
        char autor[50];
        char editora[50];
        int paginas, doado;
    };

    struct obra livro1 = {"12345", "Espiral", "Rafael", "HP", 50, 0}; */

    struct typeFilial filial1[n];
    struct typeFilial filial2[n];
    struct typeMatriz matriz[n];
    cadastrar(10, filial1);
    printf("%d", filial1[0].codigo);
    printf("%s", filial1[0].descricao);
    printf("%s", filial1[0].marca);

    return 0;
}
