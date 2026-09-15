// =====================================================
// EXERCICIO 1.1
// =====================================================

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char nome[] = "Joao";
    int idade = 25;
    float altura = 1.75;
    bool possui_carteira = true;

    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Possui carteira de motorista: %s\n",
           possui_carteira ? "Verdadeiro" : "Falso");

    return 0;
}


// =====================================================
// EXERCICIO 1.2
// =====================================================

#include <stdio.h>

int main()
{
    int A = 5;
    int B = 10;
    int temp;

    temp = A;
    A = B;
    B = temp;

    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}


// =====================================================
// EXERCICIO 2.1
// =====================================================

#include <stdio.h>

int main()
{
    char produtos[3][20] = {"Cafe", "Leite", "Pao"};
    float precos[3] = {5.00, 4.50, 3.00};

    int opcao;
    float valor_pago;
    float troco;

    printf("=== Produtos ===\n");
    printf("1 - Cafe: R$ 5,00\n");
    printf("2 - Leite: R$ 4,50\n");
    printf("3 - Pao: R$ 3,00\n");

    printf("Escolha o produto (1-3): ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 3)
    {
        printf("\nVoce escolheu: %s\n", produtos[opcao - 1]);
        printf("Preco: R$ %.2f\n", precos[opcao - 1]);

        printf("Informe o valor pago: R$ ");
        scanf("%f", &valor_pago);

        if (valor_pago >= precos[opcao - 1])
        {
            troco = valor_pago - precos[opcao - 1];

            printf("Troco: R$ %.2f\n", troco);
        }
        else
        {
            printf("Valor insuficiente!\n");
        }
    }
    else
    {
        printf("Opcao invalida!\n");
    }

    return 0;
}


// =====================================================
// EXERCICIO 2.2
// =====================================================

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int idade;
    float altura;
    bool aprovado;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    aprovado = idade >= 12 && altura >= 1.40;

    if (aprovado)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Negado\n");
    }

    return 0;
}


// =====================================================
// EXERCICIO 3.1
// =====================================================

#include <stdio.h>

int main()
{
    int n;
    int s;

    printf("Digite um numero: ");
    scanf("%d", &n);

    s = n % 2;

    if (s == 1)
    {
        printf("Impar\n");
    }
    else
    {
        printf("Par\n");
    }

    return 0;
}


// =====================================================
// EXERCICIO 3.2
// =====================================================

#include <stdio.h>

int main()
{
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota >= 7 && nota <= 10)
    {
        printf("Aprovado\n");
    }
    else if (nota >= 5 && nota < 7)
    {
        printf("Recuperacao\n");
    }
    else if (nota >= 0 && nota < 5)
    {
        printf("Reprovado\n");
    }
    else
    {
        printf("Nota invalida\n");
    }

    return 0;
}


// =====================================================
// EXERCICIO 4.1
// =====================================================

#include <stdio.h>

int main()
{
    char dias[7][20] = {
        "domingo",
        "segunda",
        "terca",
        "quarta",
        "quinta",
        "sexta",
        "sabado"
    };

    for (int i = 0; i < 7; i++)
    {
        printf("%d - %s\n", i + 1, dias[i]);
    }

    return 0;
}


// =====================================================
// EXERCICIO 4.2
// =====================================================

#include <stdio.h>

int main()
{
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operador)
    {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
            if (num2 != 0)
            {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            }
            else
            {
                printf("Erro: nao e possivel dividir por zero!\n");
            }
            break;

        default:
            printf("Operador invalido!\n");
    }

    return 0;
}


// =====================================================
// EXERCICIO 5.1
// =====================================================

#include <stdio.h>

int main()
{
    int n;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        resultado = n * i;

        printf("%d x %d = %d\n", n, i, resultado);
    }

    return 0;
}


// =====================================================
// EXERCICIO 5.2
// =====================================================

#include <stdio.h>

int main()
{
    for (int i = 0; i <= 100; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}


// =====================================================
// EXERCICIO 6.1
// =====================================================

#include <stdio.h>
#include <string.h>

int main()
{
    char senha[] = "1234";
    char s[20];

    printf("Digite a senha: ");
    scanf("%19s", s);

    while (strcmp(s, senha) != 0)
    {
        printf("Senha incorreta, tente novamente\n");

        printf("Digite a senha: ");
        scanf("%19s", s);
    }

    printf("Senha correta\n");

    return 0;
}


// =====================================================
// EXERCICIO 6.2
// =====================================================

#include <stdio.h>

int main()
{
    int contador = 10;

    while (contador >= 0)
    {
        printf("%d\n", contador);

        contador--;
    }

    printf("Fim!\n");

    return 0;
}


// =====================================================
// EXERCICIO 7.1
// =====================================================

#include <stdio.h>

int main()
{
    int opcao;

    while (1)
    {
        printf("\n");
        printf("1 - Ver saldo\n");
        printf("2 - Fazer deposito\n");
        printf("3 - Sair\n");

        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("---- Aqui esta seu saldo ----\n");
        }
        else if (opcao == 2)
        {
            printf("------ Fazer um deposito ------\n");
        }
        else if (opcao == 3)
        {
            printf("------- Saindo --------\n");
            break;
        }
        else
        {
            printf("Opcao invalida\n");
        }
    }

    return 0;
}


// =====================================================
// EXERCICIO 7.2
// =====================================================

#include <stdio.h>

int main()
{
    int n = 7;
    int r;

    while (1)
    {
        printf("Tente adivinhar qual e o numero\n");

        printf("Numero: ");
        scanf("%d", &r);

        if (r == n)
        {
            printf("Voce acertou!!!!\n");
            break;
        }
        else
        {
            printf("Errou, continue tentando\n");
        }
    }

    return 0;
}