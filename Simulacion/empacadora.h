#ifndef EMPACADORA_H
#define EMPACADORA_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "horno.h"


class Empacadora : public QThread{
public:
    Horno * horno;

    Empacadora(){
        horno = new Horno();
    }
};

#endif // EMPACADORA_H
