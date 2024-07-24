#include<stdio.h>
#include<conio.h>

int main () {

    int dd, mm;  
    printf("ingresa un dia: ");
    scanf("%i", &dd);

    printf("ingrese un mes: ");
    scanf("%i", &mm);

    if (dd==24 && mm==12)
    {
        printf("Feliz navidad");
    }
    else
    {
        printf("No es navidad hijo de puta ");
    }


return 0;       
}