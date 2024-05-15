#include<stdio.h>
#include<conio.h>

int main (){

    int x, y,  lista1, lista2, valorLista1, valorLista2;

    x=1;
    y=1;
    valorLista1=0;
    valorLista2=0;

    printf("Lista 1 \n");
    while (x<=15)
    {
        printf("Ingrese el Valor del producto %i:\n", x);
        scanf("%i", &lista1);
        valorLista1= valorLista1+lista1;
        x=x+1;
    }

    printf("Lista 2\n");


    while (y<=15)
    {
        printf("Ingrese el Valor al producto %i:\n", y);
        scanf("%i", &lista2);
        valorLista2= valorLista2+lista2;
        y=y+1;
    }

    if (valorLista1>valorLista2)
    {
        printf("Lista 1 es mayor \n");
    }
    else
    {
        if (valorLista1<valorLista2)
        {
           printf("Lista 2 es mayor");
        }
        else 
        {
            printf("Listas Iguales");
        }
        
    }
    
        
    




return 0;
}