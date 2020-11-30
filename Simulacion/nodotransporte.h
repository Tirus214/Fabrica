#ifndef NODOTRANSPORTE_H
#define NODOTRANSPORTE_H
#include "transporte.h"



struct NodoTransporte{
    //campos
    Transporte * transporte;
    NodoTransporte* siguiente;	//next

    //constructores
    NodoTransporte(){
        transporte = new Transporte();
        siguiente = NULL;
    }

    NodoTransporte(QString nombre){
        transporte = new Transporte(nombre);
        siguiente = NULL;
    }

    NodoTransporte(QString nombre, NodoTransporte* nodoSiguiente){
        transporte = new Transporte(nombre);
        siguiente = nodoSiguiente;
    }
};

#endif // NODOTRANSPORTE_H
