#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "ListaProducto.h"
#include "ListaPasillos.h"
#include "ListaTipoProd.h"
#include "pilaProductos.h"
#include "pilaCarrito.h"
#include "colaClientes.h"
#include "windows.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>

using namespace std;

class Interfaz
{
    public:
        Interfaz();
        virtual ~Interfaz();
        void menu();
        void insertarDatos();
        void leerArchivo();

    protected:
    private:
};

#endif // INTERFAZ_H
