#include<stdio.h>

struct punto {
    int x;
    int y;
};

struct triangulo {
    struct punto punto1;
    struct punto punto2;
    struct punto punto3;
};

struct triangulo cargar () {

    struct triangulo t;
    t.punto1.x=10;
    t.punto1.y=23;
    t.punto2.x=14;
    t.punto2.y=100;
    t.punto3.x=56;
    t.punto3.y=76;

    return t;
};




