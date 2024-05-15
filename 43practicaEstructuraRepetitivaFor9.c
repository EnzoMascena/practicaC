#include<stdio.h>
#include<math.h>
#include<conio.h>

int main () {

    int triangulo, lado1 , lado2 , lado3, equilatero, isosceles, escaleno ;

    equilatero=0;
    isosceles=0;
    escaleno=0;

    printf("Ingrese la cantidad de triangulos\n");
    scanf("%i", &triangulo);

    for (int i = 1; i <= triangulo; i++)
    {
        printf("Ingrese el triangulo %i\n", i);
        printf("Ingrese el primer lado: ");
        scanf("%i", &lado1);
   
        printf("Ingrese el sugundo lado: ");
        scanf("%i", &lado2);
        
        printf("Ingrese el tercer lado: ");
        scanf("%i", &lado3);
        
        //equilatero//
        if (lado1==lado2 && lado1==lado3)
        {
            printf("Es un triangulo equilatero\n");
            equilatero++;
        }
        else
        {
            if (lado1==lado2 || lado1==lado3 || lado2==lado3)
            {
                printf("Es un triangulo isosceles\n");
                isosceles++;
            }
            else
            {
                printf("Es un triangulo escaleno\n");
                escaleno++;
            }
        }
    }
    printf("La cantidad de triangulos equilateros es %i\n", equilatero);
    printf("La cantidad de triangulos isosceles es %i\n", isosceles);
    printf("La cantidad de triangulos escaleno es %i\n", escaleno);

    if (equilatero<isosceles && isosceles<escaleno)
    {
        printf("Hay menos triangulos equilateros");
    }
    else
    {
        if (isosceles>escaleno)
        {
            printf("Hay menos triangulos isosceles");
        }
        else
        {
            printf("Hay menos trangulos escalenos ");
        }
    }
    
    return 0;
}