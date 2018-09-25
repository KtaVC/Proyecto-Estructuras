#ifndef LISTAPRODUCTO_H
#define LISTAPRODUCTO_H
#include "nodoProducto.h"
#include <sstream>
//*********************************** LISTA SIMPLE *******************************************************
class ListaProducto
{
    public:
        ListaProducto();
        bool vacio();
        bool anadir(pilaProductos);
        bool borrar(int); //codigo
        void mostrarLista();

        virtual ~ListaProducto();
    protected:


    private:
        Productos producto;
        pilaProductos pila;
        nodoProducto* primero;
        nodoProducto* aux;
};

#endif // LISTAPRODUCTO_H
