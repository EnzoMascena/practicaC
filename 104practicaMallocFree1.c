#include<stdio.h>
#include<stdlib.h>

int main () {

    int *pe;
    int tamVector;
    printf("Cuantos elementos tendra el vector: ");
    scanf("%i", &tamVector);
    pe=malloc(tamVector*sizeof(int));
    for (int i = 0; i < tamVector; i++)
    {
        printf("Ingresa elementos del vector: ");
        scanf("%i", &pe[i]);
    }
    printf("Contenido del vecotr: \n");
    for (int i = 0; i < tamVector; i++)
    {
        printf("%i - ", pe[i]);
    }
    free(pe);
    return 0;
}