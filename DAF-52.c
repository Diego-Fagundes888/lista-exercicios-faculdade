/*
JPA-52: Soma até o número ser múltiplo de 10

Um sistema de pontuação recebe vários valores digitados pelo usuário.
Os números devem ser somados continuamente até que seja digitado um número múltiplo de 10. Ao final, o
programa deve mostrar a soma total dos valores informados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-52: Soma ate o numero ser multiplo de 10             *");
    printf("\n************************************************************\n\n");

    int numero, soma = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;

    } while (numero % 10 != 0);

    printf("Soma total: %d", soma);

}
