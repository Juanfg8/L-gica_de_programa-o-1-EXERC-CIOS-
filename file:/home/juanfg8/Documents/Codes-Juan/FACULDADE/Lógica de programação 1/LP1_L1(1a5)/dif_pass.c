    #include <stdio.h>

    int main()
    {
        int valor1, valor2, diferenca;

        printf("Digite o primeiro valor inteiro: ");
        scanf("%d", &valor1);

        printf("Digite o segundo valor inteiro: ");
        scanf("%d", &valor2);

        if (valor1 > valor2) 
        {
        diferenca = valor1 - valor2;
             printf("A diferença entre o maior valor (%d) e o menor valor (%d) é: %d", valor1, valor2, diferenca);
        }
        
        else if (valor2 > valor1)
        {   diferenca = valor2 - valor1;

            printf ("A diferença entre o maior valor (%d) e o menor valor (%d) é: %d", valor2, valor1, diferenca);
        }

        else
        {
            printf("Ambos os valores são iguais");        
        }
        return 0;
        
    }