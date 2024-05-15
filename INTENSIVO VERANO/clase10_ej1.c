/*Se tiene un listado de servicios de lavandería con la siguiente información:
servicio y precio.
Todos los que acceden tienen un código de cliente, durante el día realiza el
pedido de por medio de una App: código de cliente, servicio y cantidad de prendas,
llega a la lavandería por medio de un delivery. Toda esta información se va apilando
y los pedidos se aceptan hasta las 15hs. Ahí en ese momento hay un cierre para
realizar la planificación de las tareas de la lavandería, en ese momento se desapila
los pedidos y se genera una lista de trabajo con la siguiente información: código de
cliente, servicio, cantidad de prendas y monto a abonar.
 


---ESTRATEGIA---
    .Creo 2 arrays de 5 espacios, en uno pongo los servicios y en el otro el precios de la lavanderia.
    .Crear una pila de pedidos que llegan por la app, con estos datos: Codigo de cliente, servicio y cantidad de prendas, hacer las funciones necesarias para crear la pila
    .Creo una funcion de tipo float llamada calculo_precio: en esta funcion yo voy a calcular el precio segun la cantidad de prendas de ropa y servicio y despues en el proceso de carga va a ser llamado para hacer el calculo automaticamente
    .Hacer un proceso de carga en el cual voy a pedir los datos del cliente y tambien voy a llamar a los arrays asi se cuento tienen que abonar, y antes de terminar el bucle de carga voy a pregunatar si son las 15hs, si no las 15hs continuo haciendo la carga si son las 15hs corto el proceso.
    .Una vez ya den las 15 hs voy a desapilar la pila clientes y los datos guardados los voy a enviar a una lista simple llamada lista_trabajo, que esta tienen que tener: codigo del cliente, servicio, cantidad de prendas y monto a abonar


 
 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//estructuras

typedef struct nodo_pila {
    int codigo_cliente;
    char servicio;
    int cantidad_prendas;
    struct nodo_pila *sig;
} nodo_cliente;

typedef struct Pila {
    nodo_cliente *pila;
} Pila;

int tipo_servicio[5]= {'L', 'C', 'S', 'A', 'P'};
int precio_servicio[5] = {20, 50, 70, 100, 10};

typedef struct nodo_lista{
    int codigo_cliente;
    int cantidad_prendas;
    char serivicio;
    int monto;
    struct nodo_lista *next;
}nodo_ticket;

//funciones

void creacion_pila(nodo_cliente **pila){*pila=NULL;}
void creacion_lista(nodo_ticket **lista){*lista=NULL;}
void apilar(nodo_cliente **pila, int cod_clientes, int cant_prendas, char servi);
void carga_de_datos(nodo_cliente **pila);
int calcular_precio(char servi, int cant_prendas);
void recorrer_lista(nodo_ticket *lista, int *cantidad_clientes, int *dinero_recaudado);
void recorrer_lista_recursivamente(nodo_ticket *lista, int *cantidad_clientes, int *dinero_recaudado);

int main () {

    nodo_cliente *pila;
    nodo_ticket *lista;
    
    creacion_pila(&pila);
    creacion_lista(&lista);

    int cantidad_clientes = 0;
    int dinero_recaudado = 0;


    carga_de_datos(&pila);
    desapilarYAgregarALista(&pila, &lista);

    printf("Cantidad de clientes (recursivo): %d\n", cantidad_clientes);
    printf("Dinero recaudado (recursivo): %d\n", dinero_recaudado);

return 0;
}


void apilar(nodo_cliente **pila, int cod_clientes, int cant_prendas, char servi){
nodo_cliente *nuevo;
nuevo=(nodo_cliente *)malloc(sizeof(nodo_cliente));
nuevo->codigo_cliente=cod_clientes;
nuevo->cantidad_prendas=cant_prendas;
strncpy(nuevo->servicio, servi, sizeof(nuevo->servicio) - 1);
nuevo->sig=*pila;
*pila=nuevo;
}


void carga_de_datos(nodo_cliente **pila){

    int hora;
    int mont;
    int cod_clientes, cant_prendas;
    char servi;

    printf("Que hora es?");
    scanf("%i", &hora);
    while (hora != 15)
    {
        printf("Ingresar codigo de cliente:");
        scanf("%i", &cod_clientes);
        printf("Ingresa cantidad de prendas");
        scanf("%i", &cant_prendas);
        printf("Ingresa servicio");
        scanf(" %c", &servi);
        apilar(&pila, cod_clientes, cant_prendas, servi);
        calcular_precio(cant_prendas, servi);
        

        printf("Que hora es?");
        scanf("%i", &hora);
    }
    


}

int calcular_precio(char servi, int cant_prendas){

    for (int i = 0; i < 5; i++)
    {
        if (servi == tipo_servicio[i])
        {
            return cant_prendas * precio_servicio[i];
        }
        
    }

return -1;

}

void desapilarYAgregarALista(Pila *pila, nodo_ticket **lista) {
    nodo_cliente *temp;

    while (pila->pila != NULL) {
        temp = pila->pila;
        pila->pila = pila->pila->sig;

        nodo_ticket *nuevo_nodo = (nodo_ticket *)malloc(sizeof(nodo_ticket));
        if (nuevo_nodo == NULL) {
            printf("Error: no se pudo asignar memoria para el nuevo nodo.\n");
            exit(1);
        }

        nuevo_nodo->codigo_cliente = temp->codigo_cliente;
        nuevo_nodo->cantidad_prendas = temp->cantidad_prendas;
        nuevo_nodo->monto = calcular_precio(temp->servicio, temp->cantidad_prendas);
        nuevo_nodo->servicio = temp->servicio; // Aquí se asigna el servicio directamente
        nuevo_nodo->next = *lista;
        *lista = nuevo_nodo;

        free(temp);
    }
}

void recorrer_lista_recursivamente(nodo_ticket *lista, int *cantidad_clientes, int *dinero_recaudado) {
    // Caso base: si la lista está vacía, retornamos
    if (lista == NULL) {
        return;
    }

    // Incrementamos la cantidad de clientes en 1
    (*cantidad_clientes)++;

    // Sumamos el monto del pedido al dinero recaudado
    *dinero_recaudado += lista->monto;

    // Llamada recursiva con el siguiente nodo de la lista
    recorrer_lista_recursivamente(lista->next, cantidad_clientes, dinero_recaudado);
}

void recorrer_lista(nodo_ticket *lista, int *cantidad_clientes, int *dinero_recaudado) {
    // Inicializamos los contadores
    *cantidad_clientes = 0;
    *dinero_recaudado = 0;
} 
