#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8); /// Para imprimir caracteres especiais

    setlocale(LC_ALL, "pt.br.UTF-8"); /// Para imprimir caracteres especiais

    /// Mensagem 
    printf("---------------------------\n");
    printf("|                         |\n");
    printf("|    Bem vindo a UCB!!!   |\n");
    printf("|                         |\n");
    printf("---------------------------\n\n");

    printf("Sistema de verificação de notas\n\n");

    /// Declaração de variáveis
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float nota5;

    printf("Digite a nota 1: \n");
    scanf("%f", &nota1);

    printf("Digite a nota 2: \n");
    scanf("%f", &nota2);

    printf("Digite a nota 3: \n");
    scanf("%f", &nota3);

    printf("Digite a nota 4: \n");
    scanf("%f", &nota4);

    printf("Digite a nota 5: \n");
    scanf("%f", &nota5);

    /// Condicional para verificar se as notas estão entre 0 e 10
    while (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10 || nota4 < 0 || nota4 > 10 || nota5 < 0 || nota5 > 10)
    {
        printf("Uma nota está inválida, digite entre 0 e 10\n");
    }

    /// Cálculo da média & impressão
    float media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf("A média das notas é: %.2f\n", media);

    /// Condicional
    if (media >= 7.00)
    {
        printf("Você foi aprovado!\n");
    }
    else
    {
        printf("Você foi reprovado!\n");
    }

    return 0;
}