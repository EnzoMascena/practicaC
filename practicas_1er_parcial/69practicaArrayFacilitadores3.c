#include<stdio.h>
#include<string.h>

int main () {

    char nombre1[31];
    char nombre2[31];
    char nombreLargo[31];

    printf("Ingresa nombre 1\n");
    gets(nombre1);

    fflush(stdin);

    printf("Ingrese nombre 2\n");
    gets(nombre2);

    if (strlen(nombre1)<strlen(nombre2))
    {
        strcpy(nombreLargo, nombre1);
        
    }
    else
    {
        strcpy( nombreLargo, nombre2);
       
    }
    printf("El nombre %s tiene mas caracteres", nombreLargo);



return 0;
}