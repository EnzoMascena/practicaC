#include<stdio.h>
#include<conio.h>

int main () {

    int edad1, edad2;
    char sexo1, sexo2;

    printf("PERSONA 1\n");
    printf("Edad de persona 1: ");
    scanf("%i", &edad1);
    printf("Sexo persona 1 [m/f]: ");
    scanf(" %c", &sexo1);

    printf("PERSONA 2\n");
    printf("Edad de persona 2: ");
    scanf("%i", &edad2);
    printf("Sexo persona 2 [m/f]: ");
    scanf(" %c", &sexo2);

    if (edad1>=edad2)
    {
        printf("La edad de la persona 1 es la mayor con %i years y el sexo es %c", edad1, sexo1 );
    }
    else
    {
        printf("La edad de la persona 2 es la mayor con %i years y el sexo es %c", edad2, sexo2 );
    }


return 0;
}