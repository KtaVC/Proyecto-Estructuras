#include "nodoProducto.h"

nodoProducto::nodoProducto()
{
    this->siguiente= NULL;
}

nodoProducto::nodoProducto(pilaProductos valor)
{
    this->valor= valor;
    this->siguiente= NULL;
}

void nodoProducto::setValor(pilaProductos valor)
{
     this->valor= valor;
}

void nodoProducto::setSig(nodoProducto* siguiente)
{
     this->siguiente = siguiente;
}

pilaProductos nodoProducto::getValor()
{
   return valor;
}

nodoProducto* nodoProducto::getSig()
{
    return siguiente;
}

nodoProducto::~nodoProducto()
{
    //dtor
}
