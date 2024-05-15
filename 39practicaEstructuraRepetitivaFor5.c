#include<stdio.h>
#include<conio.h>
#include<math.h>

int main () {

    int n, base, altura, superficie, cantidad;

    cantidad=0;
    printf("Ingrese la cantidad de Triangulos que desea calcular\n");
    scanf("%i", &n);

    for(int i=1; i<=n; i++)
    {

        printf("Ingrese base del triangulo %i\n", n);
        scanf("%i", &base);
        printf("Ingrese altura del triangulo \n");
        scanf("%i", &altura);
        superficie=base*altura/2;
        printf("Su superficie es %i\n", superficie);  


        if (superficie>=12)
        {
            cantidad++;
        }
    }

    printf("La cantidad de triangulos con una superficie superior a 12 es %i", cantidad);

    return 0;
}