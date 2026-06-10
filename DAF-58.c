/*
JPA-58: A Calculadora de Bolso de 4 Operações

Você foi desafiado a criar o motor lógico de uma calculadora de bolso bem simples, daquelas
que só fazem as quatro operações básicas.
O Exercício: O algoritmo deve receber dois números reais (ex: 10 e 5) e um caractere
representando a operação matemática ('+', '-', '*', '/'). Use o Switch...Case para analisar o
caractere da operação e exibir o resultado do cálculo correspondente.
Caso receba um símbolo diferente dos quatro: Exiba "Operação matemática não reconhecida".
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-58: A Calculadora de Bolso de 4 Operacoes            *");
    printf("\n************************************************************\n\n");

    float numero1, numero2;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite a operacao (+, -, * ou /): ");
    scanf(" %c", &operacao);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    switch (operacao)
    {
    case '+':
        printf("Resultado: %.2f", numero1 + numero2);
        break;
    case '-':
        printf("Resultado: %.2f", numero1 - numero2);
        break;
    case '*':
        printf("Resultado: %.2f", numero1 * numero2);
        break;
    case '/':
        if (numero2 != 0)
        {
            printf("Resultado: %.2f", numero1 / numero2);
        }
        else
        {
            printf("Nao e possivel dividir por zero.");
        }
        break;
    default:
        printf("Operacao matematica nao reconhecida.");
        break;
    }

}
