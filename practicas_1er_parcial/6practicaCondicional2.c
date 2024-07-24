// dame 2 numeros, el numero mayor de esos numeros va primero//

#include<stdio.h>
#include<conio.h>

int main ()     {
    int num1 , num2 ;
    printf ("ingrese primer valor");
    scanf ("%i", &num1);
    printf("ingrese segundo valor");
    scanf ("%i", &num2);
    if (num1>num2)  
    {
        printf("%i",num1);
    }
    else
    {
        printf("%i",num2);
    }
    return 0;
}