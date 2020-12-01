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
    bool harina;
    int peticion;
    double velocidad;
    bool running;
    Almacen * almacen;
    int resultado;
    bool estado;

    Carrito(){
        cantMax = 0;
        cantMin = 0;
        velocidad = 0.0;
        almacen = new Almacen();
        running = true;
        peticion = 0;
        resultado = 0;
        estado = true;
        chocolate = false;
        harina = false;
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
            if(estado && resultado == 0){
                if(chocolate) traerChocolate();
                else if(harina) traerHarina();
                sleep(velocidad/2*1000);
            }
            putResultado();
            chocolate = false;
            harina = false;
        }
    }
};
#endif // CARRITO_H
