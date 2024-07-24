#include<stdio.h>
#include<string.h>

int main () {

    char persona1[15];
    char persona2[15];

    printf("Ingresa nombre de persona 1\n");
    gets(persona1);
    
    fflush(stdin);

    printf("Ingresa nombre de persona 2\n");
    gets(persona2);

    printf("Nombre ordenado alfabeticamente\n");
    if (strcmp(persona1, persona2) < 0)
    {
        printf("%s - %s", persona1, persona2);
    }
    else
    {
        printf("%s - %s", persona2, persona1);
    }
     

return 0;
}