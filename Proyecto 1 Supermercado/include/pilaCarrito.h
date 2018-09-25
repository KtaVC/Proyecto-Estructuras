#ifndef PILACARRITO_H
#define PILACARRITO_H
#include "Productos.h"

class pilaCarrito
{
    struct nodo{
        Productos miProducto;
        struct nodo *sgte;
    };

    typedef struct nodo *Puntero;


        public:
            pilaCarrito(void);
            void Apilar(Productos);
            void Desapilar(void );
            bool PilaVacia(void);
            void MostrarPila(void);
            void DestruirPila(void);
            void menu(void);

        private:
            Puntero cima;
};

#endif // PILACARRITO_H
