#ifndef CARRITO_H
#define CARRITO_H
#include "almacen.h"
#include <QApplication>
#include <QtCore>
#include <QtDebug>



class Carrito : public QThread{
public:
    QString ingrediente;
    int cantMax;
    int cantMin;
    int chocolate;
    int harina;
    double velocidad;
    bool running;
    Almacen * almacen;

    Carrito(){
        harina = 0;
        chocolate = 0;
        cantMax = 0;
        cantMin = 0;
        velocidad = 0.0;
        almacen = new Almacen();
        running = true;
    }

    void setAlmacen(Almacen * _almacen);


    void run();
};
#endif // CARRITO_H
