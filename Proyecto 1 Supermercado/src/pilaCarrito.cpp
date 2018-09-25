#include "pilaCarrito.h"

pilaCarrito::pilaCarrito(void){
    cima=NULL;
}

bool pilaCarrito::PilaVacia(void){
    if(cima==NULL)
        return true;
    else
        return false;
}

void pilaCarrito::Apilar(Productos miProducto){

    Puntero p_aux;
    p_aux=new(struct nodo);
    p_aux->miProducto=miProducto;
    p_aux->sgte=cima;
    cima=p_aux;

}

void pilaCarrito::Desapilar(void){
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

void pilaCarrito::MostrarPila(void){
    Puntero p_aux;
    p_aux=cima;

    while(p_aux!=NULL){
        cout<<p_aux->miProducto.toString()<<endl;
        p_aux=p_aux->sgte;
    }
}

void pilaCarrito::DestruirPila(void){
    Puntero p_aux;

    while(cima!=NULL){
            p_aux=cima;
            cima=cima->sgte;
            delete(p_aux);
    }
}

