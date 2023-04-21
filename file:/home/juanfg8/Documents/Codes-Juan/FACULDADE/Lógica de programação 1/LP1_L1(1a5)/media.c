    #include <stdio.h>

    int main ()
    {
        float num1, num2, num3, media;
        printf("Digite o primeiro numero: ");
        scanf ("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf ("%f", &num2);
        printf("Digite o terceiro numero: ");
        scanf ("%f", &num3);
        media = (num1 + num2 + num3) / 3;

        printf("A media dos tres numeros digitados a cima e: %.2f", media);

        return 0;


    }