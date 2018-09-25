#ifndef PILAPRODUCTOS_H
#define PILAPRODUCTOS_H
#include "Productos.h"

class pilaProductos
{
    struct nodo{
        Productos miProducto;
        struct nodo *sgte;
    };

    typedef struct nodo *Puntero;


        public:
            pilaProductos();
            void Apilar(Productos);
            void Desapilar();
            void Cima();
            bool PilaVacia();
            void MostrarPila();
            void DestruirPila();
            int getIdProd();

        private:
            Puntero cima;
            Productos miProducto;

};

#endif // PILAPRODUCTOS_H
