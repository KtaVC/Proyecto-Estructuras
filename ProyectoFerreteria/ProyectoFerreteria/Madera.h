#pragma once
#include <sstream>
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

class Madera
{

public:

	Madera();
	Madera(int);
	Madera(string, int);
	void setNombre(string);
	string getNombre();
	void setId(int);
	int getId();
	void captura_atletas();
	string toString();
	void Guardar(ofstream &archivo);
	void Recuperar(ifstream &archivo);
	~Madera();
	



private:
	string nombre;
	int id;
	
};

