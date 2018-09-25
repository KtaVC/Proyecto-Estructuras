#pragma once
#include "nodo.h"
class lista
{
public:
public:
	lista() { actual = NULL; }
	~lista();

	void Insertar(int v);
	void Borrar(int v);
	bool ListaVacia() { return actual == NULL; }
	void Mostrar();
	void Siguiente();
	bool Actual() { return actual != NULL; }
	int ValorActual() { return actual->valor; }

private:
	pnodo actual;
};

