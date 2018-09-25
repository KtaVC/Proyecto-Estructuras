#pragma once
#include "nodo.h"
class lista
{
public:
public:
	lista() { primero = actual = NULL; }
	~lista();

	void Insertar(int v);
	void Borrar(int v);

	bool ListaVacia() { return primero == NULL; }
	void Mostrar();
	void Siguiente();
	void Primero();
	void Ultimo();
	bool Actual() { return actual != NULL; }
	int ValorActual() { return actual->valor; }

private:
	pnodo primero;
	pnodo actual;
};

