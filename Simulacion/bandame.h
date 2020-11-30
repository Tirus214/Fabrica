#ifndef BANDAME_H
#define BANDAME_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "cola.h"
#include "mezcladora.h"



class BandaME : public QThread{
public:
    Cola * cola;
    int cantMax;
    int index;
    double velocidad;
    Mezcladora * mezcladora1;
    Mezcladora * mezcladora2;

    BandaME(){
        cola = new Cola();
        cantMax = 10;
        index = 0;
        velocidad = 10;
        mezcladora1 = new Mezcladora();
        mezcladora2 = new Mezcladora();
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
};

#endif // BANDAME_H
