#include<stdio.h>
#include<conio.h>

int main () {

    int num1, num2, num3 ;

    printf("ingrese primer valor: ");
    scanf("%i", &num1);

    printf("ingrese segundo valor: ");
    scanf("%i", &num2);

    printf("ingese segundo valor: ");
    scanf("%i", &num3);

    if (num1<=9 && num2<=9 && num3<=9)
    {
        printf("Todos los numeros son menores a 10 ");
    }
    else
    {
        printf("puto");
    }
    




return 0;
}