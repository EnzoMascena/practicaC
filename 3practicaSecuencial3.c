//Calcular con un lado de un cuadrado su perimetro //

#include<stdio.h>

int main ()     {
    float lado, perimetro ;

    printf("Ingrese cuando mide el lado de un cuadrado");
    scanf("%f", &lado);

    perimetro = lado * 4;

    printf("el perimetro del cuadrado es:  %.2f\n", perimetro);

    return 0;
}