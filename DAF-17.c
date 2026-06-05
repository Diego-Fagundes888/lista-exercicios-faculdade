#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-17 ... Sensor do Parque Tematico.           *");
    printf("\n************************************************************\n\n");

    int altura;

    printf("Qual a sua altura(cm): ");
    scanf("%d", &altura);

    if (altura >= 140)
    {
        printf("Luz verde");
    }
    else
    {
        printf("Luz vermelha");
    }
    
}
