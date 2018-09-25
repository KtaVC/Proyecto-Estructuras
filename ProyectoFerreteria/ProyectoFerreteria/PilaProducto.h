#pragma once
#include "Producto.h"
class PilaProducto
{

	struct nodo {
		Producto miProducto;
		struct nodo *sgte;
	};

	typedef struct nodo *Puntero;


public:
	PilaProducto();
	void Apilar(Producto);
	void Desapilar();
	void Cima();
	bool PilaVacia();
	void Mostrar();
	void Destruir();
	int getId();
	~PilaProducto();

private:
	Puntero cima;
	Producto miProducto;
	
};

