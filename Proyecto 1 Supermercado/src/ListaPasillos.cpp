#include "ListaPasillos.h"

ListaPasillos::ListaPasillos() : plista(NULL)
{

}

ListaPasillos::~ListaPasillos()
{
   pnodo aux;

   Primero();
   while(plista) {
      aux = plista;
      plista = plista->siguiente;
      delete aux;
   }
}

bool ListaPasillos::ListaVacia()
{
    return plista == NULL;
}

bool ListaPasillos::Actual()
{
    return plista != NULL;
}

ListaTipoProd ListaPasillos::ValorActual()
{
    return plista->valor;
}

void ListaPasillos::Insertar(ListaTipoProd v)
{
   pnodo nuevo;
   Primero();
   if(ListaVacia()) {
      nuevo = new NodoPasillo(v, plista,NULL);
      if(!plista) plista = nuevo;
      else plista->anterior = nuevo;
   }
}

void ListaPasillos::Mostrar()
{
   pnodo nodo;
      if(ListaVacia()==true){
        cout<<"No hay elementos\n";
      }

      Primero();
      nodo = plista;

      while(nodo) {
         nodo->valor.desplegarListaPU();
         nodo = nodo->siguiente;
      }
   cout << endl;
}

void ListaPasillos::eliminarProductoPila(Productos p)
{

}

void ListaPasillos::Siguiente()
{
   if(plista) plista = plista->siguiente;
}

void ListaPasillos::Anterior()
{
   if(plista) plista = plista->anterior;
}

void ListaPasillos::Primero()
{
   while(plista && plista->anterior) plista = plista->anterior;
}

void ListaPasillos::Ultimo()
{
   while(plista && plista->siguiente) plista = plista->siguiente;
}

/*
void ListaPasillos::Borrar(int v)
{
   pnodo nodo;

   nodo = plista;
   while(nodo && nodo->valor.getNumero() < v) nodo = nodo->siguiente;
   while(nodo && nodo->valor.getNumero() > v) nodo = nodo->anterior;

   if(!nodo || nodo->valor.getNumero() != v) return; //El valor no esta en la lista

   // Borrar el nodo
   if(nodo == plista){
        if(nodo->anterior){
            plista = nodo->anterior;
        }
        else{
            plista = nodo->siguiente;
        }
   }

   if(nodo->anterior) // no es el primer elemento
      nodo->anterior->siguiente = nodo->siguiente;
   if(nodo->siguiente) // no el el último nodo
      nodo->siguiente->anterior = nodo->anterior;
  // free(nodo);

   delete nodo;
   cout<<"\nPasillo borrado\n"<<endl;
}
*/

