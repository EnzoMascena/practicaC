#include<stdio.h>

void ticket (int h,float p, float pT){
    
    printf("------------------------\n");
    printf("Laburaste %i\n", h);
    printf("Te pagan por hora %.2f\n", p);
    printf("Cobras en total %.2f\n", pT);
    printf("Jaja que miseria\n");
    printf("------------------------\n");
}

int main (){

    int horas;
    float pago, pagoTotal;

    printf("Ingresa horas trabajadas: ");
    scanf("%i", &horas);
    printf("Ingresa cuanto te pagan por hora down del orto: ");
    scanf("%f", &pago);
    pagoTotal=pago*horas;
    ticket(horas,pago,pagoTotal);


return 0;
}