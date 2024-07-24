#include<stdio.h>
#include<conio.h>
#include<math.h>

int main () {

    int x, persona;
    float altura, promedio, suma;

    x=1;
    printf("Cuantas personas hay?\n");
    scanf("%i",&persona);

    while (x<=persona)
    {
        printf("Ingrese altura de la persona %i:\n ", x);
        scanf("%f", &altura);
        printf("\n");
        x=x+1;
        suma=suma+altura;
    }
    promedio=suma/persona;
    printf("el promedio de las personas es %.2f metros", promedio);

return 0;
}