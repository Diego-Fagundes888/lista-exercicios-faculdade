/*
JPA-41: Número primo com while

Um estudante deseja verificar se determinado número é primo utilizando outro tipo de repetição.
O programa deve testar se o número possui apenas dois divisores usando while.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-41: Numero primo com while                           *");                        
    printf("\n************************************************************\n\n");

     int numero, divisor = 1, quantidadeDivisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (divisor <= numero)
    {
        if (numero % divisor == 0)
        {
            quantidadeDivisores++;
        }

        divisor++;
    }

    if (quantidadeDivisores == 2)
    {
        printf("%d e um numero primo.\n", numero);
    }
    else
    {
        printf("%d nao e um numero primo.\n", numero);
    }


    

}