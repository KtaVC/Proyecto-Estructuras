#include "stdafx.h"
#include "Producto.h"

//*********************************** Constructores *******************************************************
Producto::Producto()
{
	nombre = "";
	marca = "";
}

Producto::Producto(string nombre, string marca)
{
	this->nombre = nombre;
	this->marca = marca;
}

//*********************************** Set y Get de nombre *******************************************************
void Producto::setNombre(string nombre)
{
	this->nombre = nombre;
}
string Producto::getNombre()
{
	return nombre;
}


//*********************************** Set y Get de marca *******************************************************
void Producto::setMarca(string marca)
{
	this->marca = marca;
}

string Producto::getMarca()
{
	return marca;
}

//*********************************** Set y Get del id *******************************************************
void Producto::setId(int id)
{
	this->id = id;
}

int Producto::getId()
{
	return id;
}

string Producto::toString()
{
	stringstream datos; //cambiar por s
	datos << "Nombre: " << nombre;
	datos << ", Marca: " << marca;
	datos << ", ID: " << id << endl;
	return datos.str();
}

Producto::~Producto()
{
}
