#ifndef BANDAME_H
#define BANDAME_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "cola.h"
#include "mezcladora.h"

class BandaME : public QThread {
public:
    Cola * cola;
    int cantMax;
    int index;
    double velocidad;
    Mezcladora * mezcladora1;
    Mezcladora * mezcladora2;
    bool running;
    bool estado;
    bool nombreChocolate;
    bool nombreHarina;

    BandaME(){
        cola = new Cola();
        cantMax = 10;
        index = 0;
        velocidad = 10;
        mezcladora1 = new Mezcladora();
        mezcladora2 = new Mezcladora();
        running = true;
        estado = true;
        nombreChocolate = false;
        nombreHarina = false;
    }

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
        if(mezcladora1->mezclaHecha > 0){
            mezcladora1->mezclaHecha -= 1;
            encolar(1);
        }
        if(nombreHarina && mezcladora2->mezclaHecha > 0 && !isFull()){
            mezcladora2->mezclaHecha -= 1;
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

#endif // BANDAME_H
