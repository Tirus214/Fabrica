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
    bool chocolate;
    int peticion;
    double velocidad;
    bool running;
    Almacen * almacen;
    int resultado;

    Carrito(){
        chocolate = true;
        cantMax = 0;
        cantMin = 0;
        velocidad = 0.0;
        almacen = new Almacen();
        running = true;
        peticion = 0;
        resultado = 0;
    }

    void setAlmacen(Almacen * _almacen);

    void traerChocolate(){
        if(cantMax < peticion < cantMin){
            almacen->chocolate -= peticion;
        }
        else peticion = 0;
    }

    void traerHarina(){
        if(cantMax < peticion < cantMin){
            almacen->harina -= peticion;
        }
        else peticion = 0;
    }

    void putResultado(){
        resultado = peticion;
    }


    void run(){
        while(running){
            sleep(velocidad/2*1000);
            if(chocolate) traerChocolate();
            else traerHarina();
            sleep(velocidad/2*1000);
            putResultado();
        }
    }
};
#endif // CARRITO_H
