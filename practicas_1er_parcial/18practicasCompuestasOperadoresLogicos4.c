#include<stdio.h>
#include<conio.h>

int main () {

    int num1, num2, num3, suma, multiplicacion;

    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    
    printf("Ingrese tercer valor: ");
    scanf("%i", &num3);

    if (num1==num2 && num2==num3)
    {
        suma=num1+num2;
        multiplicacion=suma*num3;
        printf("la suma de los 2 primeros numeros son %i , La multiplicacion de la suma por el tercer valor es %i", suma, multiplicacion);
    }
    else
    {
        printf("puto");
    }
return 0;
}