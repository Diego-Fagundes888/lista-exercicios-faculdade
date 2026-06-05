// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-12 ... Tabuada.                             *");
    printf("\n************************************************************\n\n");

    int n;
    printf("Escolha o numero da tabuada\n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n",i, n, i*n);
    }

        return 0;
}
