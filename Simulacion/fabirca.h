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
    Planificador * planificador;
    Almacen * almacen;
    Carrito * carrito;
    Mezcladora * mezcaldora1;
    Mezcladora * mezcaldora2;
    Mezcladora * mezcaldora3;
    Banda * banda1;
    Banda * banda2;
    Horno * horno;
    Banda * banda3;
    Supervisor * supervisor1;
    Supervisor * supervisor2;
    Empacadora * empacadora;

    int totalGalletas;

    Fabirca(){
        planificador = new Planificador();
        almacen = new Almacen();
        carrito = new Carrito();
        mezcaldora1 = new Mezcladora();
        mezcaldora2 = new Mezcladora();
        mezcaldora3 = new Mezcladora();
        banda1 = new Banda();
        banda2 = new Banda();
        horno = new Horno();
        supervisor1 = new Supervisor();
        supervisor2 = new Supervisor();
        empacadora = new Empacadora();

        setElementos();
        totalGalletas = 0;
    }

    void setElementos();
    void correr();

};

#endif // FABIRCA_H
