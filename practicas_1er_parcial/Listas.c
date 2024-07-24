// LISTAS ENLAZADAS Y PUNTEROS

// Los nodos tienen dos partes; contenido y puntero.
// El contenido puede ser una variable, un arreglo, un registro, etc.
// El puntero apunta al siguiente nodo.


	// Definicion del tipo de dato NODO
	typedef struct tipo_nodo {
		int valor;				//contenido
		struct tipo_nodo *sig;	//puntero
	}nodo;

// Por ejemplo, cada nodo es un DNI y debo hacer una lista:

	// estructura del dni
	struct dni {
		char[20] nombre;	//nombre
		char[20] apellido;	//apellido
		int numero;			//numero de dni
	}dni;

	// nodo de dni
	typedef struct tipo_nodo {
		struct dni documento;
		struct tipo_nodo *sig;
	};



// OPERACIONES CON LISTAS:

// 1- CREACION DE LA LISTA
// 2- AGREGAR UN ELEMENTO 
//	 	A- AL INICIO DE LA LISTA
//		B- AL FINAL DE LA LISTA
// 		C- ORDENADO EN LA LISTA
// 3- BUSCAR UN ELEMENTO EN LA LISTA
// 4- ELIMINAR UN ELEMENTO DE LA LISTA
// 5- IMPRIMIR LA LISTA
// 6- CONSULTAR SI ESTÁ VACÍA


// 1- CREACION DE LA LISTA
// cuando se crea una lista, la misma no posee elementos (está vacía).
// es decir, que despues de declararse el tipo nodo, debe iniciarse el puntero a null.
// así, la lista será un puntero a nodo que contiene null.


	// Definicion del tipo de dato NODO
	typedef struct tipo_nodo {
		int valor;				//contenido (puede ser una variable o un registro)
		struct tipo_nodo *sig;	//puntero
	}nodo;

		// EN EL MAIN
			// Declaración de un puntero a tipo nodo
			nodo *lista;

			// Creación de la lista
			*lista = NULL;


// 2- AGREGAR UN ELEMENTO
// cuando se crea una lista, no se sabe qué tamaño tendra y por lo tanto no tiene reservada la memoria necesaria.
// por eso, para crear un nodo debo hacer una solicitud de ampliar el uso de la memoria durante la ejecución.

	// Definicion del tipo de dato NODO
	typedef struct tipo_nodo {
		int dato;				//contenido (puede ser una variable o un registro)
		struct tipo_nodo *sig;	//puntero
	}nodo;

	// Creación del nuevo nodo
	nodo *nuevo = (nodo *)malloc(sizeof(nodo));

// MALLOC() es una funcin=on que realiza la asignación de memoria por el tamaño de su argumento
// SIZEOF() devuelve el tamaño de la estructura que tiene como argumento.


// A- AGREGAR UN NODO AL PRINCIPIO DE LA LISTA
// lo primero que debo hacer es crear un puntero a lista, y otro puntero al nuevo nodo.
// luego, apunto el puntero del nuevo nodo, al primero de la lista.
// posteriormente apunto *lista (el puntero de la lista en si) al nuevo nodo.
// la función queda asi:

	void insertar_inicio(nodo **lista, int dato){
		nodo *nuevo = (nodo *)malloc(sizeof(nodo));	// creo el nuevo nodo
		nuevo->valor = dato;						// cargo el contenido en el nodo
		nuevo->sig = *lista;						// apunto el puntero del nuevo nodo, al primer nodo de la lista
		*lista = nuevo;								// ahora apunto el nodo de la lista al nuevo nodo
	}


// B- AGREGAR UN NODO AL FINAL DE LA LISTA
// primero creo un puntero auxiliar de tipo nodo.
// luego se debe crear el nuevo nodo, con su puntero apuntando a NULL (ya que se ubicará al final de la lista).
// antes de buscar el final de la lista, consulto si la misma está vacia. De estarlo, simplemente inserto el nodo. Caso contrario:
// guardo *lista en la variable auxiliar, y con un while hago que si aux->sig no apunta a NULL (lo cual indicaría el final de la lista), aux pase al siguiente nodo.
// Entonces:

	void insertar_final(nodo **lista, int dato){
		nodo *aux;										// puntero auxiliar		
		nodo *nuevo = (nodo *)malloc(sizeof(nodo));		// creo el nuevo nodo
		nuevo->valor = dato;							// cargo el contenido del nuevo nodo
		nuevo->sig = NULL;								// apunto el nuevo nodo a NULL ya que será el ultimo en la lista

		if(*lista==NULL){					// si la lista es vacía
			*lista = nuevo;					// entonces apunto la lista al nuevo nodo (lo inserto)
		} else {
			aux = *lista;					// sino, guardo en el puntero auxiliar el nodo 1
			while(aux->sig != NULL){		// si el nodo apuntado por la variable no apunta a NULL, significa que no es el ultimo
				aux = aux->sig;				// por lo tanto, muevo aux al siguiente nodo. Este proceso se repite hasta encontrar el último nodo.
			}
			aux -> nuevo;					// una vez encontrado el ultimo nodo, lo apunto al nuevo
		}
	}


// C- AGREGAR UN NODO ORDENADO EN LA LISTA
// para empezar, es necesario que la lista esté ordenada bajo algún criterio específico.
// en este caso se usarán dos punteros auxiliares, que apuntarán a dos nodos consecutivos e irán recorriendo la lista hasta hallar el lugar correcto para insertar el nuevo nodo.
// los dos punteros serán *actual y *anterior.
// *actual comienza apuntando al nodo 1, y anterior a null. Se compara a actual con el valor del nodo a insertar;
// si actual < nuevo, entonces avanzo al siguiente nodo (actual apunta al nodo 2 y anterior apunta al nodo 1), y asi continúo hasta hallar la posición correcta.
// una vez hallada la posición inserto el nodo donde corresponde.
// si actual == null significa que ya recorrió toda la lista, por lo tanto inserto al final de la misma.
// Entonces:

	void insertar_ordenado(nodo **lista, int dato){
		nodo *actual, *anterior;							// creo las variables auxiliares
		nodo *nuevo = (nodo *)malloc(sizeof(nodo));			// creo el nodo nuevo
		nuevo->valor = dato;								// cargo el valor del nuevo nodo
		actual = *lista;									// apunto el puntero 'actual' al inicio de la lista
		anterior = NULL;									// apunto el puntero 'anterior' a NULL

		while(actual != NULL && actual->valor < dato){		// si actual es diferente de NULL y el valor de actual es menor que el valor de nuevo, entonces:
			anterior = actual;								// apunto anterior a actual
			actual = actual->sig;							// apunto actual al siguiente nodo
		}													// de esta manera, ambos punteros avanzaron una posicion

		if (anterior != NULL){			// si anterior es distinto de NULL (o sea que actual no se encuentra en el primer nodo) entonces:
			anterior->sig = nuevo;		// apunto el nodo anterior al nuevo
			nuevo->sig = actual;		// apunto el nodo nuevo al actual
		} else {						// si anterior es igual a NULL (significa que actual se encuentra en el primer nodo, por lo que el nuevo se inserta al principio), entonces:
			nuevo->sig = *lista;		// apunto el nodo nuevo al principio de la lista
			*lista = nuevo;				// apunto el principio de la lista al nuevo nodo
		}
	}


// 3- BUSCAR UN ELEMENTO DE LA LISTA 
// se recorre la lista con un puntero auxiliar, comparando cada nodo con el elemento buscado.
// la funcion debe devolver un puntero al nodo buscado.
// si se recorre toda la lista y no se encuentra el valor, la funcion devuelve NULL.

// entonces:

	nodo *buscar(nodo *lista, int dato) {			// donde dato es el valor por el cual se busca
		nodo *aux;									// puntero auxiliar para recorrer la lista
		aux = lista;								// apunto el puntero auxiliar al inicio de la lista
		while (aux->valor != dato && aux != NULL){	// mientras el valor del nodo sea diferente al dato buscado
			aux = aux->sig;							// aux pasa al nodo siguiente
		}
		return aux;									// retorno aux (nodo que contiene al valor buscado)
	}

// si termina la lista, retorna NULL


// 4- ELIMINAR UN NODO DE LA LISTA
// primero se debe buscar en la lista el valor a eliminar. Una vez hallado, se apunta el nodo anterior, al que apunta el nodo que se desea eliminar (es decir, que si deseo elminar el nodo 4, apunto el nodo 3 al nodo 5).
// luego, se libera el espacio de memoria con la funcion free(nodo) de la libreria stdlib.h
// para recorrer la lista se utilizan dos nodos auxiliares
// La funcion resultante es:

	void eliminar_nodo(nodo **lista, int dato){
		nodo *actual, *anterior;							// creo los dos nodos auxiliares
		actual = *lista;									// apunto actual al inicio de la lista
		anterior = NULL;									// apunto anterior a NULL
		while(actual != NULL && actual->valor !== dato){	// si la lista no terminó y aun no se halló el dato, los punteros avanzan una posicion.
			anterior = actual;								
			actual = actual->sig;
		}
		if (actual != NULL){ 					// significa que se encontró el dato
			if (anterior != NULL){				// si anterior es distinto de NULL, el dato a eliminar no es el primero de la lista
				anterior->sig = actual->sig;	// anterior apunta al siguiente de actual
			} else {							// si anterior es igual a NULL, debo borrar el primer nodo
				*lista = actual->sig;			// apunto el inicio de la lista al siguiente de actual (ya que actual es el primero)
			}

			free(actual);						// libero el eapacio de memoria que ocupaba el nodo eliminado
		}										// cierre de primer if
	}											// cierre de funcion


// 5- IMPRIMIR LA LISTA
// se recorre toda la lista, y en cada nodo visitado se imprimen los valores deseados.
// se puede hacer de dos maneras: recursiva e iterativa
// Funcion iterativa:

	void imprimir_lista(nodo *lista){
		nodo *aux;						// para recorrer la lista
		aux = lista;					// apunto aux al inicio de la lista
		while(aux != NULL){				// mientras no se termine la lista
			printf("%d". aux->valor);	// imprimo el valor del nodo actual
			aux = aux->sig;				// y paso al siguiente nodo
		}
	}

// funcion recursiva:

	void imprimir_recursivo(nodo *lista){
		nodo *aux;							// para recorrer la lista
		aux = lista;						// apunto aux al inicio de la lista
		if (aux != NULL) {					// mientras no se termine la lista
			printf("%d", aux->valor);		// imprimo el valor del nodo actual
			imprimir_recursivo(aux->sig);	// vuelvo a ejecutar la funcion, pero cada vez el nodo actual es el siguiente al anterior.
		}
	}


// 6- CONSULTAR SI LA LISTA ESTÁ VACÍA
// la funcion devuelve 1 si la lista está vacía, y 0 si tiene al menos un elemento

	int es_vacía(nodo *lista){
		if(lista == NULL){
			return 1;
		} else {
			return 0;
		}
	}	


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// PILAS Y COLAS

// ¿Qué es una pila? 
// una pila es una lista enlazada en la cual los elementos se agregan y se eliminan solo en el principio de la lista.
// no está permitido hacer busquedas ni recorrer una pila.


// ¿Qué es una cola?
// se trata de una lista enlazada en la cual los elementos se agregan por el final, y se eliminan por el principio.
// tampoco está permitido recorrer o buscar en una pila.
// se tienen dos punteros: uno al inicio y otro al final de la cola.


//-----------------------------------------

// PILA

// OPERACIONES SOBRE UNA PILA:
// 1- APILAR
// 2- DESAPILAR
// 3- CONSULTAR SI LA PILA ESTÁ VACÍA

// no se admite ninguna otra operación sobre una pila


// La implementación de estas operaciones es sencilla:
// 	- Declaración de una pila: es igual que la declaración de una lista.
// 	- Función crear pila: es igual que la función 'crear lista' de listas.
// 	- Función apilar: es igual que la función 'insertar al inicio' de listas.
// 	- Función desapilar: consiste en eliminar el primer nodo de la pila.
//	- Función pila-vacía: es igual que la función 'es_vacia' de listas.


// ------------------------------------------------------


// DECLARACION DE PILAS Y FUNCION CREAR PILA:
// es igual que en una lista:

	typedef struct tipo_nodo{			// defino la estructura del nodo
		int valor;
		struct tipo_nodo *sig;
	}nodo;

	int main(){
		nodo *pila;						// creo la pila
		crear_pila(&pila);

		/* cuerpo del main */ 
	}

	// Definición de funciones
	void crear_pila(nodo **pila){		// definicion de la funcion crear pila
		*pila = NULL;
	}


// ------------------------------------------------------

// 1- APILAR
// como se puede ver a continuación, la función de apilar es exactamente la misma que la funcion de insertar un nodo al inicio de una lista

// Función insertar al inicio de una lista:
	void insertar_inicio(nodo **lista, int dato){
		nodo *nuevo = (nodo *)malloc(sizeof(nodo));	// creo el nuevo nodo
		nuevo->valor = dato;						// cargo el contenido en el nodo
		nuevo->sig = *lista;						// apunto el puntero del nuevo nodo, al primer nodo de la lista
		*lista = nuevo;								// ahora apunto el nodo de la lista al nuevo nodo
	}


// Función apilar:
	void apilar(nodo **pila, int dato){
		nodo *nuevo = (nodo *)malloc(sizeof(nodo));	// creo el nuevo nodo
		nuevo->valor = dato;						// cargo el contenido del nuevo nodo
		nuevo->sig = *pila;							// apunto el nuevo nodo al primero de la pila
		*pila = nuevo;								// apunto el inicio de la pila al nuevo nodo
	}


// 2- DES-APILAR
// al igual que en 'apilar', aquí es exactamente igual a las listas. Se trata de la función 'eliminar al principio':
// la función devuelve el valor del nodo desapilado

	int desapilar (nodo **pila){
		int valor;
		nodo *aux;
		aux = *pila;
		*pila = aux->sig;
		valor = aux->valor;
		free(aux);
		return valor;
	}


// 3- PILA VACÍA
// se trata de la misma función que se usa para verificar si una lista está vacía

	int pila_vacia(nodo *pila){
		if(pila == NULL){
			return 1;
		} else {
			return 0;
		}
	}



// --------------------------------------------------

// COLA

// OPERACIONES CON COLAS:
// 1- ENCOLAR
// 2- DESENCOLAR
// 3- COLA VACÍA

// no se admite ninguna otra operación sobre una cola


// La implementación de estas operaciones es sencilla:
// 	- Declaración de una cola: en este caso se utilizan dos punteros; uno al principio y otro al final de la cola.
// 	- Función crear cola: en un principio ambos punteros apuntan a NULL.
// 	- Función encolar: es igual que la función 'insertar al final' de listas.
// 	- Función desencolar: consiste en eliminar el primer nodo de la cola.
//	- Función cola-vacía: es igual que la función 'es_vacia' de listas.


// --------------------------------------------------


// 	DECLARACIÓN DE COLAS Y FUNCIÓN CREAR COLA:

	typedef struct tipo_nodo{			// defino el nodo
		int valor;
		struct tipo_nodo *sig;
	}nodo;

	typedef struct tipo_cola{			// defino la cola
		nodo *primero, *ultimo;			// uso dos punteros
	}t_cola;

	main(){
		t_cola cola;					// creo una cola
		crear_cola(&cola);

		/* cuerpo del main */ 
	}

	//definicion de funciones
	void crear_cola(t_cola *cola){		// defino la funcón de cola
		cola->primero = NULL;			// inicializo los punteros en NULL
		cola->ultimo = NULL;
	}


// ----------------------------------------------------

// 1- FUNCION ENCOLAR:
// primero consulto si la cola está vacía. De ser asi, inserto el nuevo nodo y apunto ambos punteros a este.
// si la cola tiene al menos un elemento, entonces apunto el último nodo al nuevo nodo, y el puntero último al nuevo nodo.	

	void encolar(t_cola *cola, int dato){
		nodo *nuevo = (nodo *)malloc(sizeof(nodo));	//creo un nuevo nodo
		nuevo->valor = dato;
		nuevo->sig = NULL;
		if(cola->primero == NULL){					// es decir, que si la cola está vacía
			cola->primero = nuevo;					// entonces apunto ambos punteros al nuevo nodo y queda insertado
			cola->ultimo = nuevo;					
		} else {									// si existe al menos un elemento en la cola, entonces:
			cola->ultimo->sig = nuevo;				// apunto el puntero del ultimo nodo existente, al nuevo nodo
			cola->ultimo = nuevo;					// y apunto el puntero 'ultimo' de la cola al nuevo nodo
		}
	}


// 2- FUNCION DESENCOLAR
// consiste en hacer que el puntero 'primero' apunte al segundo nodo (eliminando asi el primero) y retornar el valor del nodo eliminado

	int desencolar(t_cola *cola){
		int valor;						
		nodo *aux;						// creo puntero auxiliar
		aux = cola->primero;			// asigno el primer nodo al puntero auxiliar
		cola->primero = aux->sig;		// apunto el puntero 'primero' al segundo elemento de la cola (que pasará a ser el primero)
		valor = aux->valor;				// guardo el dato del nodo a eliminar en una variable, para luego retornarlo
		free(aux);						// libero el espacio que ocupaba dicho nodo en memoria
		return valor;					// devuelvo el dato del nodo en la variable 'valor'
	}

























