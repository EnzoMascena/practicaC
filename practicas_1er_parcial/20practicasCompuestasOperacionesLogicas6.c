#include<stdio.h>
#include<conio.h>

int main () {

    int n1, n2, n3;

    printf("ingrese primer valor ");
    scanf("%i", &n1);

    printf("ingrese segundo valor ");
    scanf("%i", &n2);

    printf("ingrese tercer valor ");
    scanf("%i", &n3);

    if (n1<10 || n2<10 || n3<10)
    {
        printf("Algunos de los numeros es menor a 10");
    }
    else
    {
        printf("Ninguno de los numeros es menor a 10 ");
    }
    




return 0;
}