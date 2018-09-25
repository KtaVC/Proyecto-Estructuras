#include "pilaProductos.h"

pilaProductos::pilaProductos(){
    cima=NULL;
}

bool pilaProductos::PilaVacia(){
    if(cima==NULL)
        return true;
    else
        return false;
}

void pilaProductos::Apilar(Productos miProducto){

    Puntero p_aux;
    p_aux=new(struct nodo);
    p_aux->miProducto=miProducto;
    p_aux->sgte=cima;
    cima=p_aux;

}

void pilaProductos::Cima(){
    Productos miProducto;
    if(cima==NULL)
        cout<<"\n\nPila Vacia...!";

    else {
        miProducto=cima->miProducto;
        cout<<"\nLa Cima es :"<<miProducto.toString()<<endl;
    }
}

void pilaProductos::Desapilar(){
    Productos miProducto;
    Puntero p_aux;
    if(cima==NULL)
        cout<<"\n\n\tPila Vacia...!!";
    else{
        p_aux=cima;
        miProducto=p_aux->miProducto;
        cima=cima->sgte;
        delete(p_aux);
    }
}

void pilaProductos::MostrarPila(){
    Puntero p_aux;
    p_aux=cima;
    cout<<"*************************************************"<<endl;
    while(p_aux!=NULL){
        cout<<p_aux->miProducto.toString()<<endl;
        p_aux=p_aux->sgte;
     }
     cout<<"*************************************************\n"<<endl;
}

void pilaProductos::DestruirPila(){
    Puntero p_aux;

    while(cima!=NULL){
            p_aux=cima;
            cima=cima->sgte;
            delete(p_aux);
    }
}

int pilaProductos::getIdProd()
{
    return miProducto.getIdProd();
}
