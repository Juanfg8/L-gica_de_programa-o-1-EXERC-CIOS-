    #include <stdio.h>

    int main()
    {
        float horas, minutos, horas_int, horas_frac;

        printf ("Digite as horas de um relógio: ");
        scanf("%f", &horas);
        
        horas_int = (int) horas;
        horas_frac = horas - horas_int;
        minutos = horas_int * 60 + horas_frac * 100;

        printf("horas lidas: %.2f\n", horas);
        printf("horas convertidas em minutos %.0f\n", minutos);

        return 0;
        

    }