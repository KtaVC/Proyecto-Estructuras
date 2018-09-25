#include "stdafx.h"
#include "PilaProducto.h"


PilaProducto::PilaProducto() {
	cima = NULL;
}

bool PilaProducto::PilaVacia() {
	if (cima == NULL)
		return true;
	else
		return false;
}

void PilaProducto::Apilar(Producto miProducto) {

	Puntero p_aux;
	p_aux = new(struct nodo);
	p_aux->miProducto = miProducto;
	p_aux->sgte = cima;
	cima = p_aux;

}

void PilaProducto::Cima() {
	Producto miProducto;
	if (cima == NULL)
		cout << "\n\nPila Vacia...!";

	else {
		miProducto = cima->miProducto;
		cout << "\nLa Cima es :" << miProducto.toString() << endl;
	}
}

void PilaProducto::Desapilar() {
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

void PilaProducto::Mostrar() {
	Puntero p_aux;
	p_aux = cima;
	cout << "*************************************************" << endl;
	while (p_aux != NULL) {
		cout << p_aux->miProducto.toString() << endl;
		p_aux = p_aux->sgte;
	}
	cout << "*************************************************\n" << endl;
}

void PilaProducto::Destruir() {
	Puntero p_aux;

	while (cima != NULL) {
		p_aux = cima;
		cima = cima->sgte;
		delete(p_aux);
	}
}

int PilaProducto::getId()
{
	return miProducto.getId();
}