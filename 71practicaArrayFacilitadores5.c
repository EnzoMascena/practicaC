#include<stdio.h>
#include<string.h>

int main () {

    char usuario[15];
    char clave[16];

    printf("Ingrese nombre de usario\n");
    gets(usuario);
    
    fflush(stdin);

    printf("Ingrese clave\n");
    gets(clave);

    if (strcmp(clave,"abc123") == 0)
    {
        printf("Contraseña Correcta");
    }
    else
    {
        printf("Contraseña incorrecta");
    }



return 0;
}