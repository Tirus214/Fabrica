#ifndef BANDAHE_H
#define BANDAHE_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "cola.h"
#include "horno.h"

class BandaHE : public QThread {
public:
    Cola * cola;
    int cantMax;
    int index;
    double velocidad;
    Horno * horno;
    bool running;
    bool estado;

    // Constructores

    BandaHE(){
        cola = new Cola();
        cantMax = 0;
        index = 0;
        velocidad = 0;
        horno = new Horno();
        running = true;
        estado = true;
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
        if(horno->galletas > 0){
            horno->galletas -= 1;
            encolar(1);
        }
    }

    // ==== setters ====
    void setVelocidad(double);
    void setMaximo(int);
    // =================

    void run(){
        running = true;
        while (running) {
            sleep(velocidad);
            if (estado && !isFull()){
                recoger();
            }
        }
    }

};

#endif // BANDAHE_H
