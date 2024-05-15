//Haz un programa que ingreses el precio de un producto, la cantidad de articulos que vas a llevar y cuanto vas a pagar//

#include<stdio.h>
#include<conio.h>

int main () {
    int cantidad;
    float precio, importePagar;

    printf("Ingrese precio del producto: ");
    scanf("%f", &precio);

    printf("Cantidad de articulos a llevar");
    scanf("%d", &cantidad);

    importePagar = precio * cantidad;
    
    printf("Usted paga: %f\n", importePagar);

    return 0;
}
