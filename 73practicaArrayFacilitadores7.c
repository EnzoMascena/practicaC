#include<stdio.h>
#include<string.h>

int main () {

    char persona1[15];
    char persona2[15];

    printf("Ingresa nombre de persona1\n");
    gets(persona1);

    fflush(stdin);

    printf("Ingresa nombre de persona2\n");
    gets(persona2);

    if (strlen(persona1) > strlen(persona2))
    {
        printf("%s tiene mas caractere\ns", persona1);
        printf("%s tiene menos caracteres\n", persona2);
    }
    else
    {
        printf("%s tiene mas caracteres\n", persona2);
        printf("%s tiene menos caracteres\n", persona1);
    }

return 0;
}