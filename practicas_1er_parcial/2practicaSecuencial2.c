//Realizar un programa que lea 4 valores numericos y te de un promedio//

#include <stdio.h>

int main() {
    float num1, num2, num3, num4;
    float promedio;

    printf("Ingrese el primer valor: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo valor: ");
    scanf("%f", &num2);

    printf("Ingrese el tercer valor: ");
    scanf("%f", &num3);

    printf("Ingrese el cuarto valor: ");
    scanf("%f", &num4);

    promedio = (num1 + num2 + num3 + num4) / 4.0;

    printf("El promedio de los cuatro valores es: %.2f\n", promedio);

    return 0;
}