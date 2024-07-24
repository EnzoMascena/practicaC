#include<stdio.h>
#include<string.h>

void suma () {

    int valor1, valor2, suma;
    printf("Ingresa primer valor para sumarlo\n");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor para sumarlo\n");
    scanf("%i", &valor2);
    suma=valor1+valor2;
    printf("La suma de %i y %i da %i\n", valor1,valor2,suma);

}

void separacion () {

    printf("-----------------------------------------\n");
}  

int main () {

    suma();
    separacion();
    suma();
    separacion();

return 0;
}