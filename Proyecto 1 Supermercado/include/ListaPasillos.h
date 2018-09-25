#ifndef LISTAPASILLOS_H
#define LISTAPASILLOS_H
#include "NodoPasillo.h"
#include "Productos.h"

//*********************************** LISTA DOBLEMENTE ENLAZADA *******************************************************
class ListaPasillos
{
   public:
    ListaPasillos();
    ~ListaPasillos();

    void Insertar(ListaTipoProd v);
    void Borrar(int v);
    bool ListaVacia();
    void Mostrar();
    void Siguiente();
    void Anterior();
    void Primero();
    void Ultimo();
    bool Actual();
    ListaTipoProd ValorActual();
    void eliminarProductoPila(Productos);

   private:
    pnodo plista;
};
#endif // LISTAPASILLOS_H
