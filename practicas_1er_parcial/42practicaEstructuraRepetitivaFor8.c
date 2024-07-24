#include<stdio.h>
#include<conio.h>
#include<math.h>

int main () {

    int tabla, termino;
    printf("ingrese el valor de la tabla entre 1 y 10 que desea calcular \n");
    scanf("%i", &tabla);

    if (tabla<=10)
    {
        for (int i = 1; i <= 10; i++)
        {
                termino=i*tabla;
                printf("%i", termino);
                printf("-");
        }
    }
    else
    {
        printf("ERROR");
    }    





return 0;
}