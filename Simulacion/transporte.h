#ifndef TRANSPORTE_H
#define TRANSPORTE_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "listadoblecircular.h"
#include "almacenfinal.h"




class Transporte : public QThread{
public:
    QString nombre;
    int cantMin;
    int cantMax;
    double velocidad;
    ListaDobleCircular * lista;
    AlmacenFinal * almacen;
    bool running;
    bool estado;
    int index;
    int cantidad;

    Transporte(){
        this->nombre = "";
        cantMax = 0;
        cantMin = 0;
        velocidad = 0.0;
        lista = new ListaDobleCircular();
        almacen = new AlmacenFinal();
        running = true;
        estado = true;
        index = 0;
        cantidad = 0;
    }

    Transporte(QString nombre){
        this->nombre = nombre;
        cantMax = 0;
        cantMin = 0;
        velocidad = 0.0;
        lista = new ListaDobleCircular();
        almacen = new AlmacenFinal();
    }

    void addPaquete(Paquete* paquete){
        lista->insertarAlFinal(paquete);
        cantidad++;
        index++;
    }

    NodoPaquete * ubicarPedido(){
        NodoPaquete * tmp = lista->primerNodo;
        for(int i=0; i<=index; i++){
            tmp = tmp->siguiente;
        }
        return tmp;
    }

    void run(){
        while(running){
            if(estado && cantidad > 0){
                almacen->addPaquete(ubicarPedido()->paquete);
                cantidad--;
            }
        }
    }
};

#endif // TRANSPORTE_H
