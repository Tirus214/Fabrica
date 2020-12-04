#ifndef ALMACENFINAL_H
#define ALMACENFINAL_H
#include "listadoblecircular.h"
#include "listasimplestring.h"



struct AlmacenFinal{
    ListaSimpleString * listaString;
    ListaDobleCircular * listaHecha;
    int galletas;

    AlmacenFinal(){
        listaString = new ListaSimpleString();
        listaHecha = new ListaDobleCircular();
        galletas = 0;
    }

    void incrementarPaquete(QString nombre);

    void addPaquete(Paquete* paquete);

    bool verificarFinal(int num);
};

#endif // ALMACENFINAL_H
