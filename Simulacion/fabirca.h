#ifndef FABIRCA_H
#define FABIRCA_H
#include "almacen.h"
#include "planificador.h"
#include "carrito.h"
#include "mezcladora.h"
#include "banda.h"
#include "horno.h"
#include "supervisor.h"
#include "empacadora.h"


struct Fabirca {
    int GalletasFaltantes;
    Planificador * planificador;
    Almacen * almacen;
    Carrito * carrito;
    Mezcladora * mezcladora1;
    Mezcladora * mezcladora2;
    Mezcladora * mezcladora3;
    Banda * banda1;
    Banda * banda2;
    Horno * horno;
    Banda * banda3;
    Supervisor * supervisor1;
    Supervisor * supervisor2;
    Empacadora * empacadora;

    Fabirca(){
        planificador = new Planificador();
        almacen = new Almacen();
        carrito = new Carrito();
        mezcladora1 = new Mezcladora();
        mezcladora2 = new Mezcladora();
        mezcladora3 = new Mezcladora();
        banda1 = new Banda();
        banda2 = new Banda();
        horno = new Horno();
        banda3 = new Banda();
        supervisor1 = new Supervisor();
        supervisor2 = new Supervisor();
        empacadora = new Empacadora();
    }

    void setElementos();
    void correr();

    void setPlanificador(int cantGalletas, QString nombre, int cantPaquetes){
        planificador->addPeticion(cantGalletas, nombre, cantPaquetes);
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

    void setBanda1(int cantMax){
        banda1->cantMax = cantMax;
    }

    void setBanda2(int cantMax){
        banda2->cantMax = cantMax;
    }

    void setSupervisor(double velocidad){
        supervisor1->
    }

};

#endif // FABIRCA_H
