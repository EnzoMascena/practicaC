
//APUNTES BASICOS//
*REGISTROS +1 TIPO VALOR*
for (i=0; i<5; i++){
		printf("Mostrando datos cargados en el alumno %d\n", i);
		printf("---------------------------------------\n");
		printf("Nombre: %s\n", vecAlu[i].apellido);
		printf("Legajo: %s\n", vecAlu[i].legajo);
		printf("Nota:   %d", vecAlu[i].nota);
	}

*ARRAYS 1 SOLO TIPO VALOR*

------------------------------------------------------------------------BASICOS LISTAS-------------------------------------------------------------------------------------

LISTA PARTE 1

int main(){
	struct nodo *L;		
	struct nodo *aux;	.
	L=(struct nodo *) malloc(sizeof(struct nodo)); 
	L->siguiente=0;	
	L->numero=5;	

	aux=L;
    if (aux!=0){
        while(aux->siguiente!= 0){	
            aux=aux->siguiente;		
        }
    }
   
    aux->siguiente = malloc( sizeof(struct nodo) );  

    aux = aux->siguiente; 

    if (aux==0){
        printf( "Sin memoria" );
        return 0;		
    }
    
    aux->siguiente = 0;         
    aux->numero = 42;

	aux=L;
	i=1;
	printf("Mostrando datos cargados en la lista");
	    while(aux!=0){
		    printf("Nodo: %d\n", i);
		    printf("Numero en nodo: %d\n", aux->numero);
		    printf("\n");
		
		    aux=aux->siguiente;
		    i++;
	}
	return 0;
------------------------------------------------------------------INSERTAR---------------------------------------------------------------------------------
void insertar(struct Alumno **lista){
	char apellido[15], legajo[10];
	float nota;

	struct Alumno *aux;		
	struct Alumno* nuevo = malloc(sizeof(struct Alumno)); 
	printf("Ingrese apellido: ");
	scanf("%s", apellido);
	printf("Ingrese legajo (formato XX-YYYYY-Z): ");
	scanf("%s", legajo);
	printf("Ingrese nota: ");
	scanf("%f", &nota);
	strcpy(nuevo->apellido, apellido);	
	strcpy(nuevo->legajo, legajo);
	nuevo->nota=nota;
	nuevo->siguiente=0;		
	if(*lista==0){	
		*lista=nuevo;
	}
	else{			
		aux=*lista;		
		while(aux->siguiente!= 0){	
            aux=aux->siguiente;		
        }
		aux->siguiente=nuevo;	
	}
}
----------------------------------------------------------LISTAR/ENCOLAR/APILAR-------------------------------------------------------

void listar(struct Alumno *lista){	
	if (lista==0){				
		printf("No hay alumnos cargados");
	}
	else{
		while (lista!=0){
			printf("Apellido: %s\n", lista->apellido);
			printf("Legajo: %s\n", lista->legajo);
			printf("Nota: %.2f\n", lista->nota);
			printf("----------------------------\n");
			lista=lista->siguiente;
	
	}

    void apilar(struct Pila **p, struct Libro l){
	struct Pila *nuevo=malloc(sizeof(struct Pila));	
	nuevo->dato=l;		
	nuevo->ps=*p;		
	*p=nuevo;			
}

void encolar(/*struct Cola *c, struct Proceso p*/){
	struct lCola *nuevo=malloc(sizeof(struct lCola));	
	nuevo->dato= p;
	nuevo->ps= 0;
	if (c->pini == 0){		
		c->pini= nuevo;		
	}
	else{
		c->pfin->ps= nuevo;	
	}
	c->pfin= nuevo;			
---------------------------------------------------------DESAPILAR/DESENCOLAR------------------------------------------------------------
void desapilar(struct Pila **p, struct Libro *l){
	struct Pila *aux=*p; 
	*l= aux->dato;	 	
	*p=aux->ps;
	free(aux);
}

void desencolar(struct Cola *c, struct Proceso *p){
	struct lCola *aux=malloc(sizeof(struct lCola));	
	*p= c->pini->dato;		
	aux= c->pini;			
	c->pini= c->pini->ps;	
	if (c->pini == 0){				
		c->pfin= 0;			
	}
	free(aux);
}
----------------------------------------------------RECURSIVIDAD-----------------------------------------------------------------------
void imprimir_recursivo(nodo *lista){
		nodo *aux;							// para recorrer la lista
		aux = lista;						// apunto aux al inicio de la lista
		if (aux != NULL) {					// mientras no se termine la lista
			printf("%d", aux->valor);		// imprimo el valor del nodo actual
			imprimir_recursivo(aux->sig);	// vuelvo a ejecutar la funcion, pero cada vez el nodo actual es el siguiente al anterior.
		}
	}

----------------------------------------------------CARGAR LISTAS-----------------------------------------------------------------------
void cargarDivisas(divisas *datosDivisas[4]){
	for (int i = 0; i < 4; i++){
		printf("Ingrese el precio de la compra para la moneda %d\n",i);
		scanf("%f",&(*datosDivisas)->compra);
		printf("Ingrese el precio de la venta\n");
		scanf("%f",&(*datosDivisas)->venta);
		printf("Ingrese el cupo para la moneda\n");
		scanf("%d", &(*datosDivisas)->cupo);
	}
}

----------------------------------------------------VERIFICACION-----------------------------------------------------------------------
bool quedaCupo(divisas datosDivisas[4]){
	int noQueda;
	for (int i=0; i < 4; i++){
		if(datosDivisas[i].cupo == 0){
			noQueda++;
		}
	}
	if (noQueda == 4)
	{
		return false;
	} else {
		return true;
	}
}

----------------------------------------------------ATENDER-----------------------------------------------------------------------
void atender(nodo **l, divisas *datosDivisas[4], clientes *cliente){
	

	printf("Ingrese el numero del cliente\n");
	scanf("%d",&cliente->nmro_cliente);
	printf("Ingrese la moneda de ingreso (0: USD 1:EURO 2:REAL 3:ARS)\n");
	scanf("%d",&cliente->ingreso);
	printf("Ingrese el monto de montoIngreso\n");
	scanf("%f",&cliente->montoIngreso)
	printf("Ingrese la moneda de egreso (0: USD 1:EURO 2:REAL 3:ARS)\n");
	scanf("%d",&cliente->egreso);

	if(cliente.ingreso == 3){
		cliente.egreso = cliente.montoIngreso / datosDivisas[cliente.egreso].compra;
	} else{
		cliente.egreso = cliente.montoIngreso * datosDivisas[cliente.egreso].venta;
	}

	printf("Ingrese el monto de egreso\n");
	scanf("%f",&cliente.montoEgreso);

	datosDivisas[cliente.ingreso*clie].cupo += cliente.ingreso;
	datosDivisas[cliente.egreso].cupo -= cliente.egreso;
}
---------------------------------------------------INFORME (FINAL DEL DIA)-----------------------------------------------------------------------
void informarLista(nodo *nodoDiv){

	while (nodoDiv != 0){
		printf("El numero de cliente es %d \n",nodoDiv->dato.nmro_cliente);		
		printf("La divisa que ingreso es: %d \n",nodoDiv->dato.ingreso);
		printf("El monto de la misma es de: %.2f \n", nodoDiv->dato.montoIngreso);
		printf("La divisa que egreso es: %d \n",nodoDiv->dato.egreso);
		printf("El monto de la misma es del: %.2f \n", nodoDiv->dato.montoEgreso);
		nodoDiv = nodoDiv->sig;
	}
}
	
---------------------------------------------------EJEMPLOS DE ESTRUCTURAS-----------------------------------------------------------------------
typedef struct divisas{
	float compra;
	float venta;
	int cupo,
}monedas, divisas, cambios;

typedef struct clientes {
	int nmro_cliente;
	int ingreso; //0: USD 1:EURO 2:REAL 3:ARS
	int egreso; //0: USD 1:EURO 2:REAL 3:ARS
	float montoIngreso;
	float montoEgreso;
} clientes;

typedef struct nodoDiv {
	struct clientes dato;
	struct nodoDiv *sig;
}nodo;


---------------------------------------------------EJEMPLO DE UN BUEN MAIN Y SUS FUNCIONES-----------------------------------------------------------------------
void inicializarListas(nodo **l);
void cargarDivisas(divisas *datosDivisas[4]); 
bool quedaCupo(divisas datosDivisas[4]);
void atender(nodo **l, divisas *datosDivisas[4], clientes *cliente);
void procesarClientes(nodo **listaArs, nodo **listaEuro, nodo **listaUsd, nodo **listaReal, nodo *listaClientes, divisas datosDivisas);
float infoRecursivo (nodo *listaEuro, float *montoTotal);
void informarLista(nodo *lista);

int main(){
	int opcion;
	bool seguir;
	nodo *listaEuro, *listaArs, *listaUsd, *listaReal,*listaClientes;
	divisas datosDivisas[4]; // 0: USD 1:EURO 2:REAL 3:ARS 
	float montoTotal = 0;

	printf("Bienvenido, Ingrese los valores de la divisa y el cupo actual\n");
	cargarDivisas(datosDivisas);

	inicializarListas(&listaArs);
	inicializarListas(&listaUsd);
	inicializarListas(&listaEuro);
	inicializarListas(&listaReal);
	inicializarListas(&listaClientes);

	printf("Hay clientes para atender? 1:SI / OTRO: NO\n");
	scanf("%d",&opcion);
	if(opcion == 1){
		seguir = true;
	} else {
		seguir = false;
	}

	while (seguir/true/ && quedaCupo(datosDivisas)/true/){ // seguir ||  quedarcupo 


		atender(&listaClientes,&datosDivisas);

		printf("Desea seguir atendiendo? 1:SI / OTRO: NO\n");
		scanf("%d",&opcion);
		if(opcion == 1){
		seguir = true;
		} else {
		seguir = false;}
	}

	procesarClientes(&listaEuro, &listaArs, &listaUsd, &listaReal,&listaClientes, datosDivisas); //funcion que compara que operacion realizo cada cliente para generar las listas
	
	informarLista(listaEuro);
	informarLista(listaArs);
	informarLista(listaUsd);
	informarLista(listaReal);

	infoRecursivo(listaEuro, &montoTotal);

	return 0;
}

--------------------------------------------------------------INCIALIZAR LISTAS/PILAS/COLAS-------------------------------------------------------------------------------------------
void inicializarListas(nodo **l){
	(*l) = NULL;
}