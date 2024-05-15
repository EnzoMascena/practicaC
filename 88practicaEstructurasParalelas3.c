#include<stdio.h>
#include<conio.h>

void carga (char alumnos [4][40], int notas[4]) {

    for (int i = 0; i < 4; i++)
    {
        printf("Ingresar nombre del alumno: \n");
        gets(alumnos[i]);
        printf("Ingresa nota del alumno: \n");
        scanf("%i", &notas[i]);
        fflush(stdin);
    }
}

void listado (char alumnos[4][40], int notas[4]) {

    printf("---------Listado notas---------\n");
    int contador=0;
    for (int i = 0; i < 4; i++)
    {
        if (notas[i] >= 8)
        {
            printf("%s: Muy bien\n", alumnos[i]);
            contador++;
        }
        else
        {
            if (notas[i] > 4)
            {
                printf("%s: Bueno\n", alumnos[i]);
            }
            else
            {
                    printf("%s: Insuficiente\n", alumnos[i]);
            }
            
        }
    }
    printf("TOTAL MUY BIEN: %i", contador);

}



int main () {

    char alumnos[4][40];
    int notas[4];
    carga(alumnos, notas);
    listado(alumnos, notas);

return 0;
}