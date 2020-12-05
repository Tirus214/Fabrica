#ifndef HORNO_H
#define HORNO_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "bandeja.h"
#include "bandaeh.h"



class Horno : public QThread{
public:
    Bandeja * bandejas[6];
    BandaEH * banda;
    bool running;
    bool estado;
    int index;
    int galletas;

    Horno(){
        index = 0;
        for (int i=0; i<6; i++){
            bandejas[i] = new Bandeja();
        }
        banda = new BandaEH();
        running = true;
        estado = true;
        index = 0;
        galletas = 0;
    }

    void arrancar(){
        for (int i=0; i<6; i++) {
            bandejas[i]->start();
        }
    }

    void encenderBandeja(int num){
        bandejas[num]->estado = true;
    }

    void apagarBandeja(int num){
        bandejas[num]->estado = false;
    }

    void hornear(){
        if(index == 6) index = 0;
        if(!bandejas[index]->isFull())
            bandejas[index]->cantidad += banda->desencolar();
        index++;
    }

    void recoger(){
        for (int i=0; i<6; i++) {
            galletas += bandejas[i]->galletasHechas;
            bandejas[i]->galletasHechas = 0;
        }
    }

    void run(){
        arrancar();
        while(running){
            sleep(bandejas[0]->velocidad);
            if(estado){
                hornear();
                recoger();
            }
        }
    }
};

#endif // HORNO_H
