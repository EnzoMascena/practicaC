#include<stdio.h>

struct pais{
    char nombre[56];
    int cantidadHab;
};

int main () {

    struct pais pais1, pais2, pais3 ;

    //Primer pais
    printf("Ingresa nombre del pais: ");
    gets(pais1.nombre);
    printf("Ingrese cantidad de habitantes: ");
    scanf("%i", &pais1.cantidadHab);
    fflush(stdin);

    printf("Ingresa nombre del pais: ");
    gets(pais2.nombre);
    printf("Ingrese cantidad de habitantes: ");
    scanf("%i", &pais2.cantidadHab);
    fflush(stdin);
    
    printf("Ingresa nombre del pais: ");
    gets(pais3.nombre);
    printf("Ingrese cantidad de habitantes: ");
    scanf("%i", &pais3.cantidadHab);
    fflush(stdin);

    if (pais1.cantidadHab > pais2.cantidadHab && pais1.cantidadHab > pais3.cantidadHab)
    {
        printf("%s es el pais con mas habitantes, con una poblacion de %i", pais1.nombre,pais1.cantidadHab);
    }
    else
    {
        if (pais2.cantidadHab > pais1.cantidadHab && pais2.cantidadHab > pais3.cantidadHab)
        {
            printf("%s es la pais con mas habitantes, con una poblacion de %i", pais2.nombre, pais2.cantidadHab);
        }
        else
        {
            if (pais3.cantidadHab > pais1.cantidadHab && pais3.cantidadHab > pais2.cantidadHab)
            {
                printf("%s es el pais con mas habitantes, con una poblacion de %i", pais3.nombre, pais3.cantidadHab);
            }
            
        }
    }

}