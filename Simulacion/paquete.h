#ifndef PAQUETE_H
#define PAQUETE_H
#include <QApplication>
#include "receta.h"



struct Paquete{
    QString nombre;
    int cantidadGalletas;
    int galletasHechas;


    Paquete(QString _nombre, int _cantidad){
        nombre = _nombre;
        cantidadGalletas = _cantidad;
        galletasHechas = 0;
    }
};

#endif // PAQUETE_H
