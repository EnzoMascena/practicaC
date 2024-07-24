#include<stdio.h>

#define EMPLEADOS 4
#define MESES 3

void carga(char nombreEmpleados[EMPLEADOS][20], int sueldo[EMPLEADOS][MESES], int sueldoTotal[EMPLEADOS]) {

    printf("---Carga nombres---\n");
    sueldoTotal[EMPLEADOS]=0;
    for (int i = 0; i < EMPLEADOS; i++)
    {
        printf("Ingrese nombre de empleado: ");
        gets(nombreEmpleados[i]);
        printf("Ingresa sueldo mes 1: ");
        scanf("%i", &sueldo[i][0]);
        printf("Ingresa sueldo mes 2: ");
        scanf("%i", &sueldo[i][1]);
        printf("Ingresa sueldo mes 3: ");
        scanf("%i", &sueldo[i][2]);
        sueldoTotal[i]=sueldo[i][0]+sueldo[i][1]+sueldo[i][2];
        fflush(stdin);
    }
    
}

void imprimir (char nombreEmpleados[EMPLEADOS][20], int sueldo[EMPLEADOS][MESES], int sueldoTotal[EMPLEADOS]){

    printf("---Datos---\n");
    for (int i = 0; i < EMPLEADOS; i++)
    {
        printf("Nombre empleado: %s\n", nombreEmpleados[i]);
        printf("Sueldo a los largo de los meses: %i - %i - %i\n", sueldo[i][0],sueldo[i][1],sueldo[i][2]);
        printf("Sueldo Total: %i\n", sueldoTotal[i]);
    }
    
}

void sueldoMaximo(char nombreEmpleados[EMPLEADOS][20], int sueldoTotal[EMPLEADOS]) {
    int indexMax = 0;

    for (int i = 1; i < EMPLEADOS; i++) {
        if (sueldoTotal[i] > sueldoTotal[indexMax]) {
            indexMax = i;
        }
    }

    printf("El empleado con el sueldo máximo es: %s con un sueldo total de %i\n", nombreEmpleados[indexMax], sueldoTotal[indexMax]);
}


int main () {

    char nombreEmpleados[EMPLEADOS][20];
    int sueldo[EMPLEADOS][MESES];
    int sueldoTotal[EMPLEADOS];
    carga(nombreEmpleados,sueldo,sueldoTotal);
    imprimir(nombreEmpleados,sueldo,sueldoTotal);
    sueldoMaximo(nombreEmpleados,sueldoTotal);
    

return 0;
}