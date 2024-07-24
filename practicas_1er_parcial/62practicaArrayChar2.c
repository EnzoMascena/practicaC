#include<stdio.h>
#include<conio.h>

int main () {

    char nombre1[21];
    char nombre2[21];
    int edad1;
    int edad2;

    printf("PRIMERA PERSONA\n");
    printf("Ingrese el nombre de la primera persona ");
    gets(nombre1);
    printf("Ingrese la edad de la primera persona ");
    scanf("%i", &edad1);

    fflush(stdin);

    printf("SEGUNDA PERSONA\n");
    printf("Ingrese el nombre de la segunda persona ");
    gets(nombre2);
    printf("Ingrese edad de la segunda persona ");
    scanf("%i", &edad2);

    if (edad1>=edad2)
    {
        printf("%s es mayor a %s con una edad de %i", nombre1, nombre2, edad1);
    }
    else
    {
        printf("%s es mayor a %s con una edad de %i", nombre2, nombre1, edad2);
    }


return 0;
}