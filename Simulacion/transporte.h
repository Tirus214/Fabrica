#ifndef TRANSPORTE_H
#define TRANSPORTE_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "listadoblecircular.h"
#include "almacenfinal.h"
#include "empacadora.h"




class Transporte : public QThread{
public:
    QString nombre;
    int cantMin;
    int cantMax;
    double velocidad;
    ListaDobleCircular * lista;
    AlmacenFinal * almacen;
    Empacadora * empacadora;

    Transporte(){
        this->nombre = "";
        cantMax = 0;
        cantMin = 0;
        velocidad = 0.0;
        lista = new ListaDobleCircular();
        almacen = new AlmacenFinal();
        empacadora = new Empacadora();
    }

    Transporte(QString nombre){
        this->nombre = nombre;
        cantMax = 0;
        cantMin = 0;
        velocidad = 0.0;
        lista = new ListaDobleCircular();
        almacen = new AlmacenFinal();
        empacadora = new Empacadora();
    }

    void addPaquete(Paquete* paquete){
        lista->insertarAlFinal(paquete);
    }

    void run();
};

#endif // TRANSPORTE_H
