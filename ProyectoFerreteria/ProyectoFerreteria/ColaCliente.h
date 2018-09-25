#pragma once
#include "Cliente.h"

class ColaCliente
{

	struct nodo {
		Cliente miCliente;
		struct nodo *sgte;
	};

	typedef struct nodo *Puntero;


public:
	ColaCliente();
	void Encolar(Cliente);
	void Desencolar(void);
	bool ColaVacia(void);
	void Mostrar(void);
	void Vaciar(void);
	~ColaCliente();

private:
	Puntero delante;//puntero al primer elemento de la cola
	Puntero atras;//puntero al ultimo elemento de la cola
	
};

