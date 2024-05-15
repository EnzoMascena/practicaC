#include<stdio.h>

int superficie(int l) {
    
    int s;
    s=l*l;
    return s;
}

int perimetro (int l) {
    
    int p;
    p=l*4;
    return p;

}

int main () {

    int lado;
    printf("ingresa el valor del lado: ");
    scanf("%i", &lado);
    int superficie_s = superficie(lado);
    int perimetro_p = perimetro(lado); 
    printf("La superficie es %i\n", superficie_s);
    printf("El perimetro es %i", perimetro_p);
    
return 0;
}

