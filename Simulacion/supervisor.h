#ifndef SUPERVISOR_H
#define SUPERVISOR_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "banda.h"
#include "QRandomGenerator64"


class Supervisor : public QThread{
public:
    int galletas;
    double velocidad;
    Banda * banda;
    int galletasMalas;
    int probabilidad;
    bool running;


    Supervisor(){
        galletas = 0;
        velocidad = 0.0;
        banda = new Banda();
        galletasMalas = 0;
        probabilidad = 0;
        running = true;
    }

    void createProbabilidad(){
       std::uniform_int_distribution<int> distribution(0, 20);
       probabilidad = distribution(*QRandomGenerator::global());
    }

    void inspeccionar(){
        while(!banda->cola->vacia()){
            galletas += banda->desencolar();
        }
    }

    void devolver(){
        createProbabilidad();
        galletasMalas = galletas * (probabilidad/100);
        galletas -=  galletasMalas;
        while(galletas > 0){
            banda->encolar(1);
            galletas--;
        }
    }

    void run(){
        while(running){
            sleep(velocidad*1000);
            if(!banda->cola->vacia()){
                inspeccionar();
                devolver();
            }
        }
    }
};

#endif // SUPERVISOR_H
