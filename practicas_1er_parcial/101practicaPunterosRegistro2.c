#include<stdio.h>

struct pais{
    
    char nombre[40];
    int cantidadHab;
};

void carga (struct pais *ppais) {

    printf("Ingresa el nombre del pais: ");
    gets(ppais->nombre);
    printf("Ingresa cantidad de habitantes del pais: ");
    scanf("%i", &(*ppais).cantidadHab);
    fflush(stdin);

}

void imprimir (struct pais p){

    printf("Nombre del pais: %s\n", p.nombre);
    printf("Cantidad de habitantes: %i\n", p.cantidadHab);

}

int main () {

    struct pais pais1, pais2, pais3;
    carga(&pais1);
    carga(&pais2);
    carga(&pais3);
    imprimir(pais1);
    imprimir(pais2);
    imprimir(pais3);

return 0;
}