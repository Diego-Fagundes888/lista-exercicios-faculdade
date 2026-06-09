/*
JPA-25: Notas e aprovação

Uma escola deseja automatizar a verificação das notas dos alunos.
O sistema deve receber a média final do estudante e informar se ele foi aprovado, em recuperação ou
reprovado.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* JPA-25: Notas e aprovacao");
    printf("\n************************************************************\n\n");

    int notaFinal;

    printf("Qual a nota final do aluno: ");
    scanf("%d", &notaFinal);

    if (notaFinal >= 6)
    {
        printf("Aluno aprovado");
    }
    else
    {
        printf("Aluno reprovado");
    }
    
    
}