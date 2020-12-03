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
    }

    void pedirMateriales(){
        if(nombreChocolate) carro->chocolate = true;
        else if(nombreHarina) carro->harina = true;
        carro->peticion = cantMax;
        mezcla = carro->resultado;
        if(mezcla == 0){
            carro->peticion = cantMin;
            mezcla = carro->resultado;
        }
    }

    void hacerMezcla(){
        mezclaHecha = mezcla;
        mezcla = 0;
    }

    void run(){
        while(running){
            sleep(velocidad/2*1000);
            if(estado && mezclaHecha == 0){
                if(mezcla == 0) pedirMateriales();
                else hacerMezcla();
            }
            sleep(velocidad/2*1000);
        }
    }

};



#endif // MEZCLADORA_H
