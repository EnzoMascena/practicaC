#include<stdio.h>
#include<stdlib.h>

void puntero (int *pe) {

    *pe=*pe+1;

}


int main () {

    int e=0;
    printf("%i", e);
    puntero(&e);
    printf("%i", e);

return 0;
}