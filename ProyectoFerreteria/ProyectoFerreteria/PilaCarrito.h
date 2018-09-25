#pragma once
#include "Producto.h"
class PilaCarrito
{
	struct nodo {
		Producto miProducto;
		struct nodo *sgte;
	};

	typedef struct nodo *Puntero;


public:
	PilaCarrito(void);
	void Apilar(Producto);
	void Desapilar(void);
	bool PilaVacia(void);
	void Mostrar(void);
	void Destruir(void);
	void menu(void);

private:
	Puntero cima;
};

