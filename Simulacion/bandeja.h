#ifndef BANDEJA_H
#define BANDEJA_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>


class Bandeja : public QThread{
public:
    int cantMax;
    int cantidad;
    int galletasHechas;
    double velocidad;
    bool running;
    bool estado;

    Bandeja(){
        cantMax = 0;
        cantidad = 0;
        velocidad = 0.0;
        galletasHechas = 0;
        running = true;
        estado = true;
    }

    bool isFull(){
        return cantidad == cantMax;
    }

    void hornear(){
        if(isFull()){
            galletasHechas = cantidad;
            cantidad = 0;
        }
    }

    // ==== setters ====
    void setVelocidad(double);
    void setMaximo(int);
    // =================

    void run(){
        while (running) {
            sleep(velocidad);
            if (estado) {
                hornear();
            }
        }
    }
};

#endif // BANDEJA_H
