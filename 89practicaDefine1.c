#include<stdio.h>

#define TAMANO 5
#define FINPROGRAMA "Puto de mierda"

void cargar (int sueldo[TAMANO]) {

    printf("Ingresar sueldos\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Ingrese el sueldo de la persona %i: ", i);
        scanf("%i", &sueldo[i]);
    }
}

void imprimir (int sueldo[TAMANO]) {

    printf("-----Sueldos-----\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%i\n", sueldo[i]);
    }
    
} 


int main () {

    int sueldo[TAMANO];
    cargar(sueldo);
    imprimir(sueldo);

return 0;
}