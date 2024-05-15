#include<stdio.h>
#include<conio.h>

int main () {

    int cursoA[5];
    int cursoB[5];
    int sumaCursoA, promedioCursoA, sumaCursoB, promedioCursoB ;

    sumaCursoA=0;
    sumaCursoB=0;

    printf("CURSO A\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("Ingresa el valor del alumno %i\n", i);
        scanf("%i", &cursoA[i]);
        sumaCursoA=sumaCursoA+cursoA[i];
    }
    promedioCursoA=sumaCursoA/5;

    printf("CURSO B\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("Ingresa el valor del alumno %i\n", i);
        scanf("%i", &cursoB[i]);
        sumaCursoB=sumaCursoB+cursoB[i];
    }
    promedioCursoB=sumaCursoB/5;

    if (promedioCursoA == promedioCursoB)
    {
        printf("El promedio de los cursos es el mismo\n");
        printf("El Curso A tiene un promedio de %i\n", promedioCursoA);
        printf("El Curso B tiene un promedio de %i\n", promedioCursoB);
    }
    else
    {
        if (promedioCursoA>promedioCursoB)
        {
            printf("El curso con mayor promedio es el A\n");
            printf("El Curso A tiene un promedio de %i\n", promedioCursoA);
            printf("El Curso B tiene un promedio de %i\n", promedioCursoB);

        }
        else
        {
            printf("El curso con mayor promedio es el B\n");
            printf("El Curso A tiene un promedio de %i\n", promedioCursoA);
            printf("El Curso B tiene un promedio de %i\n", promedioCursoB);
        }
    }

getch();
return 0;
}