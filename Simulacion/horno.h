#ifndef HORNO_H
#define HORNO_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "bandeja.h"



class Horno : public QThread{
public:
    Bandeja * bandejas[6];
    //Banda * banda1;
   // Banda * banda2;

    Horno(){
        for (int i=0; i<6; i++) {
            bandejas[i] = new Bandeja();
        }
       // banda1 = new Banda();
        //banda2 = new Banda();
    }
};

#endif // HORNO_H
