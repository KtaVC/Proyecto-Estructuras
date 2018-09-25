#pragma once
#include "ListaProducto.h"
#include "ListaTipoProducto.h"
#include "PilaProducto.h"
#include "PilaCarrito.h"
#include "ColaCliente.h"
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
	void menu();
	void insertarDatos();
	void leerArchivo();
	~Interfaz();
};

