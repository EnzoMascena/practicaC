/*Se lleva adelante en 4 barrios las encuestas sobre la realización de nuevo
espacio recreativo en una zona común. La encuesta debería responder por SÍ,
NO. Llegan las encuestas al centro y son cargadas al sistema, las encuestas
llegan por barrio en un paquete y recién al cargar la última encuesta de ese
barrio se pasa al otro. Desarrollar la operatorio y se desea ver los
siguientes resultados parciales y finales de las encuestas:

CUADRO DE RESULTADOS PARCIALES (POR BARRIO)
● CANTIDAD DE PARTICIPANTES(solo lo que votaron)
● CANTIDAD Y PORCENTAJE DE VOTOS POR SI - SOBRE EL TOTAL DEL BARRIO
● CANTIDAD Y PORCENTAJES DE VOTOS POR NO - SOBRE EL TOTAL DEL BARRIO
CUADRO DE RESULTADOS FINALES (PROCESADOS TODOS LOS BARRIOS)
● CANTIDAD DE PARTICIPANTES(solo lo que votaron)
● CANTIDAD Y PORCENTAJE DE VOTOS POR SI - DE TODOS LOS BARRIOS
● CANTIDAD Y PORCENTAJES DE VOTOS POR NO - DE TODOS LOS BARRIOS

1.Hacer las encuentas en un barrio que se responden unicamente por SI o por
No una vez termina la encuesta pasar al siguiente barrio
2.Una vez terminado la encuesta de los 4 barrios imprimir un documento con los resultados que
cumpla lo siguiente
    2.1.Por barrio la cantidad de personas que votaron y el procentajes de Si o No
    2.2 Lo mismo que el 2.1 pero en total a todos los barrios


*/

#include<stdio.h>
#include<conio.h>

#define MAX_BARRIO 4

int main () {

    int voto_si_totales[MAX_BARRIO]= {0};
    int voto_no_totales[MAX_BARRIO]= {0};

    int total_si = 0;
    int total_no = 0;

    for (int i = 0; i <= 4; i++)
    {
        printf("Iniciar encuesta de barrio %d\n", i );
        int voto = 0; 
        do {
            printf("Vota a favor o en contra [1/si][2/no][3/finalizar votacion]: ");
            scanf("%d", &voto);
            if (voto == 1) {
                voto_si_totales[i]++; 
            } else if (voto == 2) {
                voto_no_totales[i]++; 
            }
        } while (voto != 3);
        printf("SIGUIENTE BARRIO");

    }

    printf("RESULTADO POR BARRIO: ");

    for (int i = 0; i < 4; i++)
    {
        int total_votos_barrio = voto_si_totales[i] + voto_no_totales[i];
        float porcentaje_si = (float)voto_si_totales[i] / total_votos_barrio * 100; 
        float porcentaje_no = (float)voto_no_totales[i] / total_votos_barrio * 100; 
        printf("Barrio %i", i + 1);
        printf("Cantidad de participantes: %s ", total_votos_barrio);
        printf("Porcentaje si: %2.f", porcentaje_si);
        printf("Porcentaje no: %2.f", porcentaje_si);

    }
    
    for (int i = 0; i < 4; i++) {
        total_si += voto_si_totales[i];
        total_no += voto_no_totales[i];
    }

    int total_votos = total_si + total_no;
    
    float porcentaje_total_si = (float)total_si / total_votos * 100;
    float porcentaje_total_no = (float)total_no / total_votos * 100;

    printf("Porcentaje total de votos 'Sí': %.2f%%\n", porcentaje_total_si);
    printf("Porcentaje total de votos 'No': %.2f%%\n", porcentaje_total_no);

return 0;  
}