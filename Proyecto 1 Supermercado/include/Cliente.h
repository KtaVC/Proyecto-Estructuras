#ifndef CLIENTE_H
#define CLIENTE_H
#include "ListaProducto.h"
#include <iostream>
#include <fstream>

using namespace std;

class Cliente
{
    public:
        Cliente();
        Cliente(string);
        void leerListaAComprar();
        void setNombre(string);
        string getNombre();

        virtual ~Cliente();
    protected:

    private:
        ListaProducto miListaProducto;
        string nombre;
};

#endif // CLIENTE_H
