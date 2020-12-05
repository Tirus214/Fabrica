#ifndef ENSAMBLADORA_H
#define ENSAMBLADORA_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "receta.h"
#include "bandame.h"


class Ensambladora : public QThread{
public:
    int galletas;
    int chocolate;
    int mezcla;
    double velocidad;
    int cantMaxChoc;
    int cantMaxMez;
    bool running;
    bool estado;
    Receta * receta;
    BandaME * bandaChoc;
    BandaME * bandaMez;

    Ensambladora(){
        galletas = 0;
        chocolate = 0;
        mezcla = 0;
        velocidad = 0.0;
        cantMaxChoc = 0;
        cantMaxMez = 0;
        running = true;
        estado = true;
        receta = new Receta();
        bandaChoc = new BandaME();
        bandaMez = new BandaME();
    }

    bool isFull(){
        return cantMaxChoc == chocolate || cantMaxMez == mezcla;
    }

    void sacarMateriales(){
        mezcla += bandaMez->desencolar();
        chocolate += bandaChoc->desencolar();
    }

    void hacerGalletas(){
        if(chocolate - receta->chocolate >= 0 &&
                mezcla - receta->harina >= 0){
            chocolate -= receta->chocolate;
            mezcla -= receta->harina;
            galletas++;
        }
    }

    // ==== setters ====
    void setVelocidad(double);
    void setMaximo(int);
    // =================

    void run(){
        while(running){
            sleep(velocidad);
            if(estado){
                if(!isFull()) sacarMateriales();
                hacerGalletas();
            }
        }
    }
};

#endif // ENSAMBLADORA_H
