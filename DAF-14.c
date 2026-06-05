#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
     setlocale(LC_ALL, "Portuguese");
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-14 ... Tipo de Triangulo.                   *");
    printf("\n************************************************************\n\n");

    float lado1, lado2, lado3;

    printf("Qual tamanho do lado 1: ");
    scanf("%f", &lado1);
    printf("Qual tamanho do lado 2: ");
    scanf("%f", &lado2);
    printf("Qual tamanho do lado 3: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("Triangulo Equilatero");
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        printf("Triangulo Isosceles");
    }
    else
    {
        printf("Triangulo Escaleno");
    }

    return 0;
}
