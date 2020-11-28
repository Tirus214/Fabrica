#ifndef ALMACEN_H
#define ALMACEN_H
#include "receta.h"


struct Almacen{
    Receta* receta;
    int harina;
    int chocolate;
    int susCod; //Codigo para cada sustraccion de materiales

    Almacen(){
        harina = 0;
        chocolate = 0;
        susCod = 0;
    }

    void sustraerMateriales();

};

#endif // ALMACEN_H
