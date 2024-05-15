#include<stdio.h>
#include<conio.h>

int main () {

    int totalPreguntas, totalCorrectas, porcentaje;

    printf("Ingrese total de preguntas: ");
    scanf("%i", &totalPreguntas);

    printf("Ingrese total de respuestas correctas: ");
    scanf("%i", &totalCorrectas);

    porcentaje= (totalCorrectas*100)/totalPreguntas;

    if (porcentaje>=90)
    {
        printf("Nivel Maximo");
    }
    else
    {
        if (porcentaje>=75)
        {
            printf("Nivel Medio");
        }
        else
        {
            if (porcentaje>=50)
            {
                printf("Nivel Regular");
            }
            else
            {
                printf("Fuera de Nivel");
            }
        }
    }
    
return 0;




}