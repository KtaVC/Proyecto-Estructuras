#include "ListaProducto.h"

ListaProducto::ListaProducto()
{
    primero=NULL;
    aux=NULL;
}

bool ListaProducto::anadir(pilaProductos nuevo)
{
    if (primero==NULL)
    {
        primero= new nodoProducto(nuevo);
        return true;
    }
    else
    {
        aux= primero;
        while(aux->getSig()!=NULL)
            aux=aux->getSig();

        nodoProducto* nuevoProd= new nodoProducto (nuevo);
        aux->setSig(nuevoProd);
        return true;
    }

}

void ListaProducto::mostrarLista()
{
   if(primero==NULL)
        cout<<"No hay elementos\n\n";
    else
    {
        aux=primero;

        while (aux != NULL)
        {

            aux->valor.MostrarPila();
            aux= aux->getSig();
        }
    }
}

bool ListaProducto::borrar(int idProd)
{
    aux = primero;
    while (aux != NULL)
    {
        nodoProducto* ant;
        aux = primero;
        ant= aux;
     /*   if(aux->valor.getIdProd() != idProd)
        {
            ant = aux;
            aux = aux->getSig();
            cout<<"Producto agotado..."<<endl;
        }*/

        if (aux ==NULL){
            return false;
        }
        else
        {
           if(aux->getValor().getIdProd()== primero->getValor().getIdProd())
           {
                primero= aux->getSig();
                aux->valor.Desapilar();
                return true;
           }
            ant->setSig(aux->getSig());
            //delete (aux);
            return true;
        }
    }
}

bool ListaProducto::vacio()
{
    return primero==NULL;
}


ListaProducto::~ListaProducto()
{
    //dtor
}
