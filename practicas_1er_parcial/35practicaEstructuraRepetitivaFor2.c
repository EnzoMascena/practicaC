#include<stdio.h>
#include<math.h>

int main () {

    int x, valor, suma;
    float promedio;

    suma=0;

    for (x=1; x<=10; x++)
    {
        printf("Ingresa valor del numero %i: \n", x);
        scanf("%i", &valor);

        suma=suma+valor;
    }
    
    promedio=suma/10;

    printf("La suma de los numero es: %i\n", suma);
    printf("El promedio es: %.2f\n ", promedio);





return 0;
}