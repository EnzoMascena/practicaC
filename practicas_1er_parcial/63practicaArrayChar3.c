#include<stdio.h>
#include<conio.h>

int main () {

    char palabra[30];

    printf("Ingrese palabra:  ");
    gets(palabra);

    int cantMayu=0;
    int x=0;

    while (palabra[x] != '\0')
    {
        if (palabra[x] == 'a' || palabra[x] == 'e'||  palabra[x] == 'i' ||  palabra[x] == 'o' ||  palabra[x] == 'u')
        {
            cantMayu++;
        }
        x++;
    }
    
    printf("la cantidad de vocales que tiene la palbra %s es %i", palabra, cantMayu);


return 0;
}