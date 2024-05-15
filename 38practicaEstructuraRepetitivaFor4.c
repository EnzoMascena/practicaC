#include<stdio.h>
#include<math.h>
#include<conio.h>


int main () {

    int n, num, mayor, menor;

    mayor=0;
    menor=0;
    
    printf("Ingrese cantidad de numeros");
    scanf("%i", &n);

    for (int f=1; f<=n ; f++)
    {
            printf("Ingrese valor: \n");
            scanf("%i", &num);

         if (num>=1000)
            {
                mayor++;
            }
        else
            {
                menor++;
            }
    }
    
    printf("La cantidad de numeros mayor a 1000 son %i\n", mayor);
    printf("La cantidad de numeros menores a 1000 son %i\n", menor);



    return 0;
}


