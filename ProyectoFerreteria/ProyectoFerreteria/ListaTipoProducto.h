#pragma once
#include "ListaProducto.h"

//**************************************** LISTA CIRCULAR DOBLEMENTE ENLAZADA ***********************************************


class ListaTipoProducto
{
public:
	ListaTipoProducto();
	~ListaTipoProducto();

	void insertarNodo(ListaProducto);
	void desplegarListaPU();
	void desplegarListaUP();
	void buscarNodo(ListaProducto);
	void eliminarNodo(ListaProducto);

};

