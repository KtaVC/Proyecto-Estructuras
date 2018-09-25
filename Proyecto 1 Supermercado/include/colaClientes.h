#ifndef COLACLIENTES_H
#define COLACLIENTES_H
#include "Cliente.h"

class colaClientes
{

    struct nodo{
        Cliente miCliente;
        struct nodo *sgte;
    };

    typedef struct nodo *Puntero;


        public:
            colaClientes();
            void Encolar(Cliente);
            void Desencolar(void );
            bool ColaVacia(void);
            void MostrarCola(void);
            void VaciarCola(void);

        private:
            Puntero delante;//puntero al primer elemento de la cola
            Puntero atras;//puntero al ultimo elemento de la cola
};

#endif // COLACLIENTES_H


