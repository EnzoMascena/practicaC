#include<stdio.h>

#define TAMANO 40

void carga (char *p){

    printf("Ingresa Nombres: ");
    gets(p);
}

void imprimir(char *p){

    printf("La palabra ingresada es: %s", p);
}

int main () {

    char vector[TAMANO];
    carga(vector);
    imprimir(vector);

return 0;    
}   