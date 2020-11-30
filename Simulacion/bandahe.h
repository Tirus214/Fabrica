#ifndef BANDAHE_H
#define BANDAHE_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "cola.h"
#include "horno.h"

class BandaHE
{
public:
    Cola * cola;
    int cantMax;
    int index;
    double velocidad;
    Horno * horno;

    // Constructores

    BandaHE(){
        cola = new Cola();
        cantMax = 10;
        index = 0;
        velocidad = 10;
        horno = new Horno();
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

};

#endif // BANDAHE_H
