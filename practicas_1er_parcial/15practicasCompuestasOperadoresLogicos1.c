#include<stdio.h>
#include<conio.h>

int main () {

    int num1, num2, num3 ;
    
    printf("ingrese primer valor: ");
    scanf("%i", &num1);

    printf("ingrese segundo valor: ");
    scanf("%i", &num2);

    printf("ingrese tercer valor: ");
    scanf("%i", &num3);

    if (num1>num2 && num1>num3)
    {
        printf("%i", num1);
    }
    else
    {
        if (num2>num3)
        {
            printf("%i", num2);
        }
        else 
        {
            printf("%i", num3);
        }
    }
    return 0;    
}