#include "almacenfinal.h"


void AlmacenFinal::incrementarPaquete(QString nombre){
    NodoString * tmp = listaString->primerNodo;
    while(tmp != NULL){
        if(tmp->nombre == nombre){
            tmp->dato++;
            return;
        }
    }
}

void AlmacenFinal::addPaquete(Paquete * paquete){
    listaHecha->insertarAlFinal(paquete);
    galletas += paquete->galletasHechas;
    incrementarPaquete(paquete->nombre);
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
