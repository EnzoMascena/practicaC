#include<stdio.h>
#include<conio.h>

int main () {

    int valor;

    printf("Ingrese un valor: ");
    scanf("%i", &valor);

    if (valor>=10)
    {
        printf("el valor tiene 2 digitos");
    }
    else
    {
        printf("el valor tiene un digito");
    }
    

    return 0;
} 