#ifndef MEZCLADORA_H
#define MEZCLADORA_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "carrito.h"

class Mezcladora : public QThread {
public:
    int cantMin;
    int cantMax;
    double velocidad;
    int mezcla;
    int mezclaHecha;
    Carrito * carro;
    bool running;

    Mezcladora(){
        cantMax = 0;
        cantMin = 0;
        velocidad = 0.0;
        mezcla = 0;
        carro = new Carrito();
        running = true;
    }


    void run();

};

#endif // MEZCLADORA_H
