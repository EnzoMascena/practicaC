#include<stdio.h>
#include<stdlib.h>


int main () {
    
    int cant;
    char *ppalabra;

    printf("Ingresar cuantas letras tiene la palabra ");
    scanf("%i", &cant);
    fflush(stdin);
    ppalabra=malloc((cant+1)*sizeof(int));
    printf("Ingresar ahora la palabra: ");
    gets(ppalabra);
    printf("La palabra ingresada es %s", ppalabra);
    free(ppalabra);




    
}