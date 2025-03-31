#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    // 1
    float dt, combustivel;
    printf("Informe a distância percorrida e o combustível gasto: ");
    scanf(" %f", &dt);
    scanf(" %f", &combustivel);
    printf("O gasto médio de combustível foi de: %0.2f quilômetros por litro", dt/combustivel);

    // 2
    char nome[40];
    float salario, vendas;
    printf("\n\nInforme o nome do vendedor, o seu salário e o número de vendas em valor monetário: ");
    scanf(" %s", &nome);
    scanf(" %f", &salario);
    scanf(" %f", &vendas);
    printf("O vendedor de nome %s, com salário fixo R$: %f, receberá um valor total, acrescido da comissão de 12%% de: %0.2f reais", nome, salario, salario + (vendas*0.12));

    // 3
    int a, b, aux;
    printf("\n\nInforme os valores da variáveis A e B: ");
    scanf(" %d", &a);
    scanf(" %d", &b);
    aux = a;
    a = b;
    b = aux;
    printf("Os valores das variáveis trocados são: A = %d, B = %d", a, b);

    // 4
    float cotacao, dolares;
    printf("\n\nInforme a cotação do dólar em real e a quantidade de dólares: ");
    scanf(" %f", &cotacao);
    scanf(" %f", &dolares);
    printf("Este valor convertido em reais equivale a: R$: %0.2f", cotacao*dolares);

    // 5
    float capital;
    printf("\n\nInforme o valor do capital a ser depositado a uma taxa de 0.7%% ao mês: ");
    scanf(" %f", &capital);
    printf("Esse valor aplicado em um mês rende um montante de R$: %0.2f", capital + (capital*0.007));

    // 6
    float valorCompra;
    int prestacoes;
    printf("\n\nInforme o valor da compra e o número de prestações (até 5 vezes): ");
    scanf(" %f", &valorCompra);
    scanf(" %d", &prestacoes);
    printf("O valor da compra com essa quantidade de prestações é R$: %0.2f", valorCompra/prestacoes);

    // 7
    float taxa, valorProduto;
    printf("\n\nInforme o valor do produto e a taxa de acréscimo [valor em porcentagem]: ");
    scanf(" %f", &valorProduto);
    scanf(" %f", &taxa);
    printf("O valor final é de: R$: %0.2f", valorProduto + valorProduto*(taxa/100));

    // 8
    float precoFabric;
    printf("\n\nInforme o custo de fábrica: ");
    scanf(" %f", &precoFabric);
    printf("O valor final do carro é de: %f", (precoFabric * 1.45)*1.3);

    // 9
    float massa, altura;
    printf("\n\nDigite a sua massa e altura: ");
    scanf(" %f", &massa);
    scanf(" %f", &altura);
    printf("O seu IMC é de: %f", massa/(altura*altura));

    // 10
    float deltaX, velocidadeM;
    printf("\n\nDigite a distância percorrida e a velocidade média: ");
    scanf(" %f", $deltaX);
    scanf(" %f", $velocidadeM);
    printf("O tempo que levou para percorrer este percurso é de: %f", deltaX/velocidadeM);

    // 11



    getch();
    return 0;
}
