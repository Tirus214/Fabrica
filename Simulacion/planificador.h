#ifndef PLANIFICADOR_H
#define PLANIFICADOR_H
#include "listadoblecircular.h"


struct Planificador{
    ListaDobleCircular * lista;
    int totalGalletas;

    Planificador(){
        lista = new ListaDobleCircular();
        totalGalletas = 0;
    }

    void addPeticion(int cantPaquetes, QString nombre, int cantGalletas);

};

#endif // PLANIFICADOR_H
