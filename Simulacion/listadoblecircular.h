#ifndef LISTADOBLECIRCULAR_H
#define LISTADOBLECIRCULAR_H
#include "nodopaquete.h"




struct ListaDobleCircular{
    NodoPaquete * primerNodo;

    ListaDobleCircular(){
        primerNodo = NULL;
    }

    void insertarAlFinal(Paquete * paquete){
            if(primerNodo == NULL){
                primerNodo = new NodoPaquete(paquete);
            }
            else if (primerNodo->anterior == NULL){
                primerNodo->anterior = primerNodo->siguiente = new NodoPaquete(paquete);
                primerNodo->anterior->anterior = primerNodo->anterior->siguiente = primerNodo;
            }
            else{
                NodoPaquete * nuevo = new NodoPaquete(paquete);
                nuevo->siguiente = primerNodo;
                nuevo->anterior = primerNodo->anterior;
                primerNodo->anterior->siguiente = primerNodo->anterior = nuevo;
            }
    }

    bool isEmpty(){
        return primerNodo == NULL;
    }
};

#endif // LISTADOBLECIRCULAR_H
