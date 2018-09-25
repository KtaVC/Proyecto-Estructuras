#include "stdafx.h"
#include "Pintura.h"


Pintura::Pintura()
{
	nombre = "";
	id = 0;
}


Pintura::Pintura(int id)
{
	this->id = id;
}


Pintura::Pintura(string nombre, int id)
{
	this->nombre = nombre;
	this->id = id;


}
void Pintura::setNombre(string)
{
	this->nombre = nombre;
}
string Pintura::getNombre()
{
	return nombre;
}
void Pintura::setId(int id)
{
	this->id = id;
}
int Pintura::getId()
{
	return id;
}

void Pintura::captura_atletas()
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

string Pintura::toString()
{
	stringstream s;
	s << "Nombre:" << getNombre() << endl;
	s << "Cedula:" << getId() << endl;

	return s.str();
}

void Pintura::Guardar(ofstream &archivo)
{
	archivo << nombre << endl;
	archivo << id << endl;


}
void Pintura::Recuperar(ifstream &archivo)
{
	archivo >> nombre;
	archivo >> id;

}
Pintura::~Pintura()
{
}
