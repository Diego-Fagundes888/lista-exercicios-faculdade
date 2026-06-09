/*
JPA-19: Ordem crescente (três números)

Durante uma competição escolar, três alunos obtiveram pontuações diferentes.
O sistema precisa organizar os valores do menor para o maior para facilitar a classificação.
O programa deve receber três números e exibi-los em ordem crescente.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-19: Ordem crescente (tres numeros)");
    printf("\n************************************************************\n\n");

    float nota1, nota2, nota3;

    printf("Digite 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    if (nota1 > nota3)
    {
        float tmp = nota3;
        nota3 = nota1;
        nota1 = tmp;
    }
    if (nota1 > nota2)
    {
        float tmp = nota2;
        nota2 = nota1;
        nota1 = tmp;
    }
    if (nota2 > nota3)
    {
        float tmp = nota3;
        nota3 = nota2;
        nota2 = tmp;
    }
    printf("%.2f, %.2f, %.2f,", nota1, nota2, nota3);
}