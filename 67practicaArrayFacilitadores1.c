#include<stdio.h>
#include<string.h>

int main () {

    char palabra[31];

    printf("Ingrese palabra\n");
    gets(palabra);
    printf("La cantidad de caracteres de %s es %i", palabra, strlen(palabra));



return 0;
}