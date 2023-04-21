    #include <stdio.h>

    int main()
    {
        int a;
        int b;
        int soma;
        printf ("Digite o primeiro numero inteiro: ");
        scanf("%d", &a);
        
        printf ("Digite o segundo numero: ");
        scanf ("%d", &b);

        soma = a + b;
        printf ("O valor da soma %d e %d eh: %d", a, b, soma);
        return 0;
    }