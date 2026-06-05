// Diego Fagundes - 0027084
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-13 ... Numeros Pares ate 50.                *");
    printf("\n************************************************************\n\n");

    for (int i = 1; i <= 50; i++)
    {
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
