#include<stdio.h>
#include<conio.h>

int main () {

    float valor1, valor2;
    char operacion;

    printf("Ingrese el primer valor\n");
    scanf("%f", &valor1);
    printf("Ingrese el segundo valor\n");
    scanf("%f", &valor2);
    printf("que operacion quiere hacer [+,-,*,/]\n");
    scanf(" %c", &operacion);

    if (operacion == '+')
    {
        float suma=valor1+valor2;
        printf("la suma de los 2 numeros es: %.2f", suma);
    }
    else
    {
        if (operacion == '-')
        {
            float resta=valor1-valor2;
            printf("La resta de los 2 numeros es: %.2f", resta);
        }
        else
        {
            if (operacion == '*')
            {
                float multiplicacion=valor1*valor2;
                printf("La multiplicacion de estos 2 numeros es: %.2f", multiplicacion);
            }
            else
            {
                float division=valor1/valor2;
                printf("La division de estos 2 numeros es: %.2f", division);
            }
        }
    }   






return 0;
}