#include<stdio.h>

#define TAMANO_VECTOR 5


void cargarVector (int vector[TAMANO_VECTOR]) {

    for (int i = 0; i < TAMANO_VECTOR; i++)
    {
        printf("Ingresar valores: ");
        scanf("%i", &vector[i]);
    }
}

void mayorMenor (int vector[TAMANO_VECTOR], int *pmayor, int *pmenor){

    *pmayor=vector[0];
    *pmenor=vector[0];

    for (int i = 0; i < TAMANO_VECTOR; i++)
    {
        if (vector[i]>*pmayor)
        {
            *pmayor=vector[i];
        }
        else
        {
            if (vector[i]<*pmenor)
            {
                *pmenor=vector[i];
            }
            
        }
    }
    

}




int main () {

    int vector[TAMANO_VECTOR];
    cargarVector(vector);
    int mayor, menor;
    mayorMenor(vector, &mayor, &menor);
    printf("El mayor elemento del vector es %i\n", mayor);
    printf("El menor elemneto del vector es %i", menor);

return 0;
}