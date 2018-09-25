#pragma once
#include <sstream>
#include <iostream>
#include <string>
#include<fstream>
using namespace std;
class Jardin
{
public:
	Jardin();
	Jardin(int);
	Jardin(string, int);
	void setNombre(string);
	string getNombre();
	void setId(int);
	int getId();
	void captura_atletas();
	string toString();
	void Guardar(ofstream &archivo);
	void Recuperar(ifstream &archivo);
	~Jardin();




private:
	string nombre;
	int id;
	
};

