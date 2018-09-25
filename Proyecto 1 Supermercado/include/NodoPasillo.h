#ifndef NODOPASILLO_H
#define NODOPASILLO_H
#include "ListaTipoProd.h"

class NodoPasillo
{
   public:
        NodoPasillo(ListaTipoProd v, NodoPasillo *sig, NodoPasillo *ant);

   //private:
        ListaTipoProd valor;
        NodoPasillo *siguiente;
        NodoPasillo *anterior;

        friend class lista;
};

typedef NodoPasillo *pnodo;

#endif // NODOPASILLO_H
