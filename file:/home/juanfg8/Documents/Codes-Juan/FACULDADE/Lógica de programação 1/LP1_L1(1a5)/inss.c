    #include <stdio.h>

    int main()
    {
        float salario, desconto, liquido;
        printf ("Digite o valor do salario do funcionario: ");
        scanf ("%f", &salario);

        printf ("Digite o valor do desconto na folha salarial: ");
        scanf ("%f", &desconto);

        liquido = salario - desconto;

        printf ("O salario liquido do funcionario e: %.2f", liquido);
         

    }