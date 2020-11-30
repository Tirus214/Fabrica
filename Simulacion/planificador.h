#include "listadoblecircular.h"
#include "listasimplestring.h"
#ifndef PLANIFICADOR_H
#define PLANIFICADOR_H



struct Planificador{
    Receta * receta;
    ListaSimpleString * listaNombres;
    ListaDobleCircular * lista;
    int totalGalletas;

    Planificador(){
        listaNombres = new ListaSimpleString();
        lista = new ListaDobleCircular();
        totalGalletas = 0;
        receta = new Receta();
    }

    void setReceta(int harina, int chocolate){
        receta->chocolate = chocolate;
        receta->harina = harina;
    }

    void addNombre(QString nombre){
        NodoString * tmp = listaNombres->primerNodo;
        while (tmp != NULL) {
            if(tmp->nombre == nombre) return;
            tmp = tmp->siguiente;
        }
        listaNombres->insertarAlFinal(nombre);
    }

    void addPeticion(int cantPaquetes, QString nombre, int cantGalletas);

};

#endif // PLANIFICADOR_H
