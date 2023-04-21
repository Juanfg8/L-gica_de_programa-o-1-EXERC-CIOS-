    #include <stdio.h>

    int main()
    {
        int num1, num2, aux;
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);

        printf("Digite o segundo numero: ");
        scanf("%d", &num2);

        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;        
        
        printf("Depois da troca: num1 = %d e num2 = %d\n", num1, num2);
    }