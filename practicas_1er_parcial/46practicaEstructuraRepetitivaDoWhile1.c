#include<math.h>
#include<stdio.h>
#include<conio.h>

int main () {

    int num, suma, cant ;
    float promedio;
    suma=0;
    cant=0;

    do
    {
        printf("Ingrese valores para calcular promedio (0 para terminar)\n");
        scanf("%i", &num);

        if (num!=0)
        {
            cant++;
            suma=suma+num;
        }
        
        

    } while (num != 0);

    if (cant != 0)
    {
        promedio=suma/cant;
        printf("El promedio es: %.2f \n", promedio);
        printf("La suma de los numeros es: %i \n", suma);
    }
    else
    {
        printf("no se ingresaron valores");
    }
return 0;
}