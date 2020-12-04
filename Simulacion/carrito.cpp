#include "carrito.h"

Carrito::Carrito() {
    cantMax = 0;
    cantMin = 0;
    velocidad = 0.0;
    almacen = new Almacen();
    running = true;
    peticion = 0;
    resultado = 0;
    estado = true;
    chocolate = true;
    harina = false;
    imprimir = false;
}

void Carrito::setAlmacen(Almacen * _almacen) {
    this->almacen = _almacen;
}

void Carrito::traerChocolate() {
    if (cantMax > peticion && peticion > cantMin){
        almacen->chocolate -= peticion;
    }
    else peticion = 0;
}

void Carrito::traerHarina(){
    if(cantMax > peticion && peticion > cantMin){
        almacen->harina -= peticion;
    }
    else peticion = 0;
}

void Carrito::putResultado(){
    resultado = peticion;
    peticion = 0;
}

// ======== SETTERS ===========

void Carrito::setVelocidad(double _velocidad) {
    this->velocidad = _velocidad;
}

void Carrito::setMaximo(int _maximo) {
    this->cantMax = _maximo;
}

void Carrito::setMinimo(int _minimo) {
    this->cantMin = _minimo;
}

// ============================

void Carrito::run(){
    while(running){
        sleep(velocidad);
        if(estado && resultado == 0){
            if(chocolate) traerChocolate();
            else if(harina) traerHarina();
        }
        putResultado();
        chocolate = false;
        harina = false;
    }
}
