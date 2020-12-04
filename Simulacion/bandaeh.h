#ifndef BANDAEH_H
#define BANDAEH_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "cola.h"
#include "ensambladora.h"

class BandaEH : public QThread {
public:
    Cola * cola;
    int cantMax;
    int index;
    double velocidad;
    Ensambladora * ensambladora;
    bool running;
    bool estado;

    // Constructores

    BandaEH(){
        cola = new Cola();
        cantMax = 10;
        index = 0;
        velocidad = 10;
        ensambladora = new Ensambladora();
        running = true;
        estado = false;
     }

    // Metodos

    bool isFull(){
        return index == cantMax;
    }

    void encolar(int dato){
        if(index < cantMax){
           cola->encolar(dato);
           index++;
        }
    }

    int desencolar(){
        if(index > 0){
            return cola->desencolar()->dato;
            index--;
        }
        return 0;
    }

    void recoger(){
        if(ensambladora->galletas > 0){
            ensambladora->galletas -= 1;
            encolar(1);
        }
    }

    // ==== setters ====
    void setVelocidad(double);
    void setMaximo(int);
    // =================

    void run(){
        while (running) {
            sleep(velocidad);
            if (estado && !isFull()) {
                recoger();
            }
        }
    }
};

#endif // BANDAEH_H
