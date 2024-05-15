//si el sueldo es mayo a 3000 pagas impuestos //


#include<stdio.h>
#include<conio.h>
int main () {
    int sueldo;

    printf("ingrese sueldo ");
    scanf("%i", &sueldo);

    if (sueldo>3000)
    {
        printf("esta persona tiene que pagar impuestos ");
    }

    
    return 0;
}