#include<stdio.h>
#include<conio.h>

void carga(char nombreProducto[5][40], float precioProducto[5]) {

    for (int i = 1; i <= 5; i++)
    {
        printf("Ingrese el nombre del producto %i: ", i);
        gets(nombreProducto[i]);
        printf("Ingrese precio del producto: ");
        scanf("%f", &precioProducto[i]);
        fflush(stdin);

    }
}

void productosMayor( float precioProducto[5]) {

    int contador= 0;
    
    for (int i = 1; i <= 5; i++)
    {
        if (precioProducto[0] > precioProducto[i] )
        {
            contador++;
        }
        
    }
    
    printf("La cantidad de productos con mayor precio al primer producto son: %i", contador);
    

}

int main () {

    char nombreProducto[5][40];
    float precioProducto[5];
    carga(nombreProducto, precioProducto);
    productosMayor(precioProducto);

return 0;
}