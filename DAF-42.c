/*
JPA-42: Quantidade de números ímpares digitados

Uma pesquisa escolar precisa analisar números digitados pelos participantes.
O programa deve pedir 10 números e informar quantos deles são ímpares.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-42: Quantidade de números ímpares digitados          *");                        
    printf("\n************************************************************\n\n");

    int numero, quantidadeImpares = 0, i = 1;

    while (i <= 10)
    {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        if (numero % 2 != 0)
        {
            quantidadeImpares++;
        }

        i++;
    }

    printf("Quantidade de numeros impares: %d", quantidadeImpares);

}
