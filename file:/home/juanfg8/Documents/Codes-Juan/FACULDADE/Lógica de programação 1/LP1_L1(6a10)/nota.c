    #include <stdio.h>

    int main()
    {
        float N1, N2, N3, N4, med_pon;
        printf("Digite a nota da avaliação do primeiro bimestre: \n");
        scanf("%f", &N1);

        printf("Digite a nota da avaliação do segundo bimestre: \n");
        scanf("%f", &N2);

        printf("Digite a nota da avaliação do terceiro bimestre: \n");
        scanf("%f", &N3);

        printf("Digite a nota da avaliação do quarte bimestre: \n");
        scanf("%f", &N4);

        med_pon = (N1 + N2*2 + N3*3 + N4*4)/10;
        printf("As notas do primeiro ao quarto semestre são essas respectivamente: %.2f, %.2f, %.2f, %.2f", N1, N2, N3, N4);

        printf("A média ponderada das notas dos quatro bimestre é: %.2f", med_pon);
        

    }