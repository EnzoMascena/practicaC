#include<stdio.h>
#include<string.h>

void cuadrado () {

    int valor, cuadrado;
    printf("Ingresa valor\n");
    scanf("%i", &valor);
    cuadrado=valor*valor;
    printf("El cuadrado de %i es %i\n", valor, cuadrado);
}

void separacion () {

    printf("---------------------------------\n");
}

void producto () {

    int valor1, valor2, producto;

    printf("Ingrese primer valor\n");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor\n");
    scanf("%i", &valor2);
    producto=valor1*valor2;
    printf("El producto de %i y %i es %i", valor1, valor2, producto);
}

int main () {
    
    cuadrado();
    separacion();
    producto();

return 0;
}