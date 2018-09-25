#pragma once
#include <sstream>
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

class Pintura
{
public:
	Pintura();
	Pintura(int);
	Pintura(string, int);
	void setNombre(string);
	string getNombre();
	void setId(int);
	int getId();
	void captura_atletas();
	string toString();
	void Guardar(ofstream &archivo);
	void Recuperar(ifstream &archivo);
	~Pintura();




private:
	string nombre;
	int id;
	
};

