#include<stdio.h>
#include<math.h>
#include<conio.h>

int main () {

    int x, n, valor, pares, impares;

    x=1;
    pares=0;
    impares=0;


    printf("Cuantos numeros vas a ingresar\n");
    scanf("%i", &n);

    while (x<=n)
    {
        printf("Ingresa un numero: ");
        scanf("%i", &valor);

        if (valor%2==0)
        {
            pares=pares+1;
        }
        else 
        {
            impares=impares+1;
        }
    x=x+1;
    }
    printf("Fueron %i valores pares\n", pares);
    printf("Fueron %i valores impares\n", impares);

return 0;
}