#include<stdio.h>

int main () {

    char palabra[15];
    
    printf("Ingresa una palabra\n");
    gets(palabra);

    if (palabra[0] == 'A' || palabra [0]== 'a')
    {
        printf("La palabra empezo con A o con a");
    }
    else
    {
        printf("La palabra no empezo con A ni con a");
    }

return 0;
}