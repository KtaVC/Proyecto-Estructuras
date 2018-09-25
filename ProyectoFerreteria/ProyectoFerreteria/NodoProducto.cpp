#include "stdafx.h"
#include "NodoProducto.h"


NodoProducto::NodoProducto()
{
	this->siguiente = NULL;
}

NodoProducto::NodoProducto(PilaProducto valor)
{
	this->valor = valor;
	this->siguiente = NULL;
}

void NodoProducto::setValor(PilaProducto valor)
{
	this->valor = valor;
}

void NodoProducto::setSig(NodoProducto* siguiente)
{
	this->siguiente = siguiente;
}

PilaProducto NodoProducto::getValor()
{
	return valor;
}

NodoProducto* NodoProducto::getSig()
{
	return siguiente;
}
NodoProducto::~NodoProducto()
{
}
