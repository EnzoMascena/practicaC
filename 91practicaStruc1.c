#include<stdio.h>

struct producto {
    
    int codigo;
    char descripcion[41];
    float precio;

};

int main () {

    struct producto producto1, producto2;

    printf("--Primer Producto\n");
    printf("Ingresa codigo del producto 1: ");
    scanf("%i", &producto1.codigo);
    fflush(stdin);
    printf("Ingresa la descripcion del producot 1: ");
    gets(producto1.descripcion);
    printf("Ingresa precio del producto: ");
    scanf("%f", &producto1.precio);
    
    printf("--Segundo Producto\n");
    printf("Ingresa codigo del producto 2: ");
    scanf("%i", &producto2.codigo);
    fflush(stdin);
    printf("Ingresa la descripcion del producto 2: ");
    gets(producto2.descripcion);
    printf("Ingresa precio del producto 2: ");
    scanf("%f", &producto2.precio);

    if (producto1.precio > producto1.precio)
    {
        printf(" %s tiene mayor precio", producto1.descripcion);
    }
    else
    {
        if (producto2.precio > producto1.precio)
        {
            printf("%s tiene mayor precio", producto2.descripcion);
        }
        else 
        {
            printf("Los productos valen los mismo");
        }
        
    }

return 0;
}