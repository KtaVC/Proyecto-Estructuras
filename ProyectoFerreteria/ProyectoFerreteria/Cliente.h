#pragma once
#include "ListaProducto.h"
#include <iostream>
#include <fstream>
using namespace std;
class Cliente
{
public:
	//*********************************** Constructores *******************************************************
	Cliente();
	Cliente(string);

	//*********************************** Set y Get de nombre *******************************************************
	void setNombre(string);
	string getNombre();

	//*********************************** Metodo *******************************************************
	void leerListaAComprar(); //cambia
							  
	

	~Cliente();

	

private:
	//*********************************** Atributos *******************************************************
	ListaProducto lP; //objeto de la lista producto 
	string nombre;
	
};

