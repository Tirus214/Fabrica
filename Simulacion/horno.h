#ifndef HORNO_H
#define HORNO_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "bandeja.h"
#include "bandame.h"



class Horno : public QThread{
public:
    Bandeja * bandejas[6];
    BandaME * banda1;
    BandaME * banda2;

    Horno(){
        for (int i=0; i<6; i++){
            bandejas[i] = new Bandeja();
        }
        banda1 = new BandaME();
        banda2 = new BandaME();
    }
};

#endif // HORNO_H
