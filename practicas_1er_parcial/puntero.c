#include <stdio.h>

int main () {
    int a=5, b=10;
    printf("el valor de a es :%d\n",a);
    printf("la direccion de la variable a es %p\n",&a);
    int *p;
    p = &a;
    printf("el valor de p es %p\n",p);
    *p =10;
    printf("el valor de a es %d\n",a);
    p= &b;
    *p= *p + a;
    printf("el valor de b es %d\n",b);
    int *q= &a;
    printf("el valor de p es %d\n",*p + *q);
    return 0;
}
        