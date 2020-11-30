
#include "listadoblecircular.h"
#ifndef ALMACENFINAL_H
#define ALMACENFINAL_H


struct AlmacenFinal{
    ListaDobleCircular * listaHecha;

    AlmacenFinal(){
        listaHecha = new ListaDobleCircular();
    }

    void addPaquete(Paquete* paquete);
};

#endif // ALMACENFINAL_H
