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

//estructuras

typedef struct nodo_led {
    int numero_calle;
    int maximo_led;
    struct nodo_led *sig;
}nodo_led;

typedef struct nodo_encendidas{
    int numero_calle;
    int maximo_led;
    int led_encendidas;
    char luminosidad;
    struct nodo_encendidas *sig;
}nodo_encendidas;

//funciones

void creacion_lista(nodo_led **lista){*lista=NULL;}
void insertar_ordenado();
void carga_de_datos(nodo_led **lista);
void imprimir_lista();
void encender_luces();



int main (){

    nodo_led *lista=NULL; 
    
    carga_de_datos(&lista);

    nodo_encendidas *pila= NULL; 
    pasar_lista_a_pila(lista, &pila);

    encender_luces(pila);




return 0;
}


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


void imprimir_lista(nodo_led *lista, int num_calle, int max_led) {
    printf("Lista de calles:\n");
    while (lista != NULL) {
        printf("Número de calle: %d, Máximo de LEDs: %d\n", lista->numero_calle, lista->maximo_led);
        lista = lista->sig;
    }
}

void carga_de_datos(nodo_led **lista){

    int num_calle, max_led, op;

    printf("Quieres cargar calles? [1-si][0-no]");
    scanf("%i", &op);
    while (op == 1)
    {
        printf("Ingresa numero de calle");
        scanf("%i", &num_calle);
        printf("Ingresa maximo de leds (no puede ser mayor a 10)");
        scanf("%i", &max_led);
        while (max_led > 10)
        {
            printf("error vuelve a hacer la carga");
            scanf("%i", &max_led);
        }
        
        
        insertar_ordenado(lista, num_calle, max_led);

        printf("Quieres seguir cargando calles? [1-si][0-no]");
        scanf("%i", &op);
    }
    imprimir_lista(lista, num_calle, max_led);
    
}

void pasar_lista_a_pila(nodo_led *lista, nodo_encendidas **pila) {
    nodo_led *temp = lista; // Nodo temporal para recorrer la lista

    while (temp != NULL) {
        // Crear un nuevo nodo_encendidas y asignarle los valores del nodo_led
        nodo_encendidas *nuevo_nodo = (nodo_encendidas *)malloc(sizeof(nodo_encendidas));
        nuevo_nodo->numero_calle = temp->numero_calle;
        nuevo_nodo->maximo_led = temp->maximo_led;
        nuevo_nodo->led_encendidas = 0; // Inicialmente no hay LEDs encendidos
        nuevo_nodo->luminosidad = 'N'; // Inicialmente la luminosidad es 'N'
        nuevo_nodo->sig = NULL;

        // Conectar el nuevo nodo al inicio de la pila
        nuevo_nodo->sig = *pila;
        *pila = nuevo_nodo;

        // Avanzar al siguiente nodo de la lista
        temp = temp->sig;
    }
}


void encender_luces(nodo_encendidas *pila) {
    while (pila != NULL) {
        int led_encendidas;
        printf("Calle %d, máximo %d leds. ¿Cuántas luces deseas encender? ", pila->numero_calle, pila->maximo_led);
        scanf("%d", &led_encendidas);

        // Validar que la cantidad de LEDs a encender esté dentro del rango permitido
        while (led_encendidas < 0 || led_encendidas > pila->maximo_led) {
            printf("Cantidad inválida. Por favor, ingresa un número entre 0 y %d: ", pila->maximo_led);
            scanf("%d", &led_encendidas);
        }

        // Actualizar la cantidad de LEDs encendidos y la luminosidad de la calle
        pila->led_encendidas = led_encendidas;
        if (pila->led_encendidas > 0) {
            strcpy(pila->luminosidad, "Y");
        } else {
            strcpy(pila->luminosidad, "N");
        }

        pila = pila->sig; // Avanzar al siguiente nodo de la pila
    }
}