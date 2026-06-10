/*
JPA-55: Ler números e mostrar o maior (até digitar negativo)

Uma pesquisa escolar registra notas positivas dos participantes.
O programa deve continuar recebendo números até que um valor negativo seja digitado. Ao final, deve
mostrar qual foi o maior número positivo informado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-55: Ler numeros e mostrar o maior                    *");
    printf("\n************************************************************\n\n");

    int numero, maior = 0, quantidadePositivos = 0;

    do
    {
        printf("Digite um numero positivo ou negativo para sair: ");
        scanf("%d", &numero);

        if (numero >= 0)
        {
            if (quantidadePositivos == 0 || numero > maior)
            {
                maior = numero;
            }

            quantidadePositivos++;
        }

    } while (numero >= 0);

 
        printf("O maior numero informado foi: %d", maior);
    
}
