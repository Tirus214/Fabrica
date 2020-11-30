#include "almacen.h"
#include "mezcladora.h"
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#ifndef CARRITO_H
#define CARRITO_H


class Carrito : public QThread{
public:
    QString ingrediente;
    int cantMax;
    int cantMin;
    double velocidad;
    bool running;
    Almacen * almacen;
    Mezcladora * mezcladora;

    Carrito(){
        cantMax = 0;
        cantMin = 0;
        velocidad = 0.0;
        almacen = new Almacen();
        mezcladora = new Mezcladora();
        running = true;
    }

    void setAlmacen(Almacen * _almacen);
    void setMezcladora(Mezcladora * _mezcladora);
    void run();
};

#endif // CARRITO_H
