#ifndef BANDAEH_H
#define BANDAEH_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "cola.h"
#include "mezcladora.h"
#include "horno.h"

class Banda : public QThread{
public:
    Cola * cola;
    int cantMax;
    int index;
    int velocidad;
    Mezcladora * mezcladora1;
    Mezcladora * mezcladora2;
    Horno * horno;

    Banda(){
        cola = new Cola();
        cantMax = 10;
        index = 0;
        velocidad = 10;
        mezcladora1 = new Mezcladora();
        mezcladora2 = new Mezcladora();
        horno = new Horno();
     }
};

#endif // BANDAEH_H
