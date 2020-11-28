#include "fabirca.h"

void Fabirca::setElementos(){
    carrito->almacen = almacen;
    mezcaldora1->carro = carrito;
    mezcaldora2->carro = carrito;
    mezcaldora3->carro = carrito;
    banda1->mezcladora1 = mezcaldora1;
    banda1->mezcladora2 = mezcaldora2;
    banda2->mezcladora1 = mezcaldora3;
    horno->banda1 = banda1;
    horno->banda2 = banda2;
    banda3->horno = horno;
}

void Fabirca::correr(){

}
