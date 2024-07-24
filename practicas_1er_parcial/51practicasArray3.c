#include<stdio.h>
#include<conio.h>

int main () {

    float morning[4];
    float night[4];
    float sueldoMorning, sueldoNight, sueldoTotal;

    sueldoMorning=0;
    sueldoNight=0;

    printf("TURNO MORNING\n");
    for (int i = 1; i <= 4; i++)
    {
        
        printf("Ingrese el sueldo del empleado %i de la morning \n", i);
        scanf("%f", &morning[i]);

        sueldoMorning=sueldoMorning+morning[i];
    }

    printf("TURNO NOCHE\n");
    for (int i = 1; i <= 4; i++)
    {
        printf("Ingrese el sueldo del empleado %i de la noche \n", i);
        scanf("%f", &night[i]);

        sueldoNight=sueldoNight+night[i];
    }    
    sueldoTotal=sueldoMorning+sueldoNight;

    printf("El gasto de sueldos del turno morning es de: %.2f$\n", sueldoMorning);
    printf("El gasto del sueldo del turno noche es de: %.2f$\n", sueldoNight);
    printf("El gasto de sueldo total es de: %.2f$", sueldoTotal);

    



return 0;
}