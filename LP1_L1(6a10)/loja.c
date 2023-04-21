#include <stdio.h>
int main()
{
    int valor_produto, entrada, prestacao, qnt_par;
    float duas_prestacoes;

    printf("Digite o valor do produto: ");
    scanf("%d", &valor_produto);

    printf("Digite o valor da entrada: ");
    scanf("%d", &entrada);

    printf("Digite a quantidade de parcelas: ");
    scanf("%d", &qnt_par);

    prestacao = (valor_produto - entrada) / qnt_par;
    duas_prestacoes = qnt_par * prestacao;


    if (entrada >= prestacao)
    {
        printf("O valor da entrada eh : R$ %d", valor_produto);
        printf("o valor das prestacoes eh: %.2f", duas_prestacoes);
    }
    else
        printf("O Valor da entrada não pode ser menor que o valor de cada parcela: ");
}