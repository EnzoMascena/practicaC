#include <stdio.h>
#include <stdlib.h>

/*

SOLUCION PROBLEMA PRIMER PARCIAL INTENSIFICACION - 19/03/2024

ESTRATEGIA

1- CARGAR LISTA DE ABONADOS
2- CARGAR EL COSTO DE LOS PEAJES
3- INICIAR EL PROCESO DE TELEPEAJE
3-1 SE REALIZA DURANTE 30 DIAS EL SCANEO DE LOS ABONADOS QUE CIRCULAN POR LA AUTOPISTA
3-1-1 POR CADA PUESTO DE PEAJE DE LA AUTOPISTA SE SCANEA: #PEAJE #ABONADO - LISTA_TELEPEAJE_30
4- PROCESAMIETNO DE LA LISTA_TELEPEAJE_30 PARA GENERA LOS TICKET
4-1 POR CADA ABONADO SE RECORRE LISTA_TELEPEAJE_30
4-1-1 CUENTA LAS VECES QUE PASO POR LOS PUERTOS DE TELEPEAJE
4-1-2 SE ACUMULA EL CONSUMO DE LOS PUESTOS
4-1-2-1 SE BUSCA POR CADA PUESTO EL COSTO
4-1-2-2 SE ACUMULAR EL MONTO DE CONSUMO (MONTO_CONSUMO)
4-1-3 SE DETERMINA POR MEDIO DE CANTIDAD DE VECES QUE PASO LOS PEAJES EL % DE DESCUENTO
4-1-3-1 TABLA: MAXIMO:100%  80-99:60% 40-79:35% MENOS:0% (DESCUENTO)
4-1-4 SE CARGA LOS DATOS A LA ESTRUCTURA PLANTEADA: COLA/PILA
4-1-4-1 DATO: #ABONADO CANT_CONSUMO MONTO_CONSUMO DESCUENTO
5- IMPRIMIR EL TICKET DE CONSUMO
5-1 DESCOLAR/DESAPILAR
5-1-1 IMPRIMIR:
5-1-1-1 #ABONADO
5-1-1-2 CANT_CONSUMO
5-1-1-3 MONTO_CONSUMO
5-1-1-4 A PAGAR
5-1-1-4.1 BONIFICACION: (MONTO_CONSUMO*DESCUENTO)/100
5-1-1-4.2 MONTO_CONSUMO - BONIFICACION
6-1 CANTIDAD DE ACCESOS DEL MES
6-1-2 RECORRO RECURSIVAMENTE LISTA_PEAJE_30
6-1-2-1 CUENTO
6-2 CANTIDAD DE ACCESOS A CADA UN DE LOS PEAJES
6-2-1 POR CADA PEAJE
6-2-1-1 RECORRO RECURSIVAMENTE LISTA_PEAJE_30
6-2-1-1-1 CUENTO SOLO LOS ACCESOS AL PEAJE PARAMETRIZADO
7- FIN


Prof. Ing. Gustavo Cerveri

AyED - 2024

*/

// Estructura de ABONADOS

typedef struct nodoabonado
   {int abonado;
    struct nodoabonado *sig;
   }nodoabonado;

// Estructura de PEAJE_10

typedef struct nodopeaje
   {int peaje;
    float precio;
   }nodopeaje;
   
// Estructura de LISTA_TELEPEAJE_30

typedef struct nodotelepeaje
   {int peaje;
    int abonado;
    struct nodotelepeaje *sig;
    }nodotelepeaje;

// Estructura de TICKET

typedef struct nodoticket
   {int abonado;
    int consumio;
    float abona;
    int descuento;
    struct nodoticket *sig;
    }nodoticket;
   
   
// Declaracion de los Subprogramas

nodoabonado *ListaVaciaAbonados(); // inicializo lista de abonados
nodotelepeaje *ListaVaciaTelepeaje(); // inicializo lista de telepeaje
nodoticket *PilaVaciaTicket(); // inicializo pila de ticket
void cargaPrecioPeaje(nodopeaje p[]); // inicializo precios de los peajes
nodoabonado *cargaAbonado(); // Carga de Abonados Habituales
nodotelepeaje *cargaTelepeaje(); // Carga de Scanner de Telepeaje
void consultaConsumoAbonado(); // Recorre la Lista de Telepeaje y retorno por Abonado: cantidad y consumo
float buscoPrecioPeaje(); // Busco el precio del puesto de peaje
int Beneficio(); // Determino el beneficio segun la cantidad de peajes consumimdos
nodoticket *PilaTicket(nodoticket *Cabeza, int ab, int co, float axa, int desc); // Apila el ticket del Abonado
void imprimirTicket(); // Lista los ticket a partir de la Pila_ticket y calculo el descuento
int contarTodosAccesosPeajes(); // cuenta todos los accesos a peajes del mes , 30 dias
int contarPorPeaje(); // cuenta cantidad por peaje
void vercarga(); // ver carga
void vercargaticket(nodoticket *Cabeza); // ver carga
void verabonados(nodoabonado *Cabeza); // ver carga

int main() {
   
    // inicializaciones
   
    nodoabonado *Cabezaabonados;
    nodotelepeaje *Cabezatelepeaje;
    nodoticket *Cabezaticket;
    struct nodopeaje precios[5];
   
    // llamada para la creacion de la Lista Simple y Pila para apunta a NULL
   
    Cabezaabonados= ListaVaciaAbonados(Cabezaabonados);
    Cabezatelepeaje= ListaVaciaTelepeaje(Cabezatelepeaje);
    Cabezaticket= PilaVaciaTicket(Cabezaticket);

    // 1- CARGAR LISTA DE ABONADOS
    Cabezaabonados= cargaAbonado(Cabezaabonados);
//    verabonados(Cabezaabonados); prueba ok
    // 2- CARGAR EL COSTO DE LOS PEAJES
    cargaPrecioPeaje(precios);
   
    //3- INICIAR EL PROCESO DE TELEPEAJE
    //3-1 SE REALIZA DURANTE 30 DIAS EL SCANEO DE LOS ABONADOS QUE CIRCULAN POR LA AUTOPISTA
   
    printf("******Scaneo de Telepeaje******\n\n");
   
        int termino=0;
        int peaje, abono;
       
        while (termino==0){
           
        // 3-1-1 POR CADA PUESTO DE PEAJE DE LA AUTOPISTA SE SCANEA: #PEAJE #ABONADO - LISTA_TELEPEAJE_30
       
            printf("Scaneo de Peaje: 10 20 30 40 50 \n"); // peajes cargados: 10 20 30 40 50
            scanf("%d", &peaje);
            printf("Scaneo de Abonado: 100 102 110 130 \n \n"); // abonados cargados: 100 102 110 130
            scanf("%d", &abono);
           
        // Cargo la LISTA DE TELEPEAJE
        Cabezatelepeaje=cargaTelepeaje(Cabezatelepeaje,peaje,abono);
         
         // Estado de Lectura del Scanner del Telepeaje
         printf("Se llego a los 30 dias ? si=1 no=otro valor \n");
         scanf("%d", &termino);
                         
        }


    // 4- PROCESAMIETNO DE LA LISTA_TELEPEAJE_30 PARA GENERA LOS TICKET
    // 4-1 POR CADA ABONADO SE RECORRE LISTA_TELEPEAJE_30
     int cantidad,descuento;
     float acumula;

        while (Cabezaabonados!=NULL)
        {
            //4-1-1 CUENTA LAS VECES QUE PASO POR LOS PUERTOS DE TELEPEAJE
            //4-1-2 SE ACUMULA EL CONSUMO DE LOS PUESTOS
            //4-1-2-1 SE BUSCA POR CADA PUESTO EL COSTO
            //4-1-2-2 SE ACUMULAR EL MONTO DE CONSUMO (MONTO_CONSUMO)
            cantidad=0;
            acumula=0;
            consultaConsumoAbonado(Cabezatelepeaje, precios, Cabezaabonados->abonado,&cantidad, &acumula);
           
            //4-1-3 SE DETERMINA POR MEDIO DE CANTIDAD DE VECES QUE PASO LOS PEAJES EL % DE DESCUENTO
            //4-1-3-1 TABLA: MAXIMO:100%  80-99:60% 40-79:35% MENOS:0% (DESCUENTO)
            descuento=Beneficio(cantidad);
           
            //4-1-4 SE CARGA LOS DATOS A LA ESTRUCTURA PLANTEADA: PILA    
            //4-1-4-1 DATO: #ABONADO CANT_CONSUMO MONTO_CONSUMO DESCUENTO              
            Cabezaticket=PilaTicket(Cabezaticket,Cabezaabonados->abonado,cantidad,acumula,descuento);
           
            Cabezaabonados=Cabezaabonados->sig;    // proximo Abonado
        }
   
   
      //5- IMPRIMIR EL TICKET DE CONSUMO
      //5-1-1 IMPRIMIR:
    //5-1-1-1 #ABONADO
    //5-1-1-2 CANT_CONSUMO
    //5-1-1-3 MONTO_CONSUMO
    //5-1-1-4 A PAGAR
    //5-1-1-4.1 BONIFICACION: (MONTO_CONSUMO*DESCUENTO)/100
    //5-1-1-4.2 MONTO_CONSUMO - BONIFICACION
      //5-1 DESCOLAR/DESAPILAR
   
    imprimirTicket(Cabezaticket); // Lista los ticket a partir de la Pila_ticket y calculo el descuento
   
    //6-1 CANTIDAD DE ACCESOS DEL MES
    //6-1-2 RECORRO RECURSIVAMENTE LISTA_PEAJE_30
    //6-1-2-1 CUENTO
    int totalaccesos=contarTodosAccesosPeajes(Cabezatelepeaje);
    printf("\n------Total de Accesos en 30 dias -----\n");
    printf("peajes: %i \n\n",totalaccesos);
   
    //6-2 CANTIDAD DE ACCESOS A CADA UN DE LOS PEAJES
    //6-2-1 POR CADA PEAJE
    //6-2-1-1 RECORRO RECURSIVAMENTE LISTA_PEAJE_30
    //6-2-1-1-1 CUENTO SOLO LOS ACCESOS AL PEAJE PARAMETRIZADO
   
    int tpeajes=0;
   
    while (tpeajes!=5)
    {
        printf("\n------Total de Accesos en 30 dias al peaje: %u-----\n",precios[tpeajes].peaje);
        printf(" ---> %i \n",contarPorPeaje(Cabezatelepeaje,precios[tpeajes].peaje));
       
        tpeajes++;
    }
    //7- FIN


}

// Desarrollos de Subprogramas - MODULARIDAD

nodoabonado *ListaVaciaAbonados(nodoabonado *cabeza )
{
    cabeza=NULL;
    return cabeza;
} // inicializo lista de abonados


nodotelepeaje *ListaVaciaTelepeaje(nodotelepeaje *cabeza)
{
    cabeza=NULL;
    return cabeza;
} // inicializo lista de telepeaje


nodoticket *PilaVaciaTicket(nodoticket *cabeza)
{
    cabeza=NULL;
    return cabeza;
} // inicializo pila de ticket

nodoabonado *cargaAbonado(nodoabonado *cabeza) // Carga de Abonados Habituales
{

// Crear en LOTE Abonados Habituales
   
    cabeza = (struct nodoabonado*)malloc(sizeof(struct nodoabonado)); // primera
    cabeza->abonado=100;
    cabeza->sig=(struct nodoabonado*)malloc(sizeof(struct nodoabonado)); // segundo
    cabeza->sig->abonado=102;
    cabeza->sig->sig=(struct nodoabonado*)malloc(sizeof(struct nodoabonado)); // tercero
    cabeza->sig->sig->abonado=110;
    cabeza->sig->sig->sig=(struct nodoabonado*)malloc(sizeof(struct nodoabonado)); // cuarto
    cabeza->sig->sig->sig->abonado=130;
    cabeza->sig->sig->sig->sig=NULL;
    return cabeza;

}

void cargaPrecioPeaje(struct nodopeaje p[5]) // inicializo precios de los peajes
{
// carga por lotes

p[0].peaje=10;
p[0].precio=2.5;
p[1].peaje=20;
p[1].precio=1.5;
p[2].peaje=30;
p[2].precio=0.25;
p[3].peaje=40;
p[3].precio=2.5;
p[4].peaje=50;
p[4].precio=0.35;


}

nodotelepeaje *cargaTelepeaje(nodotelepeaje *Cabeza, int p, int a) // Carga de Scanner de Telepeaje
{
// creacion de Nodo TELEPEAJE

        nodotelepeaje *nuevo;
        nuevo= (nodotelepeaje*)malloc(sizeof(nodotelepeaje));
        nuevo->peaje= p;
        nuevo->abonado=a;
        nuevo->sig=Cabeza;
        Cabeza=nuevo;
        return Cabeza;
}

void consultaConsumoAbonado(nodotelepeaje *Cabeza, struct nodopeaje p[5],int a,int *c, float *gasto) // Recorre la Lista de Telepeaje y retorno por Abonado: cantidad y gasto
{
int cuenta=0;
float total=0;

    while (Cabeza!=NULL)
        {
                       
        if(Cabeza->abonado==a)
        {
            cuenta++; // cuenta los peajes del abonado
            total=total+buscoPrecioPeaje(p,Cabeza->peaje); // acumula lo que se va gastando en cada peaje
       
        }
           Cabeza=Cabeza->sig;
        }
*c=cuenta;
*gasto=(float)total;

}

float buscoPrecioPeaje(struct nodopeaje p[],int pe) // Busco el precio del puesto de peaje
{
    int i,esta=1;
    i=0;
    float costo=0;
    while(esta==1 && i<5)
    {
        if(p[i].peaje==pe)
        {
          esta==0;
          costo=p[i].precio;
         
        }
        i++;
   
    }

return costo;
}

int Beneficio(int cant) // Determino el beneficio segun la cantidad de peajes consumimdos
{
    const int max=5; // Determino un Maximo ya que son 5 peajes y 30 dias daria un maximo de 15
    int descuento=0;
    float por=0;
    por=((float)cant/(float)max)*100; // en c hay que castiarlo para que no nos de cero 0.0000

 //TABLA: MAXIMO:100%  80-99:60% 40-79:35% MENOS:0% (DESCUENTO)
 
 if(por==100)
 {
     descuento=100;
  }
 else
     if (por<100 && por>=80)
     {
         descuento=60;
     }
     else
         if(por<80 && por>=40)
         {
             descuento=35;
         }
     
     return descuento;

}

nodoticket *PilaTicket(nodoticket *Cabeza, int ab, int co, float axa, int desc) // Apila el ticket del Abonado
{   nodoticket *nodo;
    nodo = (nodoticket*)malloc(sizeof(nodoticket)); // CREACION DEL ESPACIO DEL NUEVO NODO
    nodo->abonado=ab;
    nodo->consumio=co;
    nodo->abona=axa;
    nodo->descuento=desc;
    nodo->sig =Cabeza;
    Cabeza=nodo; // LA CABEZA SIEMPRE APUNTA AL TOPE DE LA PILA
    return Cabeza;

}

void imprimirTicket(nodoticket *Cabeza) // Lista los ticket a partir de la Pila_ticket y calculo el descuento
{
     nodoticket *aux;
     float calculodescuento=0;
   
    while (Cabeza!=NULL)
        {
        printf("Nro de Abonado: %i \n",Cabeza->abonado);//5-1-1-1 #ABONADO
        printf("Cantidad Consumida de Peajes: %i \n",Cabeza->consumio);//5-1-1-2 CANT_CONSUMO
        printf("Monto Consumido $: %.2f \n",Cabeza->abona);//5-1-1-3 MONTO_CONSUMO
        printf("Bonificacion: %i %%  \n",Cabeza->descuento); //5-1-1-4.1 BONIFICACION: (MONTO_CONSUMO*DESCUENTO)/100
        calculodescuento=(Cabeza->abona*Cabeza->descuento)/100;
        calculodescuento=Cabeza->abona-calculodescuento;//5-1-1-4.2 MONTO_CONSUMO - BONIFICACION    
        printf("----------------------> $ : %.2f \n", calculodescuento);//5-1-1-4 A PAGAR
       
        //5-1 DESCOLAR/DESAPILAR
        aux=Cabeza;
        free(aux);
       
        Cabeza=Cabeza->sig;
         }

}

void vercarga(nodotelepeaje *Cabeza)
{
        while (Cabeza!=NULL)
        {
        printf("Nro de Abonado: %i \n",Cabeza->abonado);//5-1-1-1 #ABONADO
        printf("Peaje : %i  \n",Cabeza->peaje); //5-1-1-4.1 BONIFICACION: (MONTO_CONSUMO*DESCUENTO)/100
       
        Cabeza=Cabeza->sig;
         }
   
}

void vercargaticket(nodoticket *Cabeza)
{
        while (Cabeza!=NULL)
        {
        printf("Nro de Abonado: %i \n",Cabeza->abonado);
        printf("consumio: %i \n",Cabeza->consumio);
        printf("descuento: %i \n",Cabeza->descuento);
        printf("$ : %.2F  \n",Cabeza->abona);
       
        Cabeza=Cabeza->sig;
         }
   
}

void verabonados(nodoabonado *Cabeza)
{
        while (Cabeza!=NULL)
        {
        printf("Nro de Abonado: %i \n",Cabeza->abonado);
   
        Cabeza=Cabeza->sig;
         }
   
}

int contarTodosAccesosPeajes(nodotelepeaje *Cabeza) // cuenta todos los accesos a peajes del mes , 30 dias
{
    if (Cabeza != NULL) {
                          return contarTodosAccesosPeajes(Cabeza->sig) + 1;
                         }
    else  {
            return 0;
          }
}

int contarPorPeaje(nodotelepeaje *Cabeza,int peaje) // cuenta cantidad por peaje
{
if (Cabeza != NULL)
                if (Cabeza->peaje==peaje)
                    {
                          return contarPorPeaje(Cabeza->sig,peaje) + 1;
                     }
                 else
                     {
                         return contarPorPeaje(Cabeza->sig,peaje);
                     }
    else  {
            return 0;
          }


}