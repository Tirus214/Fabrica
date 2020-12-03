#include "almacenfinal.h"

void AlmacenFinal::addPaquete(Paquete * paquete){
    listaHecha->insertarAlFinal(paquete);
}

bool AlmacenFinal::verificarFinal(int num){
    int cant = 0;
    NodoPaquete * tmp = listaHecha->primerNodo;
    do {
        if(tmp->paquete->cantidadGalletas == tmp->paquete->galletasHechas)
            cant++;
    } while(tmp != listaHecha->primerNodo);
    return cant == num;
}
