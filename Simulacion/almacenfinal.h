#ifndef ALMACENFINAL_H
#define ALMACENFINAL_H
#include "listadoblecircular.h"


struct AlmacenFinal{
    ListaDobleCircular * listaHecha;

    AlmacenFinal(){
        listaHecha = new ListaDobleCircular();
    }

    void addPaquete(Paquete* paquete);
};

#endif // ALMACENFINAL_H
