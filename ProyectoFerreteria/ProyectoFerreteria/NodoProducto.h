#pragma once
#include "PilaProducto.h"
class NodoProducto
{
public:
	//*********************************** Constructores *******************************************************
	NodoProducto();
	NodoProducto(PilaProducto);
	
	//*********************************** Sets *******************************************************
	void setValor(PilaProducto);
	void setSig(NodoProducto*);

	//*********************************** Gets *******************************************************
	PilaProducto getValor();
	NodoProducto* getSig();


	//*********************************** Atributos *******************************************************
	PilaProducto valor; //???
	NodoProducto* siguiente;
	~NodoProducto();
};

