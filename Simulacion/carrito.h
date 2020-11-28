#ifndef CARRITO_H
#define CARRITO_H
#include "almacen.h"
#include "mezcladora.h"
#include <QApplication>
#include <QtCore>
#include <QtDebug>

class Carrito : public QThread{
public:
    QString ingrediente;
    int cantMax;
    int cantMin;
    int velocidad;
    bool running;
    Almacen * almacen;
    Mezcladora * mezcladora;

    Carrito(){
        cantMax = 0;
        cantMin = 0;
        velocidad = 0;
        almacen = new Almacen();
        mezcladora = new Mezcladora();
        running = true;
    }

    void setAlmacen(Almacen * _almacen);
    void setMezcladora(Mezcladora * _mezcladora);
    void run();
};

#endif // CARRITO_H
