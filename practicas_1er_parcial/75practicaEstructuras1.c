#include<stdio.h>
#include<string.h>

void presentacion(){

    printf("Gracias por sumar con nosotros\n");
    printf("-----------------------------------\n");
}

void suma() {

    int valor1, valor2, suma;
    printf("Ingrese el primer valor para sumar\n");
    scanf("%i", &valor1);
    printf("Ingrese el seundo termino para sumar\n");
    scanf("%i", &valor2);
    suma=valor1+valor2;
    printf("La suma de los 2 valores da: %i\n", suma);
}

void despedida() {

    printf("GRACIAS SORETE, ANDATE A LA PUTA QUE TE PARIO!!\n");
    printf("------------------------------------------------\n");

}

int main () {

    presentacion();
    suma();
    despedida();

return 0;
}