#include "ListaTipoProd.h"

struct nodo {
	ListaProducto dato;
	nodo* siguiente;
	nodo* atras;
} *primero, *ultimo;

ListaTipoProd::ListaTipoProd() {}
ListaTipoProd::~ListaTipoProd() {}


void ListaTipoProd::insertarNodo(ListaProducto producto){
	nodo* nuevo = new nodo();
	nuevo->dato = producto;
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
		primero->siguiente = primero;
		primero->atras = ultimo;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->atras = ultimo;
		nuevo->siguiente = primero;
		ultimo = nuevo;
		primero->atras = ultimo;
	}
}

void ListaTipoProd::desplegarListaPU(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero != NULL){
		do{
			actual->dato.mostrarLista();
			actual = actual->siguiente;
		}while(actual != primero);
        cout<<endl;
	}else{
		cout<<"\nLa lista se encuentra vacia\n"<<endl;
	}
}

void ListaTipoProd::desplegarListaUP(){
	nodo* actual = new nodo();
	actual = ultimo;
	if(primero != NULL){
		do{
			actual->dato.mostrarLista();
			actual = actual->atras;
		}while(actual != ultimo);
		cout<<endl;
	}else{
		cout<<"\nLa lista se encuentra vacia\n"<<endl;
	}
}
/*
void ListaTipoProd::buscarNodo(ListaProducto nodoBuscado){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	if(primero != NULL){
		do{
			if(actual->dato.getIdProd() == nodoBuscado.getIdProd()){
				cout<<"\nProducto con el id ("<<nodoBuscado.getIdProd()<<") Encontrado\n"<<endl;
				encontrado = true;
			}
			actual = actual->siguiente;
		}while(actual != primero && encontrado != true);

		if(!encontrado){
			cout<<"\nProducto no encontrado"<<endl;
		}
	}else{
		cout<<"\nNo existen productos agregados en la lista"<<endl;
	}
}

void ListaTipoProd::eliminarNodo(ListaProducto nodoBuscado){
	nodo* actual = new nodo();
	actual = primero;
	nodo* anterior = new nodo();
	anterior = NULL;
	bool encontrado = false;
	if(primero != NULL){
		do{
			if(actual->dato.getIdProd() == nodoBuscado.getIdProd()){
				cout<<"Producto con el id ("<<nodoBuscado.getIdProd()<<") eliminado\n"<<endl;
				if(actual == primero){
					primero = primero->siguiente;
					primero->atras = ultimo;
					ultimo->siguiente = primero;
				}else if(actual == ultimo){
					ultimo = anterior;
					ultimo->siguiente = primero;
					primero->atras = ultimo;
				}else{
					anterior->siguiente = actual->siguiente;
					actual->siguiente->atras = anterior;
				}
				cout<<"Producto eliminado"<<endl;
				encontrado = true;
			}
			anterior = actual;
			actual = actual->siguiente;
		}while(actual != primero && encontrado != true);
		if(!encontrado){
			cout<<"\nProducto no encontrado "<<endl;
		}
	}else{
		cout<<"\nNo existen productos agregados en la lista"<<endl;
	}
}
*/
