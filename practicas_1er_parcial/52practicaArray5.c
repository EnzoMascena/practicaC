#include<stdio.h>
#include<conio.h>

int main () {

    int array1 [8];
    int array2 [8];
    int arraySuma [8];

    for (int i = 0; i < 8; i++)
    {
        printf("Ingresa valor en el array1: ");
        scanf("%i", &array1[i]);

        printf("Ingresa valor en el en el array2: ");
        scanf("%i", &array2[i]);

        arraySuma[i]=array1[i]+array2[i];
    }
    
    for (int i = 0; i < 8; i++)
    {
        printf("%i", arraySuma[i]);
        printf(" - ");
    }

getch ();
return 0;
}