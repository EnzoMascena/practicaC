#include<string.h>
#include<stdio.h>

int main () {

    char cadena1[10];
    char cadena2[10];

    printf("Ingresa una palabra al array1\n");
    gets(cadena1);
    
    printf("Ingresa una palabra al array2\n");
    gets(cadena2);


    if (strcmp(cadena1,cadena2) == 0)
    {
        printf("Los 2 arrays son iguales");
    }
    else
    {
        if (strcmp(cadena1,cadena2)>0)
        {
            printf("%s es mayor alfabeticamente", cadena1);
        }
        else
        {
            printf("%s es mayor alfabeticamente", cadena2);
        }
    }



return 0;
}