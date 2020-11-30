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
    
    void setHorno(int cantMax, double velocidad){
        for (int i=0; i<6; i++) {
            horno->bandejas[i]->cantMax = cantMax;
            horno->bandejas[i]->velocidad = velocidad;
        }
    }
    
    void setBanda3(int cantMax, double velocidad){
        banda3->cantMax = cantMax;
        banda3->velocidad = velocidad;
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

    void setElementos();
    void correr();
};

#endif // FABIRCA_H
