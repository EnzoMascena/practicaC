#include<stdio.h>
#include<conio.h>

int main () {

    char palabra[20];

        printf("Ingresa Palabra: ");
        gets(palabra);
        fflush(stdin);
        int x=0;

        while (palabra[x] !='\0')
        {
            x++;
        }
        
        printf("Tu palabra es : %s\n", palabra);
        printf("La cantidad de caracteres es: %i", x);


return 0;
}