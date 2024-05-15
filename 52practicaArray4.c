#include<stdio.h>
#include<conio.h>

int main () {

    int valores[8];
    int suma, acumMayores36, valoresMayor50;

    suma=0;
    acumMayores36=0;
    valoresMayor50=0;

    for (int i = 0; i <8; i++)
    {
        printf("Ingrese valor\n");
        scanf("%i", &valores[i]);

        suma=suma+valores[i];

        if (valores[i]>36)
        {
            acumMayores36=acumMayores36+valores[i];
        }
    
        if (valores[i]>=50)
        {
            valoresMayor50++;
        }
    
    }
    
    printf("La suma de todos los valores es: %i\n", suma);
    printf("La suma de los valores mayores a 36 es: %i\n", acumMayores36);
    printf("La cantidad de valores mayores a 50 es: %i\n", valoresMayor50);

    getch();
    return 0;
}