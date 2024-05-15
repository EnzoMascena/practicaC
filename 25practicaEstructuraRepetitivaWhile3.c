#include<stdio.h>
#include<conio.h>

int main (){

    int x, nota, suma, promedio;

    x=1;
    suma=0;
    while (x<=10)
    {
       printf("Ingrese un la nota del examen %i: ", x);
       scanf("%i", &nota);
       x=x+1;
       suma=nota+suma;
    }
    promedio=suma/10;
    printf("La suma de los 10 valores es: %i", suma);
    printf("\n");
    printf("El promedio de las notas es: %i", promedio);
    	



return 0;
}