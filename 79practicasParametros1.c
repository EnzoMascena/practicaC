/*confeccionar una funcion que reciba dos enteros e imprima el mayor de ellos. llamar a la funcion desde la main cargando previamente 
sus valores*/

#include<stdio.h>

void imprimirMayor (int v1, int v2){

    if (v1 > v2)
    {
        printf("El valor %i es mayor", v1);
    }
    else
    {
        printf("El valor %i es mayor", v2);
    }
}

int main () {

    int n1, n2;

    printf("Ingresa un valor:\n");
    scanf("%i", &n1);
    printf("Ingrese otro valor:\n");
    scanf("%i", &n2);
    imprimirMayor(n1, n2);

return 0;
}

