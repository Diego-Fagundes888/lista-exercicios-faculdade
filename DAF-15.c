#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("\n************************************************************");
    printf("\n* Aluno: DIEGO FAGUNDES - RA 0027084                       *");
    printf("\n* Programa DAF-15 ... Caixas no Caminhao.                  *");
    printf("\n************************************************************\n\n");

     float alturaCaminhao, larguraCaminhao, comprimentoCaminhao;
    float alturaCaixa, larguraCaixa, comprimentoCaixa;

    int qtdAltura, qtdLargura, qtdComprimento;
    int totalCaixas;

    printf("\nDigite a altura do caminhao em cm: ");
    scanf("%f", &alturaCaminhao);

    printf("Digite a largura do caminhao em cm: ");
    scanf("%f", &larguraCaminhao);

    printf("Digite o comprimento do caminhao em cm: ");
    scanf("%f", &comprimentoCaminhao);

    printf("\nDigite a altura da caixa em cm: ");
    scanf("%f", &alturaCaixa);

    printf("Digite a largura da caixa em cm: ");
    scanf("%f", &larguraCaixa);

    printf("Digite o comprimento da caixa em cm: ");
    scanf("%f", &comprimentoCaixa);

    if (alturaCaminhao <= 0 || larguraCaminhao <= 0 || comprimentoCaminhao <= 0 ||
        alturaCaixa <= 0 || larguraCaixa <= 0 || comprimentoCaixa <= 0)
    {
        printf("\nValores invalidos. Todas as medidas devem ser maiores que zero.\n");
    }
    else
    {
        qtdAltura = alturaCaminhao / alturaCaixa;
        qtdLargura = larguraCaminhao / larguraCaixa;
        qtdComprimento = comprimentoCaminhao / comprimentoCaixa;

        totalCaixas = qtdAltura * qtdLargura * qtdComprimento;

        printf("\nQuantidade de caixas na altura: %d", qtdAltura);
        printf("\nQuantidade de caixas na largura: %d", qtdLargura);
        printf("\nQuantidade de caixas no comprimento: %d", qtdComprimento);

        printf("\n\nTotal de caixas que cabem no caminhao: %d\n", totalCaixas);
    }

    return 0;
}
