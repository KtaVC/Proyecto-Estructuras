#include "colaClientes.h"


colaClientes::colaClientes(void){
    delante=NULL;//inicializamos los punteros
    atras=NULL;
}

bool colaClientes::ColaVacia(){

    if(delante==NULL)
        return true;
    else return false;
}
void colaClientes::Encolar(Cliente miCliente){

     Puntero p_aux;

     p_aux=new(struct nodo);
     p_aux->miCliente=miCliente;
     p_aux->sgte=NULL;

     if(delante==NULL)
        delante=p_aux;
     else atras->sgte=p_aux;

     atras=p_aux;
}

void colaClientes::Desencolar(void){

    Cliente c;
    Puntero p_aux;

    p_aux=delante;
    c=p_aux->miCliente;
    delante=(delante)->sgte;
    delete(p_aux);
}

void colaClientes::MostrarCola(void){
    Puntero p_aux;
     p_aux=delante;
     while(p_aux!=NULL){
        cout<<p_aux->miCliente.getNombre();
        p_aux=p_aux->sgte;
     }
    cout<<endl;
}

void colaClientes::VaciarCola(void){

     Puntero p_aux,r_aux;
     p_aux=delante;
     while(p_aux!=NULL){
        r_aux=p_aux;
        p_aux=p_aux->sgte;
        delete(r_aux);
     }
     delante=NULL;
     atras=NULL;
}
