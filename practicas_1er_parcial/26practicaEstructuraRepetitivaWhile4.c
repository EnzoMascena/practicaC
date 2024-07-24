#include<stdio.h>
#include<conio.h>

int main () {

    int x, n, cantidad;
    float longitud;
    x=1;
    n=0;
    cantidad=0;
    printf("Cuantas piezas tienes: ");
    scanf("%i", &n);

    while (x<=n)
    {
        printf("Ingrese la longitud de la pieza %i: ", x);
        scanf("%f", &longitud);

        if (longitud>=1.20 && longitud<=1.30)
        {
            printf("Tu pieza tiene las medidas optimas");
            cantidad=cantidad+1;
            printf("\n");
        }
        else
        {
            printf("Tu pieza no tiene las medidas requeridas");
            printf("\n");
        }
        x=x+1;
    }

    printf("\n");
    printf("Tienes un total de %i piezas en la longitud necesaria", cantidad);






return 0;
}