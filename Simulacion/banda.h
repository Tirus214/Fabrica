#ifndef BANDAEH_H
#define BANDAEH_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "cola.h"
#include "mezcladora.h"
#include "horno.h"
#include "empacadora.h"

class Banda : public QThread{
public:
    Cola * cola;
    int cantMax;
    int index;
    double velocidad;
    Mezcladora * mezcladora1;
    Mezcladora * mezcladora2;
    Horno * horno;
    Empacadora * empacadora;

    Banda(){
        cola = new Cola();
        cantMax = 10;
        index = 0;
        velocidad = 10;
        mezcladora1 = new Mezcladora();
        mezcladora2 = new Mezcladora();
        horno = new Horno();
        empacadora = new Empacadora();
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
        return cola->desencolar()->dato;
        index--;
    }
};

#endif // BANDAEH_H
