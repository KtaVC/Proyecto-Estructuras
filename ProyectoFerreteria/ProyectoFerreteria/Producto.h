#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Producto
{
public:
	//*********************************** Constructores *******************************************************
	Producto();
	Producto(string, string);

	//*********************************** Set y Get de nombre *******************************************************
	void setNombre(string);
	string getNombre();

	//*********************************** Set y Get de marca *******************************************************
	void setMarca(string);
	string getMarca();

	//*********************************** Set y Get del id *******************************************************
	void setId(int);
	int getId();

	string toString();//

	~Producto();


private:
	//*********************************** Atributos *******************************************************
	string nombre;
	string marca;
	int id;
	
};

