#include "stdafx.h"
#include "PilaCarrito.h"

PilaCarrito::PilaCarrito(void) {
	cima = NULL;
}

bool PilaCarrito::PilaVacia(void) {
	if (cima == NULL)
		return true;
	else
		return false;
}

void PilaCarrito::Apilar(Producto miProducto) {

	Puntero p_aux;
	p_aux = new(struct nodo);
	p_aux->miProducto = miProducto;
	p_aux->sgte = cima;
	cima = p_aux;

}

void PilaCarrito::Desapilar(void) {
	Producto miProducto;
	Puntero p_aux;
	if (cima == NULL)
		cout << "\n\n\tPila Vacia...!!";
	else {
		p_aux = cima;
		miProducto = p_aux->miProducto;
		cima = cima->sgte;
		delete(p_aux);
	}
}

void PilaCarrito::Mostrar(void) {
	Puntero p_aux;
	p_aux = cima;

	while (p_aux != NULL) {
		cout << p_aux->miProducto.toString() << endl;
		p_aux = p_aux->sgte;
	}
}

void PilaCarrito::Destruir(void) {
	Puntero p_aux;

	while (cima != NULL) {
		p_aux = cima;
		cima = cima->sgte;
		delete(p_aux);
	}
}

