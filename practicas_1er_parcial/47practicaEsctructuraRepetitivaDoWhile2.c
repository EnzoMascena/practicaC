#include<stdio.h>
#include<math.h>
#include<conio.h>

int main () {

    int contEntre, contMas, contWhile, contMenos;
    float peso, suma;

    contEntre=0;
    contMas=0;
    contWhile=1;
    contMenos=0;

    do
    {
        printf("Ingresa peso de la pieza %i en kg\n", contWhile);
        scanf("%f", &peso);

        if (peso>=9.8 && peso<=10.2)
        {
            contEntre++;
        }
        else{
            if (peso>10.2)
            {
                contMas++;
            }
            else
            {
                if (peso<9.7)
                {
                    contMenos++;
                }
                
            }
        }

        suma=suma+peso;
        contWhile++;

    } while (peso != 0);

    contWhile=contWhile-2;
    
    printf("El peso de las %i piesas, es de %.2f kg \n", contWhile, suma);
    printf("La cantidad de las piezas entre 9.8 y 10.2 son : %i\n", contEntre);
    printf("La cantidad de piezas mayor a 10.2 kg son: %i\n", contMas);
    printf("La cantida de las piezas meno a 9.8 son: %i\n", contMenos);


return 0;
}