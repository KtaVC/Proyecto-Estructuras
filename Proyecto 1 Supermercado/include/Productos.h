#ifndef PRODUCTOS_H
#define PRODUCTOS_H
#include <iostream>
#include <sstream>

using namespace std;

class Productos
{
    public:
        Productos();
        Productos(string, string);

        void setNomProd(string);
        void setMarca(string);

        string getNomProd();
        string getMarca();

        void setIdProd(int);
        int getIdProd();

        string toString();

        virtual ~Productos();
    protected:
    private:
        string nomProd;
        string marca;
        int idProd;
};

#endif // PRODUCTOS_H
