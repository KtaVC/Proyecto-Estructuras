// ListaSimple.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "lista.h"


int main()
{


	lista Lista;

	Lista.Insertar(3);
	Lista.Insertar(2);
	Lista.Insertar(1);


	Lista.Mostrar();

	Lista.Borrar(1);


	Lista.Mostrar();

	cin.get();

    return 0;
}

