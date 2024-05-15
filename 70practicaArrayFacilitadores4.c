#include<stdio.h>
#include<string.h>

int main () {

    char nombre[30];
    char apellido[30];
    char nombreCompleto[60];

    printf("Ingrese nombre\n");
    gets(nombre);

    

    printf("Ingresa apellido\n");
    gets(apellido);

    strcat(nombreCompleto, nombre);
    strcat(nombreCompleto, " " );
    strcat(nombreCompleto, apellido);


    printf("%s", nombreCompleto);






return 0;
}