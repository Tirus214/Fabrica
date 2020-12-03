#ifndef ALMACENFINAL_H
#define ALMACENFINAL_H
#include "listadoblecircular.h"



struct AlmacenFinal{
    ListaDobleCircular * listaHecha;

    AlmacenFinal(){
        listaHecha = new ListaDobleCircular();
    }

    void addPaquete(Paquete* paquete);

    bool verificarFinal(int num);
};

#endif // ALMACENFINAL_H
