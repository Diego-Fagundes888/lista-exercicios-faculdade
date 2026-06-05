#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-16 ... Multiplo de 3 e/ou 5.                *");
    printf("\n************************************************************\n\n");

    int op;

    printf("Escolha um numero para o pedido: ");
    scanf("%d", &op);

    if (op % 3 == 0)
    {
        printf("Parabens Voce ganhou um refrigerante");
    }
    else if (op % 5 == 0)
    {
        printf("Parabens Voce ganhou uma sobremesa");
    }
    else if (op % 2 == 0)
    {
        printf("Parabens Voce ganhou dois brindes");
    }
    else
    {
        printf("O numero escolhido nao e o premiado mais sorte da proxima vez");
    }
    
    
    
    

}
