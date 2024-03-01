#include <stdio.h>

int main(void)
{
    int habit = 0;
    int habitOcup = 0;
    int verf = 0;
    const int pisos = 12;

    do{ printf("Introduce la cantidad de habitaciones: ");
        verf = scanf("%d", &habit);

        if (verf == 0)
            printf("\nError, no es un entero o introdujo información incorrecta.\n");}

    while (verf == 0);


    do{ printf("Introduce la cantidad de habitaciones no libres: ");
        verf = scanf("%d", &habitOcup);

        if (verf == 0)
            printf("\nError, no es un entero o introdujo información incorrecta.\n");}

    while (verf == 0);


        float porcOcup = ((1.0*habitOcup)/(habit*pisos))*100;

        printf("El porciento de ocupación del hotel es %.2lf %%\n.", porcOcup);





    return 0;
}

