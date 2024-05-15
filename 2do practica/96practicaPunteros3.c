#include<stdio.h>
#include<stdlib.h>

void cargar (int *pe1, int *pe2) {

    *pe1=10;
    *pe2=20;

}


int main () {

    int valor1, valor2;
    cargar(&valor1, &valor2);
    printf("%p  %i", (void*)valor1, valor2);




return 0;
}