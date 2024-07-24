#include<stdio.h>
#include<conio.h>

int main () {
    
    int suma=0;
    char confirmar;
    int valor;
    
    do {
        printf("Ingresar valor\n");
        scanf("%i", &valor);
        suma+=valor;
        printf("Desa cargar otro valor [s/n]\n");
        scanf(" %c", &confirmar);

    } while (confirmar == 's');

    printf("La suma de todos los valor es %i", suma);
    

return 0;
}