#include<stdio.h>
#include<conio.h>

int main () {

    int dd, mm, yyyy;
    
    printf("ingresar dia ");
    scanf("%i", &dd);

    printf("ingresar mes ");
    scanf("%i", &mm);

    printf("ingresar ano ");
    scanf("%i", &yyyy);

    if (mm==1 || mm==2 || mm==3)
    {
        printf("Primer Trimestre");
    }
    else
    {
        printf("error");
    }






return 0;
}