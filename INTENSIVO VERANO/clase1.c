/*Se cargan de 2 barrios la cantidad de personas que se encuestado sobre la
realizacion de nuevo espacio recreativo en una zona comun de ambos. La
encuesta deberia responder por SI, NO o registrar cuando no contestaron.
Obtener un cuadro de resultados con la siguiente informacion:

PARTICIPACION % BARRIO 1 % BARRIO 2
% SI BARRIO 1 % SI BARRIO 2
% NO BARRIO 1 % NO BARRIO 2
% NC barrio 1 % NC barrio 2*/

/* 
creamos una matriz de 2x3 donde almacene SI - NO - NO CONTESTARON de cada barrio
Pedimos los datos 

FUNCIONES:
Carga de datos
Porcentaje
Imprimir el cuadro de resultados
*/
#include<stdio.h>

void cargaDeEncuesta()
void Imprimir()
float calcularPorcentaje()


int main () {

    int barrio1[3];
    int barrio2[3];
    int totalPersonasBarrio1, totalPersonasBarrio2;

    printf("Ingresa total de personas encuestadas en barrio 1");
    scanf("%d", &totalPersonasBarrio1);

    printf("Ingresa total de personas encuestadas en barrio 2");
    scanf("%d", &totalPersonasBarrio2);

    printf("Resultados encuesta barrio 1.");
    cargaDeEncuesta(barrio1, totalPersonasBarrio1);

    printf("Resultados encuesta barrio 2.");
    cargaDeEncuesta(barrio2, totalPersonasBarrio2);

    Imprimir(barrio1, bario2, totalPersonasBarrio1, totalPersonasBarrio2);

return 0;
}

void cargaDeEncuesta(int encuesta, int totalPersonasBarrio) {

    printf("Ingrese la cantidad de personas que votaron SI");
    scanf("%d", &encuesta[0]);

    printf("Ingrese cantidad de personas que votaron NO");
    scanf("%d", &encuesta[1]);

    encuesta[2]= totalPersonasBarrio - encuesta[0] - encuesta[1];

}
float calcularPorcentaje(int parte, int total) {
    return (float)parte / total * 100;
}

void Imprimir(int totalPersonasBarrio1, int totalPersonasBarrio2, int barrio1, barrio2) {

    float participacion_barrio1 = (float)totalPersonasBarrio1 / (float) (totalPersonasBarrio1 + totalPersonasBarrio2) * 100;
    float participacion_barrio2 = (float)totalPersonasBarrio1 / (float) (totalPersonasBarrio1 + totalPersonasBarrio2) * 100;
    
    float porcentaje_si_barrio1= calcularPorcentaje(barrio1[0], totalPersonasBarrio1);
    float porcentaje_no_barrio1= calcularPorcentaje(barrio1[1], totalPersonasBarrio1);
    float porcentaje_nc_barrio1= calcularPorcentaje(barrio1[2], totalPersonasBarrio1);

    float porcentaje_si_barrio2= calcularPorcentaje(barrio2[2], totalPersonasBarrio2);
    float porcentaje_no_barrio2= calcularPorcentaje(barrio2[2], totalPersonasBarrio2);
    float porcentaje_nc_barrio2= calcularPorcentaje(barrio2[2], totalPersonasBarrio2);

    printf("--------------------------------\n");
    printf("-------Barrio 1-----------------\n");
    printf("participacion%% %.2f%%----------\n", participacion_barrio1);
    printf("si%%: %.2f%% \n", porcentaje_si_barrio1);
    printf("no%%: %.2f%% \n", porcentaje_no_barrio1);
    printf("nc%%: %.2f%% \n", porcentaje_nc_barrio1);

    printf("--------------------------------\n");
    printf("-------Barrio 2-----------------\n");
    printf("participacion%% %.2f%%----------\n", participacion_barrio2);
    printf("si%%: %.2f%% \n", porcentaje_si_barrio2);
    printf("no%%: %.2f%% \n", porcentaje_no_barrio2);
    printf("nc%%: %.2f%% \n", porcentaje_nc_barrio2);


}
