#include<stdio.h>
#include<conio.h>
#include<math.h>

int main () {

    int num, suma;

    suma=0;

    do
    {
        printf("Ingresa numeros (9999 para terminar)\n");
        scanf("%i", &num);

        if (num != 9999)
        {
            suma=suma+num;
        }

    } while (num != 9999);
        
    if (suma == 0)
    {
        printf("La suma da 0");
    }
    else
    {
        if (suma>0)
        {
            printf("La suma da %i, es mayor a 0", suma);
        }
        else
        {
            printf("La suma da %i, es menor a 0", suma);
        }
        
    }

return 0;
}