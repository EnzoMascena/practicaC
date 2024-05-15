/*Desde la municipalidad nos han pedido que hagamos un programa que les ayude a
gestionar las LED de cierta zona de la ciudad. Esta zona de la ciudad tiene calles,
y en cada una de ellas hay 10 LED, numeradas del 1 al 10. Con el fin de ahorrar, la
municipalidad ha decidido que no se van a encender todas las LED de cada calle, sino
que en cada calle habrá un número máximo de LED que pueden estar encendidas
simultáneamente. (Nosotros almacenaremos estos máximos en una LISTA) El programa que
nos piden debe realizar las siguientes tareas:
    1- Leer el no máximo de LED que pueden estar encendidas simultáneamente en cada
    calle. Ejemplo: Por cada Calle se determina el número máximo de LED.
    2 - Configuración de encendido de LED (almacenaremos esta configuración en una
    PILA). Controlar el número máximo de LED por cada Calle. Configurar LED que van a
    estar encendidos por la calle.
    3 - Obtener la cantidad de LED encendidas por la calle. Ejemplo: En la calle 1 hay 2
    LED encendidas de un máximo de 2.
    4 - Obtener cada calle el grado de luminosidad, con el siguiente criterio
    a. “MUY LUMINOSA”, el 100% de los LED máximos por Calle
    b. “LUMINOSA”, entre 50% y 99 % de los LED máximos por Calle
    c. “PENUMBRAS”, entre 30% y 49% de los LED máximos por Calle
    d. “OSCURO”, entre 0% y 29% de los LED máximos por Calle
    Por ejemplo: LED encendidos: 2, LED Maximo:4, Porcentaje 50% “LUMINOSA”
    5 - Apagar todas los LED configurados (Vaciar la PILA).
    
    ---ESTRATEGIA---

    1. Creamos 2 estructuras, una llamada nodo_led que almacena el numero de calle y la cantidad de luces que tiene
    y otra llama nodo_encendidas que almacena la cantidad maxima de luces que tiene esa calle, las luces que estan encendidas y char luminosidad.
    2. Hacer el proceso de carga para que yo pregunte el numero de calle, la cantidad maxima de luces led que puedo tener encendidas (1 - 10) y almacenar en una LISTA 
    3. Recorrer la lista y hacer una funcion para ENCENDER LUCES. que sepa el numero de calle, la maxima cantidad de luces que se pueden encender y las luces que tengo encendidas, en base a eso sacar el porcentaje de luminosidad y agrupar esto en una PILA.
    4. Hacer una funcion que IMPRIMA el numero de calle de forma ordenada de menor a mayor, la cantidad maximas de luces y las luces encendidas y el porcentaje de luminosidad. EJ: Calle 44, Maximo led 7, encendias 7 "MUY LUMINOSO"
    5. vaciar pila

    */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Estructuras
typedef struct nodo_led {
    int numero_calle;
    int maximo_led;
    struct nodo_led *sig;
} nodo_led;

typedef struct nodo_encendidas {
    int numero_calle;
    int maximo_led;
    int led_encendidas;
    float luminosidad;
    struct nodo_encendidas *sig;
} nodo_encendidas;

// Prototipos de funciones
void crear_lista(nodo_led **lista);
void carga_de_datos(nodo_led **lista);
void insertar_lista(nodo_led **lista, int num_calle, int max_led);
void imprimir_lista(nodo_led *lista);
void pasar_lista_a_pila(nodo_led *lista, nodo_encendidas **pila);
void encender_luces(nodo_encendidas *pila);
void imprimir_pila(nodo_encendidas *pila);
void vaciar_pila(nodo_encendidas **pila);
float calcular_luminosidad(int leds_encendidos, int maximo_leds);

int main() {
    nodo_led *lista = NULL;
    carga_de_datos(&lista);

    nodo_encendidas *pila = NULL;
    pasar_lista_a_pila(lista, &pila);

    encender_luces(pila);
    imprimir_pila(pila);
    vaciar_pila(&pila);
    return 0;
}

// Función para cargar datos de calles
void carga_de_datos(nodo_led **lista) {
    int op, num_calle, max_led;

    printf("Deseas cargar datos de Calle?[1-si][0-no]\n");
    scanf("%i", &op);
    while (op == 1) {
        printf("Cual es el numero de la calle?\n");
        scanf("%i", &num_calle);
        printf("Cual es el maximo de leds?(MAX 10)\n");
        scanf("%i", &max_led);
        while (max_led > 10) {
            printf("ERROR. Cual es el maximo de leds?(MAX 10)\n");
            scanf("%i", &max_led);
        }

        insertar_lista(lista, num_calle, max_led);

        printf("Deseas cargar datos de Calle?[1-si][0-no]\n");
        scanf("%i", &op);
    }
    imprimir_lista(*lista);
}

// Función para insertar un nodo en la lista de calles
void insertar_lista(nodo_led **lista, int num_calle, int max_led) {
    nodo_led *nuevo_nodo = (nodo_led *)malloc(sizeof(nodo_led));
    nuevo_nodo->numero_calle = num_calle;
    nuevo_nodo->maximo_led = max_led;
    nuevo_nodo->sig = NULL;

    if (*lista == NULL) {
        *lista = nuevo_nodo;
    } else {
        nodo_led *actual = *lista;
        while (actual->sig != NULL) {
            actual = actual->sig;
        }
        actual->sig = nuevo_nodo;
    }
}

// Función para imprimir la lista de calles
void imprimir_lista(nodo_led *lista) {
    printf("Lista de calles:\n");
    while (lista != NULL) {
        printf("Numero de calle: %d, Maximo de LEDs: %d\n", lista->numero_calle, lista->maximo_led);
        lista = lista->sig;
    }
    printf("\n");
}

// Función para pasar los datos de la lista de calles a la pila de calles encendidas
void pasar_lista_a_pila(nodo_led *lista, nodo_encendidas **pila) {
    nodo_led *temp = lista;
    while (temp != NULL) {
        nodo_encendidas *nuevo_nodo = (nodo_encendidas *)malloc(sizeof(nodo_encendidas));
        nuevo_nodo->numero_calle = temp->numero_calle;
        nuevo_nodo->maximo_led = temp->maximo_led;
        nuevo_nodo->led_encendidas = 0;
        nuevo_nodo->luminosidad = 0.0f;
        nuevo_nodo->sig = NULL;

        nuevo_nodo->sig = *pila;
        *pila = nuevo_nodo;

        temp = temp->sig;
    }
}

// Función para encender luces
void encender_luces(nodo_encendidas *pila) {
    while (pila != NULL) {
        printf("Calle %d, maximo %d leds.\n", pila->numero_calle, pila->maximo_led);

        printf("Ingrese la cantidad de luces encendidas: ");
        scanf("%d", &pila->led_encendidas);

        pila->luminosidad = calcular_luminosidad(pila->led_encendidas, pila->maximo_led);

        pila = pila->sig;
    }
}


float calcular_luminosidad(int leds_encendidos, int maximo_leds) {
    return ((float)leds_encendidos / maximo_leds);
}

void imprimir_pila(nodo_encendidas *pila) {
    printf("Datos de calles encendidas:\n");
    while (pila != NULL) {
        printf("Numero de calle: %d, Maximo de LEDs: %d, LEDs encendidos: %d, Luminosidad: %.2f, ", 
               pila->numero_calle, pila->maximo_led, pila->led_encendidas, pila->luminosidad);

        // Determinar el criterio de luminosidad
        if (pila->luminosidad == 1.0f) {
            printf("MUY LUMINOSA\n");
        } else if (pila->luminosidad >= 0.5f && pila->luminosidad <= 0.99f) {
            printf("LUMINOSA\n");
        } else if (pila->luminosidad >= 0.3f && pila->luminosidad <= 0.49f) {
            printf("PENUMBRAS\n");
        } else {
            printf("OSCURA\n"); // Si no cumple ninguno de los criterios anteriores
        }

        pila = pila->sig;
    }
}


void vaciar_pila(nodo_encendidas **pila) {
    nodo_encendidas *temp;
    while (*pila != NULL) {
        temp = *pila; 
        *pila = (*pila)->sig; 
        free(temp); 
    }
    *pila = NULL;
}

