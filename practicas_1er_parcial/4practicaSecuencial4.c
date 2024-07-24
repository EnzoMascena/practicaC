//se ingresan 4 numeros, suma los 2 primeros y multiplica los 2 ultimos//

#include<stdio.h>

int main ()     {

    float num1, num2 , num3 , num4, suma, multiplicacion ;

    printf("Ingrese el valor del primer numero: ");
    scanf("%f", &num1);

    printf("ingrese el valor del segundo numero: ");
    scanf("%f", &num2);

    printf("ingrese el valor del tercer numero: ");
    scanf("%f", &num3);

    printf("ingrese el valor del cuarto numero: ");
    scanf("%f", &num4);

    suma = num1 + num2;
    multiplicacion = num3 * num4;

    printf("la suma de los 2 primeros numeros es %.2f\n", suma);
    printf("la multiplicacion de los 2 ultimos numeros es %.f\n" , multiplicacion);

    return 0;
} 