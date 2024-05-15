/*Se lleva adelante en 20 barrios las encuestas sobre la realización de nuevo espacio
recreativo en una zona común. La encuesta debería responder por SÍ, NO y CUAL (0-NO,
1-10-SI) .Se lleva adelante el proceso de realizar las encuestas en los barrios, por
cada uno de los encuestados se relevar en un dispositivo móvil la información por
medio de una planilla electrónica con la siguiente información a cargar : orden,
encuestador,barrio,marcar_SI,marcar_NO. Desarrollar la operatorio de Toma de Datos,
esta información es cargada en una lista de registros utilizarla para dar la
siguiente información (MENÚ)

RESULTADOS
● Listar en forma ordenada por barrio
● Determinar los resultados por SI y NO, dando un mensaje de ganador
● Indicando el número de orden eliminarlo de la lista.

--ESTRATEGIA--



1
*/
#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura para los participantes
typedef struct {
    int voto_si;
    int voto_no;
    int total_de_participantes;
} Participantes;

// Definición de la estructura para un nodo de la cola
typedef struct Nodo {
    Participantes participantes;
    struct Nodo* siguiente;
} Nodo;

// Definición de la estructura para la cola
typedef struct {
    Nodo* frente;
    Nodo* final;
} Cola;

// Función para crear una cola vacía
Cola* crear_cola() {
    Cola* nueva_cola = (Cola*)malloc(sizeof(Cola));
    nueva_cola->frente = NULL;
    nueva_cola->final = NULL;
    return nueva_cola;
}

// Función para encolar un elemento
void encolar(Cola* cola, Participantes participantes) {
    Nodo* nuevo_nodo = (Nodo*)malloc(sizeof(Nodo));
    nuevo_nodo->participantes = participantes;
    nuevo_nodo->siguiente = NULL;

    if (cola->final == NULL) {
        cola->frente = nuevo_nodo;
    } else {
        cola->final->siguiente = nuevo_nodo;
    }
    cola->final = nuevo_nodo;
}

// Función para desencolar un elemento
Participantes desencolar(Cola* cola) {
    if (cola->frente == NULL) {
        printf("La cola está vacía.\n");
        Participantes participantes_vacios = {0, 0, 0}; // Valores por defecto
        return participantes_vacios;
    }
}