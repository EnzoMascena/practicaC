#include<stdio.h>
#include<string.h>

int main () {

    char nombre1[10];
    char nombre2[10];
    char nombre3[10];
    char nombreTotal[40];

    printf("Ingre nombre1\n");
    gets(nombre1);

    printf("Ingresa nombre2\n");
    gets(nombre2);

    printf("Ingresa nombre3\n");
    gets(nombre3);

    strcpy(nombreTotal, nombre1);
    strcat(nombreTotal, ",");
    strcat(nombreTotal, nombre2);
    strcat(nombreTotal, ",");
    strcat(nombreTotal, nombre3);

    printf("%s", nombreTotal);

return 0;
}