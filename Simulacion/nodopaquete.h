#include "paquete.h"
#ifndef NODOPAQUETE_H
#define NODOPAQUETE_H



struct NodoPaquete{
    Paquete * paquete;
    NodoPaquete * siguiente;
    NodoPaquete * anterior;

    NodoPaquete(Paquete * _paquete){
        paquete = _paquete;
        siguiente = anterior = NULL;
    }

};

#endif // NODOPAQUETE_H
