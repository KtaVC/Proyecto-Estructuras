// ListaDoble.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "lista.h"


int main()
{

	lista Lista;

	Lista.Insertar(3);
	Lista.Insertar(2);
	Lista.Insertar(1);


	Lista.Mostrar(ASCENDENTE);
	Lista.Mostrar(DESCENDENTE);

	Lista.Primero();
	cout << "Primero: " << Lista.ValorActual() << endl;

	Lista.Ultimo();
	cout << "Ultimo: " << Lista.ValorActual() << endl;


	Lista.Borrar(1);

	Lista.Mostrar(ASCENDENTE);
	Lista.Mostrar(DESCENDENTE);

	cin.get();
    return 0;
}

