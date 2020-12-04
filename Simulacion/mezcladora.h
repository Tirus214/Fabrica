#ifndef MEZCLADORA_H
#define MEZCLADORA_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "carrito.h"



class Mezcladora : public QThread {
public:
    bool nombreChocolate;
    bool nombreHarina;
    int cantMin;
    int cantMax;
    double velocidad;
    int mezcla;
    int mezclaHecha;
    Carrito * carro;
    bool running;
    bool estado;
    QMutex * mutex;

    Mezcladora(){
        cantMax = 0;
        cantMin = 0;
        velocidad = 0.0;
        mezcla = 0;
        carro = new Carrito();
        running = true;
        estado = true;
        nombreChocolate = false;
        nombreHarina = false;
        mutex = new QMutex();
    }

    void pedirMateriales(){
        try{
            mutex->lock();
            if(nombreChocolate) carro->chocolate = true;
            else if(nombreHarina) carro->harina = true;
            carro->peticion = cantMax;
            mezcla = carro->resultado;
            if(mezcla == 0){
                carro->peticion = cantMin;
                mezcla = carro->resultado;
            }
            mutex->unlock();
        } catch (QException) {

        }
    }

    void hacerMezcla(){
        mezclaHecha = mezcla;
        mezcla = 0;
    }

    // ==== setters ====
    void setVelocidad(double);
    void setMaximo(int);
    void setMinimo(int);
    // =================

    void run(){
        while(running){
            sleep(velocidad);
            if(estado && mezclaHecha == 0){
                if(mezcla == 0) pedirMateriales();
                else hacerMezcla();
            }
        }
    }

};



#endif // MEZCLADORA_H
