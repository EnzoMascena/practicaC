#include<stdio.h>
#include<conio.h>
#include<math.h>

int main () {

    int num, suma;

    suma=0;

    for (int i= 1; i <=10; i++)
    {
        printf("Ingrese un valor n%i\n", i);
        scanf("%i", &num);

        if (i>5)
        {
            suma=suma+num;
        }
        
    }
    
    printf("La suma de los ultimos numeros es: %i\n", suma);







}