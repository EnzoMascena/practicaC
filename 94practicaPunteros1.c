#include<stdio.h>



int main (){

    int a , b;
    int *pe;
    pe= &a;
    *pe=100;
    pe=&b;
    *pe=200;

    printf("Primer variable entera: %i\n", a);
    printf("Segunda variable enter %i", b);


return 0;
}