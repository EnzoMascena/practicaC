#include<stdio.h>
#include<conio.h>

int main () {

    int array[10];
    int valor;
    
    for (int i = 0; i < 10; i++)
    {
        printf("Ingresa un valor \n");
        scanf("%i", array[i]);
        
       

        if (array[i]<valor)
        {
            printf("No esta de menor a mayor");
        }
        valor=array[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i", array[i] );
        printf(" - ");
    }


return 0;
}