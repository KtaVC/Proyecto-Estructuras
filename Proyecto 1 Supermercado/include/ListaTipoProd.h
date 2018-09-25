#ifndef LISTATIPOPROD_H
#define LISTATIPOPROD_H
#include "ListaProducto.h"

//**************************************** LISTA CIRCULAR DOBLEMENTE ENLAZADA ***********************************************
class ListaTipoProd
{
   public:
    ListaTipoProd();
    ~ListaTipoProd();

    void insertarNodo(ListaProducto);
    void desplegarListaPU();
    void desplegarListaUP();
    void buscarNodo(ListaProducto);
    void eliminarNodo(ListaProducto);

};
#endif // LISTATIPOPROD_H







