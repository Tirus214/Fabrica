#ifndef EMPACADORA_H
#define EMPACADORA_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "listadoblecircular.h"
#include "planificador.h"
#include "banda.h"


class Empacadora : public QThread{
public:
    Planificador * planificador;
    Banda * banda;
    int index;
    double velocidad;
    int galletas;

    Empacadora(){
        banda = new Banda();
        planificador = new Planificador();
        index = 0;
        velocidad = 0.0;
        galletas = 0;
    }

    void recoger(){
        galletas += banda->desencolar();
    }

    void empacar(){
        NodoPaquete* tmp = planificador->lista->primerNodo;
        for (int i=0; i < index; i++) {
            tmp = tmp->siguiente;
        }
        tmp->paquete->galletasHechas += galletas;
        galletas--;
        if(tmp->paquete->galletasHechas == tmp->paquete->cantidadGalletas){

        }
    }


};

#endif // EMPACADORA_H
