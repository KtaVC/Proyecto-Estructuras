#include "stdafx.h"
#include "ListaProducto.h"



ListaProducto::ListaProducto()
{
	primero = NULL;
	aux = NULL;
}

bool ListaProducto::vacio()
{
	return primero == NULL;
}

bool ListaProducto::agregar(PilaProducto nuevo)
{
	if (primero == NULL)
	{
		primero = new NodoProducto(nuevo);
		return true;
	}
	else
	{
		aux = primero;
		while (aux->getSig() != NULL)
			aux = aux->getSig();

		NodoProducto* nuevoProd = new NodoProducto(nuevo);
		aux->setSig(nuevoProd);
		return true;
	}

}

bool ListaProducto::borrar(int idProd)
{
	aux = primero;
	while (aux != NULL)
	{
		NodoProducto* ant;
		aux = primero;
		ant = aux;
		/*   if(aux->valor.getIdProd() != idProd)
		{
		ant = aux;
		aux = aux->getSig();
		cout<<"Producto agotado..."<<endl;
		}*/

		if (aux == NULL) {
			return false;
		}
		else
		{
			if (aux->getValor().getIdProd() == primero->getValor().getIdProd())
			{
				primero = aux->getSig();
				aux->valor.Desapilar();
				return true;
			}
			ant->setSig(aux->getSig());
			//delete (aux);
			return true;
		}
	}
}


void ListaProducto::mostrar()
{
	if (primero == NULL)
		cout << "No hay elementos\n\n";
	else
	{
		aux = primero;

		while (aux != NULL)
		{

			aux->valor.MostrarPila();
			aux = aux->getSig();
		}
	}
}



ListaProducto::~ListaProducto()
{
}
