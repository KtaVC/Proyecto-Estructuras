#pragma once
#include <iostream>
using namespace std;

class nodo {
public:
	nodo(int v, nodo *sig = NULL)
	{
		valor = v;
		siguiente = sig;
	}

private:
	int valor;
	nodo *siguiente;

	friend class lista;
};

typedef nodo *pnodo;
