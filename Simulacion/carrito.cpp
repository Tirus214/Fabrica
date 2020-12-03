#include "carrito.h"

Carrito::Carrito() {}

void Carrito::__init__(QLabel * _etiqueta) {
    cantMax = 100;
    cantMin = 10;
    velocidad = 10.0;
    almacen = new Almacen();
    running = true;
    peticion = 50;
    resultado = 0;
    estado = true;
    chocolate = true;
    harina = false;
    etiqueta = _etiqueta;
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
    if(cantMax < peticion && peticion < cantMin){
        almacen->harina -= peticion;
    }
    else peticion = 0;
}

void Carrito::putResultado(){
    resultado = peticion;
}

void Carrito::escribirEstado(){
    QString estadoStr = "indef";
    if (estado == true) {
        estadoStr = "On";
    } else if (estado == false) {
        estadoStr = "Off";
    }
    QString texto = QStringLiteral("Estado: %1\nPeticion: %2\nResultado: %3").arg(estadoStr).arg(peticion).arg(resultado);
    etiqueta->setText(texto);
}

void Carrito::run(){
    while(running){
        //sleep(velocidad/2*1000); // esto daria si le pongo 1 (como min) = 500 segundos
        sleep(2);
        if(estado && resultado == 0){
            if(chocolate) traerChocolate();
            else if(harina) traerHarina();
            //sleep(velocidad/2*1000);
            sleep(2);
        }
        putResultado();
        chocolate = false;
        harina = false;
    }
}
