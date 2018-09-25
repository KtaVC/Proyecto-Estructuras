#include "stdafx.h"
#include "Jardin.h"


Jardin::Jardin()
{
	nombre = "";
	id = 0;
}



Jardin::Jardin(int id)
{
	this->id = id;
}


Jardin::Jardin(string nombre, int id)
{
	this->nombre = nombre;
	this->id = id;


}
void Jardin::setNombre(string)
{
	this->nombre = nombre;
}
string Jardin::getNombre()
{
	return nombre;
}
void Jardin::setId(int id)
{
	this->id = id;
}
int Jardin::getId()
{
	return id;
}

void Jardin::captura_atletas()
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

string Jardin::toString()
{
	stringstream s;
	s << "Nombre:" << getNombre() << endl;
	s << "Cedula:" << getId() << endl;

	return s.str();
}

void Jardin::Guardar(ofstream &archivo)
{
	archivo << nombre << endl;
	archivo << id << endl;


}
void Jardin::Recuperar(ifstream &archivo)
{
	archivo >> nombre;
	archivo >> id;

}
Jardin::~Jardin()
{
}
