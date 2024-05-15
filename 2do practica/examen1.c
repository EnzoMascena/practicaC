/*Almacén de Ramos Generales: se tiene una lista simplemente enlazada y ordenada de productos con la siguiente información:
id del producto (elemento por el que se mantiene el listado ordenado), tipo de producto, precio y stock. 
Al principio del día, viene el proveedor con productos para reponer, y mantiene la información en formato de pila. 
Los elementos de la pila que están en la lista se actualizan (su stock solamente). No hay productos nuevos. Durante el dia 
se atiende a los clientes, cada cliente hace un pedido no determinado de productos y al fnal del pedido se imprime un 
billete con el total(cliente puede llevar distintos productos y siempre habra stock).
Cada vez que se atiende un cliente se va a ctualizando el stock en tiempo real. Adicionalmente se va generando una lista 
separada de productos vendidos. tiene el mismo formato que la lista original pero ahora el stock es reemplazado por las 
cantidades vendidas. al final del dia, recorrer recursivamente para ver cuanto es el monto total vendido */

/*----ESTRATEGIA--

1.lista de productos ordenada por id de producto

    -YA ESTA CARGADA->NO HAY QUE CREARLA
    typdef struct Producto{
        int id;
        char tipo_producto;
        float precio;
        int cantidad_stock;
        struct Producto *sig_producto;  
    }producto;

    struct Producto *raiz=NULL;
        
2.arranca el dia y el proovedor viene con prod para reponer el proovedor cuenta con una PILA con los mismos productos
de la lista, en la cual solo se ACTUALIZA EL STOCK

    typedef struct PilaProveedor{

        int id;
        char tipo_producto;
        float precio;
        int cantidad_stock;
        struct PilaProveedor *sig_producto; 
    }proveedor;

    struct PilaProveedor *raizPila=NULL;

    -el stock se actualiza a medida que el cliente va poniendo el id y las cantidades
        .mediante una funcion para cargar productos(que se va a invocar cuando se atienda al cliente)
        y pasar por ref(producto **pila) e ir restando del stock

3.durante el dia se atiende a los clientes, que hacen un pedido de cualquier producto y cantidad(nunca se queda sin stock)

    -preguntar si quiere cargar productos y hacer un while mientras la rta sea si
    -llamar a cargar productos y pedir que ingrese id y cantidad(pasar por referencia la pila)

4.cada vez que se atiende un cliente se actualiza el stock en tiempo real

    .crear la lista de productos vendidos e inicializar

    typedef struct ProdVendidos{

        int id;
        char tipo_producto;
        float precio;
        int cantVendida;
        struct Producto *sig_producto;  
    }prodVendidos, listaVendidos;        
    
    ProdVendidos *raiz=NULL;

    -se tiene que desapilar hasta que el id que ingreso el cliente sea el id que aparece en la pila(mediante una funcion buscar), y restar la cantidad
    a cantStock, y luego volver a apilar (COMO CHOTA SE HACE ESO)
    
    buscar();
    desapilar();
    apilar();
    

5.al final de la compra se debe imprimir un billete con el total.

    imprimir_billete_con_total|(cantProd, id);
    
6.se genera un lista separada de productos vendidos igual a la lista original pero stock se remplaza por cantidades vendidas
    
    listaProdVendidos * raizProdVendidos=NULL;

7.recorrer recursivamente para saber el monto total vendido.

    float montoRecursivo(ProdVendidos *raiz){

        float montoTotal=0;

        if(lista == NULL){

            return 0;

            else{
                return montoTotal + montoRecursivo(raizProdVendidos->psig);
            }
        }    
    }



float informeRecursivo(NodoLista * lista, CatProductos * catalogo) {
    float peso = 0;
    // CASO BASE
    if (lista == NULL) {
        return 0;
    } else {
        peso = obtenerPeso(lista->id_producto, catalogo);
        return peso + informeRecursivo(lista->psig, catalogo);
    }
}
    

*/
/*Cant total stock->infinito
stock_AC-=cant_vendida*/



#include<stdio.h>
#include<stdlib.h>


typedef struct Producto{
        int id;
        char tipo_producto;
        float precio;
        int cantidad_stock;
        struct Producto *sig_producto;  
}producto;

typedef struct PilaProveedor{

        int id;
        char tipo_producto;
        float precio;
        int cantidad_stock;
        struct PilaProveedor *sig_producto; 
}proveedor;

typedef struct ProdVendidos{

        int id;
        char tipo_producto;
        float precio;
        int cantVendida;
        struct Producto *sig_producto;  

}prodVendidos, listaVendidos;        


struct Producto *raizProd=NULL;
struct PilaProveedor *raizPila=NULL;
struct ProdVendidos *raizVendidos=NULL;

void cargarProducto();
void crearListaProdVendidos();
void buscar();
void desapilar();
void apilar();
void imprimirBillete();
float montoRecursivo();

int main(){
    prodVendidos * L1;

    int rta;
    printf("¿Quiere cargar un producto? 1.SI | 0.NO");
    scanf("%d", &rta);
    while(rta == 1){

        cargarProducto();
        crearListaProdVendidos();
        buscar();
        desapilar();
        apilar();
        imprimirBillete();

    printf("¿Quiere seguir cargando productos?");
    scanf("%d", &rta);
    }
    printf("El monto total fue de:%0.2f", montoRecursivo());
    return 0;
}

void cargarProducto(){

    int id, cantidad;

    printf("Ingrese id del producto");
    scanf("%d", &id);
    printf("Ingrese la cantidad");
    scanf("%d", &cantidad);

    return 0;
}
void crearListaProdVendidos(ProdVendidos **raizVendidos){

    ProdVendidos *nuevo =malloc(sizeof(ProdVendidos));
    if(raizVendidos == NULL){   //si esta vacia, inserto un nuevo nodo

        raizVendidos=nuevo;
        nuevo->sig_productos=NULL;
    }else{


    }

    return 0;
}
void buscar(){



    return 0;
}
void desapilar(){




    return 0;
}
void apilar(){



    return 0;
}
void imprimirBillete(){



    return 0;
}

void calcularMontoTotalRecursivo(Nodo* listaVentas, float* montoTotal) {
    if (listaVentas != NULL) {
        *montoTotal += listaVentas->producto.precio;
        calcularMontoTotalRecursivo(listaVentas->siguiente, montoTotal);
    }