#include<stdio.h>
#include<conio.h>

int main () {

    char oracion[200];
    int x=0;
    int espacios=0;
    
    printf("Escribe una oracion:\n");
    gets(oracion);

    fflush(stdin);

    while (oracion[x] != '\0')
    {
        if (oracion[x] == ' ')
        {
            espacios++;
        }
        x++;
    }
    
    int palabras= espacios + 1;
    
    printf("La cantidad de palabras que tiene la oracion es %i", palabras);


return 0;
}