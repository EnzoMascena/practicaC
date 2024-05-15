#include<stdio.h>
#include<conio.h>
#include<conio.h>

int main () {

    int x, y, n, primerCuadrante, segundoCuadrante, tercerCuadrante, cuartoCuadrante;

    primerCuadrante=0;
    segundoCuadrante=0;
    tercerCuadrante=0;
    cuartoCuadrante=0;

    printf("Ingrese la cantidad de cordenadas ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
            printf("Ingrese el valor de X ");
        scanf("%i", &x);

        printf("ingese el valor de Y ");
        scanf("%i", &y);

        if (x>0 && y>0)
        {
            printf("Primer cuadrante\n");
            primerCuadrante++;
        }
        else
        {
            if (x<0 && y>0)
            {
                printf("Segundo Cuadrante\n");
                segundoCuadrante++;
            }
            else
            {
                if (x<0 && y<0)
                {
                    printf("Tercer Cuadrante\n");
                    tercerCuadrante++;
                }
                else
                {
                    if (x>0 && y<0) 
                    {
                        printf("Cuarto Cuadrante\n");
                        cuartoCuadrante++;
                    }
                    else
                    {
                        printf("Sobre un eje");
                    }
                }
            }        
        }
    }

    printf("Cordenadas en el primer cuadrante %i\n", primerCuadrante);
    printf("Cordenadas en el segundo cuadrante %i\n", segundoCuadrante);
    printf("Cordenadas en el tercer cuadrante %i\n", tercerCuadrante);
    printf("Cordenadas en el cuarto cuadrante %i\n", cuartoCuadrante);




return 0;
}