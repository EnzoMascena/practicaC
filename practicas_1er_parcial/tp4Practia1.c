/*En una fábrica de llantas se confeccionan entre 500 y 1000 llantas, por cada uno de los 4
turnos de 6 horas cada uno, con un tamaño de 14 a 19. Al terminar la fabricación de cada
llanta, se la ubica en la pila del tamaño que le corresponde, pero si en el proceso de pulido
se raya, dicha llanta se separa en otra pila de mercadería con detalles, también de acuerdo
a su tamaño. Cuando una pila alcanza las 10 llantas (de las buenas o de las rayadas) se
las embala en cajas y se las despacha al sector de producción.
Al inicio del día no existen llantas para ser embaladas, pero al finalizar un turno e iniciar un
nuevo en el mismo día, se aprovecha el remanente de llantas apiladas listas para embalar.
Diseñar una solución que permita:
a) Informar en cada turno, la cantidad total de cajas armadas por cada tamaño de llanta,
indicando cuántas de ellas son con fallas y cuántas sin fallas, y ordenadas en forma
decreciente según la cantidad de cajas de llantas sin fallas
b) Calcular e informar el porcentaje de llantas sin fallas fabricadas en un día que no
fueron embaladas (remanente final), con respecto a la producción diaria total, pero
discriminado por cada tamaño*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define TURNO 4
#define HORAS_TURNO 6
#define TAMANO_MINIMO 14
#define TAMANO_MAXIMO 19

typedef struct {
    
    int tamanio;
    int conFalla;

}llanta;




int main () {


}