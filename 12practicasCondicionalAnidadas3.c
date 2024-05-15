#include<stdio.h>
#include<conio.h>

int main () {

    int valor ;

    printf("Ingresame un valor hijo de puta: ");
    scanf ("%i", &valor);

    if (valor==0)
    {
        printf ("su numero es igual a 0 ");
    }
    else
    {
        if (valor>0)
        {
            printf("su numero es positivo");
        }
        else
        {
            printf("su numero es negativo");
        }
    } 
    
return 0;

}