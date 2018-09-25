#include "Productos.h"

Productos::Productos()
{
    //ctor
}
Productos::Productos(string nomProd, string marca)
{
    this->nomProd=nomProd;
    this->marca=marca;
}

void Productos::setNomProd(string nomProd)
{
    this->nomProd=nomProd;
}

void Productos::setMarca(string marca)
{
    this->marca=marca;
}

string Productos::getNomProd()
{
    return nomProd;
}

string Productos::getMarca()
{
    return marca;
}

void Productos::setIdProd(int idProd)
{
    this->idProd = idProd;
}

int Productos::getIdProd()
{
    return idProd;
}

string Productos::toString()
{
    stringstream datos;
        datos << "Nombre: " << nomProd ;
        datos << ", Marca: " << marca ;
        datos << ", ID: " << idProd <<endl;
    return datos.str();
}

Productos::~Productos()
{
    //dtor
}
