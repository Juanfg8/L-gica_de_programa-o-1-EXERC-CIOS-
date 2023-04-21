    #include <stdio.h>
    #include <math.h>
    int main()
    {
        double a, b, c, x1, x2, delta;


        printf("Bem vindo ao meu programa de calcular baskara \n");
       
        printf("Digite o valor da primeira variavel X²: \n");
        scanf("%lf", &a);
       
        printf("Digite o valor da segunda icognita X: \n");
        scanf("%lf", &b);

        printf("Digite o valor do termo independente: \n");
        scanf("%lf", &c);  

        delta = b*b - 4*a*c;
        
        printf("O valor de delta eh: %.2lf", delta);
        

    }