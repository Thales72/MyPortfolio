#include <stdio.h>
#include <conio.h>

// programa inicial

main(){
    char nome[30];

    printf("Olá, qual o seu nome? ");
    gets(nome);
    printf("Bom dia %s, seja bem vindo!",nome);
    for(int i=0;i<10;i++)
        printf("/n%d,",i);
    getch();
}
