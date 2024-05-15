#include<stdio.h>
#include<conio.h>

int main ()     {
    int num1, num2, suma, diferencia , producto ;
    float division;
    printf("ingrese un numero: ");
    scanf("%i", &num1);

    printf("ingrese otro numero: ");
    scanf ("%i", &num2);

    if (num1>num2)
    {
     suma= num1 + num2;
     diferencia= num1 - num2;
     printf("la suma de los 2 valores: ");
     printf("%i", suma);
     printf ("\n");
     printf("la diferencia de 2 valores: ");
     printf("%i", diferencia);
     printf("\n");
    }
    else
    {
     producto=num1 * num2;
     division= num2 / num1;
     printf("el prodcuto de los 2 numeros es: ");
     printf ("%i", producto);
     printf("\n");
     printf("la division de los 2 numeros es: ");
     printf ("%f", division);
     printf("\n");

     return 0;
    }
    




}