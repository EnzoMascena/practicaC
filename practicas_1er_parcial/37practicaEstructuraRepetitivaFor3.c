#include<stdio.h>
#include<math.h>

int main () {

    int x, nota, aprobado, reprobado;


    aprobado=0;
    reprobado=0;
    
    for (x=1; x<=10 ; x++)
    {
        printf("Ingrese la nota del alumno %i\n", x);
        scanf("%i", &nota);

        if (nota>=7)
        {
           printf("Aprobaste\n");
           aprobado=aprobado+1;
        }
        else
        {
            printf("Reprobaste\n");
            reprobado=reprobado+1;
        }
    }
    printf("Aprobaron %i pendejos \n", aprobado);
    printf("Repobaron %i pendejos \n", reprobado);

return 0;
}