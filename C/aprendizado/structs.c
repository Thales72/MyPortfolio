#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct obra {
        char codigo[20];
        char nome[50];
        char autor[50];
        char editora[50];
        int paginas, doado;
    };

    struct obra livro1 = {"12345", "Espiral", "Rafael", "HP", 50, 0};

    printf("%s", livro1.nome);
    return 0;
}
