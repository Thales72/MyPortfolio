#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
    char oper;
    float num1, num2;
    printf (" Digite entre espacos - numero operador numero: ");
    scanf (" %f %c %f", &num1, &oper, &num2);
    switch (oper) {
        case '+':
            printf (" = %f", num1 + num2);
            break;
        case '-':
            printf (" = %f", num1 - num2);
            break;
        case '*':
            printf (" = %f", num1 * num2);
            break;
        case '/':
            printf (" = %f", num1 / num2);
            break;
        default:
            printf ("\n Operador invalido...");
    }
    getch();

    return 0;
}
