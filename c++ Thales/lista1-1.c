#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    // 1
    float dt, combustivel;
    printf("Informe a dist�ncia percorrida e o combust�vel gasto: ");
    scanf(" %f", &dt);
    scanf(" %f", &combustivel);
    printf("O gasto m�dio de combust�vel foi de: %0.2f quil�metros por litro", dt/combustivel);

    // 2
    char nome[40];
    float salario, vendas;
    printf("\n\nInforme o nome do vendedor, o seu sal�rio e o n�mero de vendas em valor monet�rio: ");
    scanf(" %s", &nome);
    scanf(" %f", &salario);
    scanf(" %f", &vendas);
    printf("O vendedor de nome %s, com sal�rio fixo R$: %f, receber� um valor total, acrescido da comiss�o de 12%% de: %0.2f reais", nome, salario, salario + (vendas*0.12));

    // 3
    int a, b, aux;
    printf("\n\nInforme os valores da vari�veis A e B: ");
    scanf(" %d", &a);
    scanf(" %d", &b);
    aux = a;
    a = b;
    b = aux;
    printf("Os valores das vari�veis trocados s�o: A = %d, B = %d", a, b);

    // 4
    float cotacao, dolares;
    printf("\n\nInforme a cota��o do d�lar em real e a quantidade de d�lares: ");
    scanf(" %f", &cotacao);
    scanf(" %f", &dolares);
    printf("Este valor convertido em reais equivale a: R$: %0.2f", cotacao*dolares);

    // 5
    float capital;
    printf("\n\nInforme o valor do capital a ser depositado a uma taxa de 0.7%% ao m�s: ");
    scanf(" %f", &capital);
    printf("Esse valor aplicado em um m�s rende um montante de R$: %0.2f", capital + (capital*0.007));

    // 6
    float valorCompra;
    int prestacoes;
    printf("\n\nInforme o valor da compra e o n�mero de presta��es (at� 5 vezes): ");
    scanf(" %f", &valorCompra);
    scanf(" %d", &prestacoes);
    printf("O valor da compra com essa quantidade de presta��es � R$: %0.2f", valorCompra/prestacoes);

    // 7
    float taxa, valorProduto;
    printf("\n\nInforme o valor do produto e a taxa de acr�scimo [valor em porcentagem]: ");
    scanf(" %f", &valorProduto);
    scanf(" %f", &taxa);
    printf("O valor final � de: R$: %0.2f", valorProduto + valorProduto*(taxa/100));

    // 8
    float precoFabric;
    printf("\n\nInforme o custo de f�brica: ");
    scanf(" %f", &precoFabric);
    printf("O valor final do carro � de: %f", (precoFabric * 1.45)*1.3);

    // 9
    float massa, altura;
    printf("\n\nDigite a sua massa e altura: ");
    scanf(" %f", &massa);
    scanf(" %f", &altura);
    printf("O seu IMC � de: %f", massa/(altura*altura));

    // 10
    float deltaX, velocidadeM;
    printf("\n\nDigite a dist�ncia percorrida e a velocidade m�dia: ");
    scanf(" %f", $deltaX);
    scanf(" %f", $velocidadeM);
    printf("O tempo que levou para percorrer este percurso � de: %f", deltaX/velocidadeM);

    // 11



    getch();
    return 0;
}
