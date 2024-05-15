#include<stdio.h>
#include<stdlib.h>

typedef struct pila{
    int valor;
    struct pila *sig;
}nodo_pila;

nodo_pila *cabeza=NULL;

void insertar_nodo(int dato) {
    nodo_pila *nuevo;
    nuevo = malloc(sizeof(nodo_pila));
    nuevo->valor=dato;
    if (cabeza == NULL)
    {
        cabeza = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig=cabeza;
        cabeza=nuevo;
    }


}

void imprimir() {
    nodo_pila *reco=cabeza;
    printf("Lista completa \n");
    while (reco !=NULL)
    {
        printf("%i\n", reco->valor);
        reco=reco->sig;
    }
    printf("/n");
     

}


int main() {

    int dato, op;
    
    printf("Desas ingrese valores a la pilan\n");
    printf("1-si 0-no\n");
    scanf("%i", &op);
    if (op == 1)
    {
        while (op == 1)
        {
            printf("Ingrese valor\n");
            scanf("%i", &dato);
            insertar_nodo(dato);
            printf("Desas ingrese valores a la pila\n");
            printf("1-si 0-no\n");
            scanf("%i", &op);
        }
        imprimir();
    }
    else
    {
        printf("La lista esta vacia");
    }
    
    nodo_pila *temp;
    while (cabeza != NULL) {
        temp = cabeza;
        cabeza = cabeza->sig;
        free(temp);
    }


return 0;    
}