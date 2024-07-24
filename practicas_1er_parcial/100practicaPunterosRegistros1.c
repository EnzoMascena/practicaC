#include<stdio.h>


struct producto {
    int codigo;
    char descripcion[40];
    float precio;
};

void cargar (struct producto *pproducto) {

    printf("Ingresa codigo del producto: ");
    scanf("%i", &(*pproducto).codigo);
    printf("Ingresa el nombre del producto: ");
    scanf("%s", &(*pproducto).descripcion);
    printf("Ingresa el precio del producto: ");
    scanf("%f", &(*pproducto).precio);

}

void imprimir(struct producto prod) {

    printf("Codigo: %i\n", prod.codigo);
    printf("Descripcion: %s\n", prod.descripcion);
    printf("Precio: %.2f", prod.precio);

}

int main () {

    struct producto prod;
    cargar(&prod);
    imprimir(prod);

return 0;
}