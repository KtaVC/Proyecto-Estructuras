#ifndef PASILLOS_H
#define PASILLOS_H
#include <iostream>
#include <sstream>

using namespace std;

class Pasillos
{
    public:
        Pasillos();
        Pasillos(int,string);

        void setNombre(string);
        string getNombre();
        void setNumero(int);
        int getNumero();

        string toString();

        virtual ~Pasillos();

    protected:
    private:
        int numero;
        string nombre;
};

#endif // PASILLOS_H
