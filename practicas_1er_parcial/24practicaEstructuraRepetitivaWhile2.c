#include<stdio.h>
#include<conio.h>

int main () {

    int x, n;

   

    printf("Ingrese el valor hasta donde quiere contar");
    scanf("%i", &n);
    x=1;
    while (x<=n)
    {
        printf("%i", x);
        printf(" - ");
        x=x+1;
    }
    






return 0;
}