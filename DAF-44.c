/*
JPA-44:  Contar dígitos de um número

Um sistema bancário deseja identificar quantos dígitos possui um número informado.
O programa deve receber um número positivo e mostrar quantos dígitos ele possui.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-44:  Contar dígitos de um número                   *");                        
    printf("\n************************************************************\n\n");

    int numero, quantidadeDigitos = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    while (numero > 0)
    {
        numero = numero / 10;
        quantidadeDigitos++;
    }

    printf("O numero possui %d digitos", quantidadeDigitos);

}
