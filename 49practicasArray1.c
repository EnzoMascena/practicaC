#include<stdio.h>
#include<math.h>
#include<conio.h>

int main () {

    int sueldos[5];

    for (int i= 0; i < 5; i++)
    {
        printf("Ingrese valor del sueldo:\n" );
        scanf("%i", &sueldos[i]);
    }
    printf("Listas de sueldos\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", sueldos[i]);
    }
    
    getch();
    return 0;
}