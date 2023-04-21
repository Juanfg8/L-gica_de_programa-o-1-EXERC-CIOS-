    #include <stdio.h>

    int main()
    {
        float fah, cel;

        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &fah);

        cel=(fah-32)*5/9;
        printf("A temperatura convertida para Celsius é: %.2f", cel);
    }