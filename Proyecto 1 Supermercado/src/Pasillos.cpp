#include "Pasillos.h"

Pasillos::Pasillos()
{
    nombre = " ";
    numero = 0;
}

Pasillos::Pasillos(int numero,string nombre)
{
    this->nombre=nombre;
    this->numero=numero;
}

void Pasillos::setNombre(string nombre)
{
    this->nombre=nombre;
}

string Pasillos::getNombre()
{
    return nombre;
}

void Pasillos::setNumero(int numero)
{
    this->numero=numero;
}

int Pasillos::getNumero()
{
    return numero;
}

string Pasillos::toString()
{
    stringstream datos;
        datos << "Nombre: " << nombre << endl;
        datos << "Numero: " << numero << endl<<endl;
    return datos.str();
}

Pasillos::~Pasillos()
{
    //dtor
}
