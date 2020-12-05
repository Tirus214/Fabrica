#ifndef FABIRCA_H
#define FABIRCA_H
#include "almacen.h"
#include "planificador.h"
#include "carrito.h"
#include "mezcladora.h"
#include "bandame.h"
#include "horno.h"
#include "supervisor.h"
#include "empacadora.h"
#include "ensambladora.h"
#include "almacenfinal.h"



struct Fabrica {
    int GalletasFaltantes;
    Planificador * planificador;
    Almacen * almacen;
    Carrito * carrito;
    Mezcladora * mezcladora1;
    Mezcladora * mezcladora2;
    Mezcladora * mezcladora3;
    BandaME * banda1;
    BandaME * banda2;
    Ensambladora * ensambladora;
    BandaEH * banda3;
    Horno * horno;
    BandaHE * banda4;
    Supervisor * supervisor1;
    Supervisor * supervisor2;
    Empacadora * empacadora;
    AlmacenFinal * almacenFinal;
    QMutex * mutex;
    Transporte * transporte;

    Fabrica(){
        planificador = new Planificador();
        almacen = new Almacen();
        carrito = new Carrito();
        mezcladora1 = new Mezcladora();
        mezcladora2 = new Mezcladora();
        mezcladora3 = new Mezcladora();
        banda1 = new BandaME();
        banda2 = new BandaME();
        ensambladora = new Ensambladora();
        banda3 = new BandaEH();
        horno = new Horno();
        banda4 = new BandaHE();
        supervisor1 = new Supervisor();
        supervisor2 = new Supervisor();
        empacadora = new Empacadora();
        almacenFinal = new AlmacenFinal();
        mutex = new QMutex();
        transporte = new Transporte();
    }

    void setPlanificador(int cantGalletas, QString nombre, int cantPaquetes){
        planificador->addPeticion(cantGalletas, nombre, cantPaquetes);
    }

    void setReceta(int harina, int chocolate){
        planificador->setReceta(harina, chocolate);
    }

    void setCarrito(int cantMin, int cantMax, double velocidad){
        carrito->cantMin = cantMin;
        carrito->cantMax = cantMax;
        carrito->velocidad = velocidad;
    }

    void setMezcladoraHarina1(int cantMax, int cantMin, double velocidad){
        mezcladora1->cantMax = cantMax;
        mezcladora1->cantMin = cantMin;
        mezcladora1->velocidad = velocidad;
    }

    void setMezcladoraHarina2(int cantMax, int cantMin, double velocidad){
        mezcladora2->cantMax = cantMax;
        mezcladora2->cantMin = cantMin;
        mezcladora2->velocidad = velocidad;
    }

    void setMezcladoraChoc(int cantMax, int cantMin, double velocidad){
        mezcladora3->cantMax = cantMax;
        mezcladora3->cantMin = cantMin;
        mezcladora3->velocidad = velocidad;
    }

    void setBanda1(int cantMax, double velocidad){
        banda1->cantMax = cantMax;
        banda1->velocidad = velocidad;
    }

    void setBanda2(int cantMax, double velocidad){
        banda2->cantMax = cantMax;
        banda2->velocidad = velocidad;
    }

    void setEnsambladora(int cantMaxChoc, int cantMaxMez, double velocidad){
        ensambladora->cantMaxChoc = cantMaxChoc;
        ensambladora->cantMaxMez = cantMaxMez;
        ensambladora->velocidad = velocidad;
    }

    void setBanda3(int cantMax, double velocidad){
        banda3->cantMax = cantMax;
        banda3->velocidad = velocidad;
    }

    void setHorno(int cantMax, double velocidad){
        for (int i=0; i<6; i++) {
            horno->bandejas[i]->cantMax = cantMax;
            horno->bandejas[i]->velocidad = velocidad;
        }
    }

    void setBanda4(int cantMax, double velocidad){
        banda4->cantMax = cantMax;
        banda4->velocidad = velocidad;
    }

    void setSupervisor1(double velocidad){
        supervisor1->velocidad = velocidad;
    }

    void setSupervisor2(double velocidad){
        supervisor2->velocidad = velocidad;
    }

    void setEmpacadora(double velocidad){
        empacadora->velocidad = velocidad;
    }

    void setTransporte(int cantMax, double velocidad){
        transporte->velocidad = velocidad;
        transporte->cantMax = cantMax;
    }

    void setElementos();
    void correr();
    void detener();
    void pausar();

    void verificarFinal(){
       if(almacenFinal->verificarFinal(planificador->index))
           detener();
    }
};

#endif // FABIRCA_H
