#include<stdio.h>
#include<conio.h>

int main () {


    int x, cantidadExamanes, nota, notaAprobada, notaDesaprobada;

    x=1;
    cantidadExamanes=10;
    notaAprobada=0;
    notaDesaprobada=0;


    while (x<=cantidadExamanes)
    {
        printf("Ingrese la nota del examen %i:",x);
        scanf("%i", &nota);

        if (nota>=7)
        {
            printf("Aprobaste");
            notaAprobada=notaAprobada+1;
            printf("\n");

        }
        else 
        {
            printf("Desaprobaste");
            notaDesaprobada=notaDesaprobada+1;
            printf("\n");
        }
        x=x+1;
    }

    printf("Aprobaste %i examanes ", notaAprobada);
    printf("\n");
    printf("Desaprobaste %i examanes", notaDesaprobada);


return 0;    
}