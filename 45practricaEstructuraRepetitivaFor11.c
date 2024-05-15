#include<stdio.h>
#include<conio.h>
#include<math.h>

int main () {

    int num, contNegativos, contPositivos, contMultipo, contPares;

    contNegativos=0;
    contPositivos=0;
    contMultipo=0;
    contPares=0;

    for (int i = 1; i <=10; i++)
    {
        printf("Ingrese el valor %i\n", i);
        scanf("%i", &num);

        if (num>=0)
        {
            contPositivos++;
        }
        else
        {
            if (num<0)
            {
                contNegativos++;
            }
        }

        if (num % 2 == 0)
        {
            contPares++;
        }
         
        else
            {
                if (num % 15 ==0)
                {
                    contMultipo++;
                }
            }             
            
    }
    
    printf("Cantidad de numeros positivos: %i\n", contPositivos);
    printf("Cantidad de numeros negativos: %i\n", contNegativos);
    printf("Cantidad de numeros pares: %i\n", contPares);
    printf("Cantidad de numeros Multiplos de 15: %i\n", contMultipo);








return 0;
}