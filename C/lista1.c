#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // 1
    float dt, combustivel;
    printf("Informe a distância percorrida e o combustível gasto: ");
    scanf(" %f", &dt);
    scanf(" %f", &combustivel);
    printf("O gasto médio de combustível foi de: %0.2f quilômetros por litro\n", dt / combustivel);

    // 2
    char nome[40];
    float salario, vendas;
    printf("\n\nInforme o nome do vendedor, o seu salário e o número de vendas em valor monetário: ");
    scanf(" %s", nome);
    scanf(" %f", &salario);
    scanf(" %f", &vendas);
    printf("O vendedor de nome %s, com salário fixo R$: %0.2f, receberá um valor total, acrescido da comissão de 12%% de: %0.2f reais\n", nome, salario, salario + (vendas * 0.12));

    // 3
    int a, b, aux;
    printf("\n\nInforme os valores das variáveis A e B: ");
    scanf(" %d", &a);
    scanf(" %d", &b);
    aux = a;
    a = b;
    b = aux;
    printf("Os valores das variáveis trocados são: A = %d, B = %d\n", a, b);

    // 4
    float cotacao, dolares;
    printf("\n\nInforme a cotação do dólar em real e a quantidade de dólares: ");
    scanf(" %f", &cotacao);
    scanf(" %f", &dolares);
    printf("Este valor convertido em reais equivale a: R$: %0.2f\n", cotacao * dolares);

    // 5
    float capital;
    printf("\n\nInforme o valor do capital a ser depositado a uma taxa de 0.7%% ao mês: ");
    scanf(" %f", &capital);
    printf("Esse valor aplicado em um mês rende um montante de R$: %0.2f\n", capital + (capital * 0.007));

    // 6
    float valorCompra;
    int prestacoes;
    printf("\nInforme o valor da compra e o número de prestações (até 5 vezes): ");
    scanf(" %f", &valorCompra);
    scanf(" %d", &prestacoes);
    printf("O valor da compra com essa quantidade de prestações é R$: %0.2f\n", valorCompra / prestacoes);

    // 7
    float taxa, valorProduto;
    printf("\n\nInforme o valor do produto e a taxa de acréscimo [valor em porcentagem]: ");
    scanf(" %f", &valorProduto);
    scanf(" %f", &taxa);
    printf("O valor final é de: R$: %0.2f\n", valorProduto + valorProduto * (taxa / 100));

    // 8
    float precoFabric;
    printf("\n\nInforme o custo de fábrica: ");
    scanf(" %f", &precoFabric);
    printf("O valor final do carro é de: %0.2f\n", (precoFabric * 1.45) * 1.3);

    // 9
    float massa, altura;
    printf("\n\nDigite a sua massa e altura: ");
    scanf(" %f", &massa);
    scanf(" %f", &altura);
    printf("O seu IMC é de: %0.2f\n", massa / (altura * altura));

    // 10
    float deltaX, velocidadeM;
    printf("\n\nDigite a distância percorrida e a velocidade média: ");
    scanf(" %f", &deltaX);
    scanf(" %f", &velocidadeM);
    printf("O tempo que levou para percorrer este percurso é de: %0.2f\n", deltaX / velocidadeM);

    // 11
    int n1, n2;
    printf("\n\nDigite o primeiro e o segundo valor: ");
    scanf(" %d", &n1);
    scanf(" %d", &n2);
    if (n1 < n2) {
        printf("O valor %d é maior que %d\n", n2, n1);
    } else if (n1 == n2) {
        printf("Os valores são iguais (%d)\n", n1);
    } else {
        printf("O valor %d é maior que %d\n", n1, n2);
    }

    // 12
    int num1;
    printf("\n\nDigite o valor de um número: ");
    scanf(" %d", &num1);
    if (num1 >= 100 && num1 <= 200) {
        printf("%d está em um intervalo entre 100 a 200\n", num1);
    } else {
        printf("%d não está num intervalo entre 100 e 200\n", num1);
    }

    // 13
    float nota1, nota2, nota3;
    printf("\n\nDigite o valor das três notas do aluno: ");
    scanf(" %f", &nota1);
    scanf(" %f", &nota2);
    scanf(" %f", &nota3);
    float media = (nota1 + nota2 + nota3) / 3;
    if (media >= 7) {
        printf("O aluno está aprovado! Parabéns!\n");
    } else if (media <= 5) {
        printf("O aluno está reprovado! Condolências!\n");
    } else {
        printf("O aluno ficou para exame final.\n");
    }

    // 14
    int numeros, contagem = 0;
    for (int i = 0; i < 80; i++) {
        printf("\n\nDigite o %dº número: ", i + 1);
        scanf(" %d", &numeros);
        if (numeros >= 10 && numeros <= 150) {
            contagem++;
        }
    }
    printf("No total, %d números digitados estão no intervalo de 10 a 150\n", contagem);

    // 15
    int idade, iteracao = 0;
    while (iteracao < 50) {
        printf("\n\nDigite a %dº idade: ", iteracao + 1);
        scanf(" %d", &idade);
        if (idade >= 18) {
            printf("Maior de idade\n");
        } else {
            printf("Menor de idade\n");
        }
        iteracao++;
    }

    // 16
    int contagemM = 0, contagemF = 0;
    char genero[2]; // Ajustado para armazenar strings corretamente
    for (int i = 0; i < 30; i++) {
        printf("\n\nInforme o nome da %dº pessoa, juntamente de seu gênero ([M] ou [F]): ", i + 1);
        scanf(" %s", nome);
        scanf(" %s", genero);
        if (strcmp(genero, "M") == 0) {
            contagemM++;
        } else if (strcmp(genero, "F") == 0) {
            contagemF++;
        }
        printf("A pessoa %s certamente é do sexo %s\n", nome, genero);
    }
    printf("No total, houve %d homens e %d mulheres\n", contagemM, contagemF);

    // 17
    int n;
    char saude[10]; // Ajustado para armazenar a string corretamente
    contagem = 0;
    printf("\n\nDigite a quantidade de entrada de dados: ");
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nDigite o nome, a idade, saúde [BOA ou RUIM] e o gênero [M ou F]: ");
        scanf(" %s", nome);
        scanf(" %d", &idade);
        scanf(" %s", saude);
        scanf(" %s", genero);
        if (idade >= 18 && strcmp(saude, "BOA") == 0 && strcmp(genero, "M") == 0) {
            printf("%s está apto para servir\n", nome);
            contagem++;
        } else {
            printf("%s não está apto para servir\n", nome);
        }
    }
    printf("No total, %d poderão servir de %d pessoas\n", contagem, n);

    // 18
    float precoVenda, mediaCusto = 0, mediaVenda = 0;
    for(int i = 0; i < 40; i++) {
        printf("\n\nDigite o valor de fabricação e de venda do %dº produto", i + 1);
        scanf(" %f", &precoFabric);
        scanf(" %f", &precoVenda);
        mediaCusto = mediaCusto + precoFabric;
        mediaVenda = mediaVenda + precoVenda;
        if((precoVenda-precoFabric) > 0) {
            printf("O preço de venda é maior. Houve lucro\n");
        } else if((precoVenda-precoFabric) == 0) {
            printf("Empate\n");
        } else {
            printf("Houve prejuízo!\n");
        }
    }
    printf("O valor final da média de venda foi de %0.2f reais, e a de custo de fabricação %0.2f reais", mediaVenda/40, mediaCusto/40);

    // 19
    printf("\n\nDigite um número: ");
    scanf(" %d", &num1);
    if(num1 > 80) {
        printf("%d é maior que 80\n", num1);
    } else if(num1 < 25) {
        printf("%d é menor que 25\n", num1);
    } else if(num1 == 40) {
        printf("%d é igual a 40\n", num1);
    } else {
        printf("Inválido");
    }

    // 20
    printf("\n\nInforme a quantidade de entrada de dados: ");
    scanf(" %d", &n);
    for(int i = 0; i < n; i++) {
        printf("\n\nDigite o %dº número: ", i+1);
        scanf(" %d", &num1);
        if(num1 > 0) {
            printf("O número é positivo");
        } else if(num1 < 0) {
            printf("O número é negativo");
        } else {
            printf("O número é igual a 0");
        }
    }

    getch();
    return 0;
}