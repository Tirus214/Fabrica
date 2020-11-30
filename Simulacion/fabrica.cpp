#include "fabrica.h"

void Fabirca::setElementos(){
    carrito->almacen = almacen;
    mezcladora1->carro = carrito;
    mezcladora2->carro = carrito;
    mezcladora3->carro = carrito;
    banda1->mezcladora1 = mezcladora1;
    banda1->mezcladora2 = mezcladora2;
    banda2->mezcladora1 = mezcladora3;
    horno->banda1 = banda1;
    horno->banda2 = banda2;
    banda3->horno = horno;
    supervisor1->banda = banda3;
    supervisor2->banda = banda3;
    banda3->empacadora = empacadora;

}

void Fabirca::correr(){
    setElementos();

}
