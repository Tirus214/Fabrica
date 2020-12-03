#include "planificador.h"

void Planificador::addPeticion(int cantPaquetes, QString nombre, int cantGalletas){
    for(int i=0; i<cantPaquetes; i++){
        lista->insertarAlFinal(new Paquete(nombre, cantGalletas));
        index++;
    }
    addNombre(nombre);
}
