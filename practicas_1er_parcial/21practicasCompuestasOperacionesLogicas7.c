#include<stdio.h>
#include<conio.h>

int main () {

    int x, y;

    printf("Ingrese el valor de X ");
    scanf("%i", &x);

    printf("ingese el valor de Y ");
    scanf("%i", &y);

    if (x>0 && y>0)
    {
        printf("Primer cuadrante");
    }
    else
    {
        if (x<0 && y>0)
        {
            printf("Segundo Cuadrante");
        }
        else
        {
            if (x<0 && y<0)
            {
                printf("Tercer Cuadrante");
            }
            else
            {
                if (x>0 && y<0) 
                {
                     printf("Cuarto Cuadrante");
                }
                else
                {
                    printf("Sobre un eje");
                }
            }
        }        
    }
    

return 0;
}