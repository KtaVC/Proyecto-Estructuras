#include "stdafx.h"
#include "Madera.h"


Madera::Madera()
{
	nombre = "";
	id = 0;
}



Madera::Madera(int id)
{
	this->id = id;
}


Madera::Madera(string nombre, int id)
{
	this->nombre = nombre;
	this->id = id;
	

}
void Madera::setNombre(string)
{
	this->nombre = nombre;
}
string Madera::getNombre()
{
	return nombre;
}
void Madera::setId(int id)
{
	this->id = id;
}
int Madera::getId()
{
	return id;
}

void Madera::captura_atletas()
{
	cout << "Ingrese la informacion que se le solicita:\n" << endl;
	cout << "Nombre:\n";
	//getline(cin,nombre);
	cin >> nombre;
	setNombre(nombre);
	cout << "Numero de articulo:\n";
	cin >> id;
	setId(id);
	

}

string Madera::toString()
{
	stringstream s;
	s << "Nombre:" << getNombre() << endl;
	s << "Cedula:" << getId() << endl;
	
	return s.str();
}

void Madera::Guardar(ofstream &archivo)
{
	archivo << nombre << endl;
	archivo << id << endl;
	
	

}
void Madera::Recuperar(ifstream &archivo)
{
	archivo >> nombre;
	archivo >> id;
	
}
Madera::~Madera()
{
}
