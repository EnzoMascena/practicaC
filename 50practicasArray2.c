#include<stdio.h>
#include<conio.h>

int main (){

    float altura [5];
    float promedio, suma;
    int menoresPromedio, mayoresPromedio;

    suma=0;
    mayoresPromedio=0;
    menoresPromedio=0;

    for (int i = 0; i < 5 ; i++)
    {
        printf("Ingresar altura de la persona\n");
        scanf("%f", &altura[i]);

        suma=suma+altura[i];
    }
    
    promedio=suma/5;

    for (int i = 0; i < 5; i++)
    {
        if (altura[i] > promedio)
        {
            mayoresPromedio++;
        }
        else
        {
               menoresPromedio++;
        }
    }

    printf("Promedio de altura: %.2f\n", promedio);
    printf("Personas mayores al promedio: %i\n", mayoresPromedio);
    printf("Personas menores al promedio: %i\n", menoresPromedio);

getch();
return 0;
}