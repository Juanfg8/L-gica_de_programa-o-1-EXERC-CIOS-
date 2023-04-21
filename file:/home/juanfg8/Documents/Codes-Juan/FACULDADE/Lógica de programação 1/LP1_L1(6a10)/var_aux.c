    #include <stdio.h>

    int main()
    {
        int num1, num2, aux;
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);

        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        aux = num1;
        num1 = num2;
        num2 = aux;
        printf("Os numeros trocados sao: %d e %d", num1, num2);
        return 0;
    }