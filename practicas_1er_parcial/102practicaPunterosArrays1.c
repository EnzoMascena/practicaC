#include<stdio.h>

#define TAMANO 5

void cargarVector (float *p) {

    for (int i = 0; i < TAMANO; i++)
    {
        printf("Ingresa valores al vector: ");
        scanf("%f", &p[i]);
    }
}

void imprimir (float *p) {

    for (int i = 0; i < TAMANO; i++)
    {
        printf("%0.2f", p[i]);
    }
    

}



int main () {

    float vector[TAMANO];
    cargarVector(vector);
    imprimir(vector);


return 0;   
}