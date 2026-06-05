// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-11 ... Soma com Numero Informado.           *");
    printf("\n************************************************************\n\n");

    int n;
    printf("Escolha um numero\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d + %d = %d\n", i, n, i + n);
    }

    return 0;
}
