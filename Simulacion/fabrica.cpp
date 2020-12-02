#include "fabrica.h"

void Fabrica::setElementos(){
    carrito->almacen = almacen;
    mezcladora1->carro = carrito;
    mezcladora2->carro = carrito;
    mezcladora3->carro = carrito;
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

}
