#ifndef BANDAMH_H
#define BANDAMH_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>

class BandaME : public QThread{
    int cantMin;
    int cantMax;
    int velocidad;

public:
    BandaME(){
        cantMax = 0;
        cantMin = 0;
        velocidad = 0;
    }
};

#endif // BANDAMH_H
