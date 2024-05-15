/*Desde  la  municipalidad  nos  han  pedido  que  hagamos  un  programa  que  les  ayude  a 
gestionar las LED de cierta zona de la ciudad. Esta zona de la ciudad tiene calles, 
y en cada una de ellas hay 10 LED, numeradas del 1 al 10. Con el fin de ahorrar, la 
municipalidad ha decidido que no se van a encender todas las LED de cada calle, sino 
que  en  cada  calle  habrá  un  número  máximo  de  LED  que  pueden  estar  encendidas 
simultáneamente. (Nosotros almacenaremos estos máximos en una LISTA) El programa que 
nos piden debe realizar las siguientes tareas: 
1-  Leer  el  nº  máximo  de  LED  que  pueden  estar  encendidas  simultáneamente  en  cada 
calle. Ejemplo: Por cada Calle se determina el número máximo de LED. 
2  -  Configuración  de  encendido  de  LED  (almacenaremos  esta  configuración  en  una 
PILA). Controlar el número máximo de LED por cada Calle. Configurar LED que van a 
estar encendidos por la calle
3 - Obtener la cantidad de LED encendidas por la calle. Ejemplo: En la calle 1 hay 2 
LED encendidas de un máximo de 2. 
4 - Obtener cada calle el grado de luminosidad, con el siguiente criterio
a. “MUY LUMINOSA”, el 100% de los LED máximos por Calle
b. “LUMINOSA”, entre 50% y 99 % de los LED máximos por Calle
c. “PENUMBRAS”, entre 30% y 49% de los LED máximos por Calle
d. “OSCURO”, entre 0% y 29% de los LED máximos por Calle
Por ejemplo: LED encendidos: 2, LED Maximo:4, Porcentaje 50% “LUMINOSA”
5 - Apagar todas los LED configurados (Vaciar la PILA).

----ESTRATEGA----
Por calle hay un numero maximo de LEDS encendidas: se almacena en una LISTA(maximo y calle)
EN CADA CALLE HAY 10 LEDS.

Por cada calle se determina el maximo de leds encedidos --> EN UNA PILA

Printf con cantidad de luces que hay por calle

Obtener cada calle el grado de luminosidad, con el siguiente criterio
a. “MUY LUMINOSA”, el 100% de los LED máximos por Calle
b. “LUMINOSA”, entre 50% y 99 % de los LED máximos por Calle
c. “PENUMBRAS”, entre 30% y 49% de los LED máximos por Calle
d. “OSCURO”, entre 0% y 29% de los LED máximos por Calle
Por ejemplo: LED encendidos: 2, LED Maximo:4, Porcentaje 50% “LUMINOSA”
5 - Apagar todas los LED configurados (Vaciar la PILA).


*/
#include<stdio.h>
#include<stdlib.h>

//estructuras

typedef struct lista_calle{      //calle lista basica
    int maximo_led;
    int numero_calle;
    struct lista_calle *sig;
}nodo_calle;

typedef struct pila_encendidas{     //luces encendidas de tipo pila
    int calle;
    int led_encendidasM;
    struct pila_encendidas *sig;
}nodo_encendidas;    

//Subprocesos

void crear_lista(nodo_calle **lista){*lista=NULL};
void 




int main () {




}