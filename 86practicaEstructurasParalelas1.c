#include<stdio.h>
#include<conio.h>

void cargar(char nombres[5][41], int edades [5]){

    for (int i = 1; i <= 5; i++)
    {
        printf("Persona %i\n", i);
        printf("Ingresa nombre: ");
        gets(nombres[i]);
        printf("Ingresa edad: ");
        scanf("%i", &edades[i]);
        fflush(stdin);
    }
}

void mayorEdad (char nombres[5][41], int edades[5]){

    printf("Personas mayores de edad\n");
    for (int i = 0; i < 5; i++)
    {
        if (edades[i]>=18)
        {
            printf("%s\n", nombres[i]);
        }
        
    }

}

int main() {

    char nombres [5][41];
    int edades [5];
    cargar(nombres,edades);
    mayorEdad(nombres,edades);

return 0;
}