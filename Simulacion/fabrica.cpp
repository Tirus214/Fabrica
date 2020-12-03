#include "fabrica.h"

void Fabrica::setElementos(){
    carrito->almacen = almacen;
    mezcladora1->carro = carrito;
    mezcladora2->carro = carrito;
    mezcladora3->carro = carrito;
    mezcladora1->mutex = mutex;
    mezcladora2->mutex = mutex;
    mezcladora3->mutex = mutex;
    banda1->mezcladora1 = mezcladora1;
    banda1->mezcladora2 = mezcladora2;
    banda2->mezcladora1 = mezcladora3;
    ensambladora->bandaChoc = banda2;
    ensambladora->bandaMez = banda1;
    banda3->ensambladora = ensambladora;
    horno->banda = banda3;
    banda4->horno = horno;
    supervisor1->banda = banda4;
    supervisor2->banda = banda4;
    empacadora->banda = banda4;
    empacadora->crearTransporte(almacenFinal);
}

void Fabrica::correr(){
    setElementos();
    carrito->start();
    mezcladora1->start();
    mezcladora2->start();
    mezcladora3->start();
    banda1->start();
    banda2->start();
    ensambladora->start();
    banda3->start();
    horno->start();
    banda4->start();
    supervisor1->start();
    supervisor2->start();
    empacadora->start();
    empacadora->startTransportes();
}

void Fabrica::pausar(){
    carrito->estado = !carrito->estado;
    mezcladora1->estado =!mezcladora1->estado;
    mezcladora2->estado = !mezcladora2->estado;
    mezcladora3->estado = !mezcladora3->estado;
    banda1->estado = !banda1->estado;
    banda2->estado = !banda2->estado;
    ensambladora->estado = !ensambladora->estado;
    banda3->estado = !banda3->estado;
    horno->estado = !horno->estado;
    banda4->estado = !banda4->estado;
    supervisor1->estado = !supervisor1->estado;
    supervisor2->estado = !supervisor2->estado;
    empacadora->estado = !empacadora->estado;
}

void Fabrica::detener(){
    carrito->running = false;
    mezcladora1->running = false;
    mezcladora2->running = false;
    mezcladora3->running = false;
    banda1->running = false;
    banda2->running = false;
    ensambladora->running = false;
    banda3->running = false;
    horno->running = false;
    banda4->running = false;
    supervisor1->running = false;
    supervisor2->running = false;
    empacadora->running = false;
    empacadora->stopTransportes();
}


