#include<stdio.h>
#include<conio.h>

int main () {

    int nota1, nota2 , nota3 ;
    float promedio;

    printf("ingresar nota 1: ");
    scanf("%i", &nota1);

    printf("ingresar nota2: ");
    scanf("%i", &nota2);

    printf("ingresar nota3: ");
    scanf("%i", &nota3);

    promedio = (nota1 + nota2 + nota3)/3;

    if (promedio >= 7)
    {
        printf("Promocionado con: %2f\n" , promedio);
    }
    else
    {
        printf("No promocionaste, te sacaste un %2f\n" , promedio);
    }

    return 0;
}