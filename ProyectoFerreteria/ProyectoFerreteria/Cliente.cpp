#include "stdafx.h"
#include "Cliente.h"

//*********************************** Constructor vacio *******************************************************
Cliente::Cliente()
{
	nombre = "";
}
//*********************************** Constructor con el parametro nombre *******************************************************
Cliente::Cliente(string nombre)
{
	this->nombre = nombre;
}

//*********************************** Set de nombre *******************************************************
void Cliente::setNombre(string nombre)
{
	this->nombre = nombre;
}
//*********************************** Get de nombre *******************************************************
string Cliente::getNombre()
{
	return nombre;
}
//*********************************** Metodo *******************************************************
void Cliente::leerListaAComprar() //explicar
{
	string contenido;
	contenido += "clienteLista.txt";
	ifstream fs(contenido.c_str(), ios::in);
	char linea[128];
	long contador = 0L;
	if (fs.fail())
		cerr << "El fichero no existe" << endl;
	else
		while (!fs.eof()) {
			fs.getline(linea, sizeof(linea));
			cout << linea << endl;
			if ((++contador % 24) == 0) {
				cout << "continuar...";
				cin.get();
			}
		}
	fs.close();
}



Cliente::~Cliente()
{
}
