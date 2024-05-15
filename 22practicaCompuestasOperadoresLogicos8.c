#include<stdio.h>
#include<conio.h>

int main (){

    int antiguedad;
    float sueldo;

    printf("Ingresar sueldo");
    scanf("%f", &sueldo);

    printf("Ingresar antiguedad");
    scanf("%i", &antiguedad);

    if (sueldo<500 && antiguedad>=10)
    {
        float aumento=sueldo*0.20;
        float sueldoPago=aumento+sueldo;
        printf("¡¡Haz recibido un aumento del 20 por ciento!! Ahora cobraras %f", sueldoPago);
    }
    else
    {
        if (sueldo<500 && antiguedad<10)
        {
            float aumento=sueldo*0.05;
            float sueldoPago=aumento+sueldo;
            printf("¡¡Haz recibido un aumento del 5 por ciento!! Ahora cobraras %f", sueldoPago);
        }
        else
        {
           printf("Tu sueldo es de %f", sueldo);
        }
        
    }

return 0;
}