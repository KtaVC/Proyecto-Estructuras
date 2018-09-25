#include "stdafx.h"
#include "lista.h"


lista::~lista()
{
	pnodo aux;

	while (primero) {
		aux = primero;
		primero = primero->siguiente;
		delete aux;
	}
	actual = NULL;
}

void lista::Insertar(int v)
{
	pnodo anterior;

	// Si la lista está vacía
	if (ListaVacia() || primero->valor > v) {
		// Asignamos a lista un nievo nodo de valor v y
		// cuyo siguiente elemento es la lista actual
		primero = new nodo(v, primero);
	}
	else {
		// Buscar el nodo de valor menor a v
		anterior = primero;
		// Avanzamos hasta el último elemento o hasta que el siguiente tenga
		// un valor mayor que v
		while (anterior->siguiente && anterior->siguiente->valor <= v)
			anterior = anterior->siguiente;
		// Creamos un nuevo nodo después del nodo anterior, y cuyo siguiente
		// es el siguiente del anterior
		anterior->siguiente = new nodo(v, anterior->siguiente);
	}
}

void lista::Borrar(int v)
{
	pnodo anterior, nodo;

	nodo = primero;
	anterior = NULL;
	while (nodo && nodo->valor < v) {
		anterior = nodo;
		nodo = nodo->siguiente;
	}
	if (!nodo || nodo->valor != v) return;
	else { // Borrar el nodo
		if (!anterior) // Primer elemento
			primero = nodo->siguiente;
		else  // un elemento cualquiera
			anterior->siguiente = nodo->siguiente;
		delete nodo;
	}
}



void lista::Mostrar()
{
	nodo *aux;

	aux = primero;
	while (aux) {
		cout << aux->valor << "\n";
		aux = aux->siguiente;
	}
	cout << endl;
}

void lista::Siguiente()
{
	if (actual) actual = actual->siguiente;
}

void lista::Primero()
{
	actual = primero;
}

void lista::Ultimo()
{
	actual = primero;
	if (!ListaVacia())
		while (actual->siguiente) Siguiente();
}
