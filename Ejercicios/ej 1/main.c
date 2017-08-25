#include <stdio.h>
#include <stdlib.h>
/*Ingresar 5 números y calcular su promedio
                                  */
int main()
{
    int acumulador;
    float promedio;
    for (int i=0; i < 5; i++)
    {
        printf("Ingrese numero:  ");
        scanf("%d", &numero);
        acumulador=acumulador+numero;
    }
    promedio=(float)acumulador/5;

    printf("El promedio de los numeros ingresados es %f/n/n", promedio);
    return 0;
}
