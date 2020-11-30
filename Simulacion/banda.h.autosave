#ifndef BANDAEH_H
#define BANDAEH_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "cola.h"
#include "mezcladora.h"



class Banda : public QThread{
public:
    Cola * cola;
    int cantMax;
    int index;
    double velocidad;
    Mezcladora * mezcladora1;
    Mezcladora * mezcladora2;

    Banda(){
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

#endif // BANDAEH_H
