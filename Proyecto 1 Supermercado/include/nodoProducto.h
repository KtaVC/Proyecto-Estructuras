#ifndef NODOPRODUCTO_H
#define NODOPRODUCTO_H
#include "pilaProductos.h"

class nodoProducto
{
    public:
        nodoProducto();
        nodoProducto(pilaProductos);
        virtual ~nodoProducto();

        void setValor(pilaProductos);
        void setSig (nodoProducto*);

        pilaProductos getValor();
        nodoProducto* getSig();



        pilaProductos valor;
        nodoProducto* siguiente;
};


#endif // NODOPRODUCTO_H
