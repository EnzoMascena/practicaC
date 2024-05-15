#include<stdio.h>
#include<string.h>

void menorValor () {

    int valor1, valor2, valor3;
    printf("Ingrese el primer valor\n");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor\n");
    scanf("%i", &valor2);
    printf("Ingrese el segundo valor\n");
    scanf("%i", &valor3);

    if (valor1<valor2 && valor1<valor3)
    {
        printf("%i es el menor valor", valor1);
    }
    else
    {
        if (valor2<valor3)
        {
            printf("%i es el menor valor", valor2);
        }
        else
        {
            printf("%i es el menor valor", valor3);
        }
    }
}

int main () {

    menorValor();
    menorValor();
    menorValor();
    return 0;
}