#ifndef NODOBANDEJA_H
#define NODOBANDEJA_H
#include "bandeja.h"
#include <QApplication>

struct NodoBandeja{
    Bandeja * bandeja;
    NodoBandeja * siguiente;

    NodoBandeja(){
        bandeja = NULL;
        siguiente = NULL;
    }

    NodoBandeja(Bandeja * _ban){
        bandeja = _ban;
        siguiente = NULL;
    }
};

#endif // NODOBANDEJA_H
