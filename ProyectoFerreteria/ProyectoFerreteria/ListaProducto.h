#pragma once
#include "NodoProducto.h"
#include <sstream>
#include <iostream>
using namespace std;

//*********************************** LISTA SIMPLE *******************************************************

class ListaProducto
{
public:
	
	ListaProducto();
	bool vacio();
	bool agregar(PilaProducto); //era añadir
	bool borrar(int); //codigo
	void mostrar(); //era mostrarLista
	~ListaProducto();




private:
	Producto producto;
	PilaProducto pila;
	NodoProducto* primero;
	NodoProducto* aux;
	
};

