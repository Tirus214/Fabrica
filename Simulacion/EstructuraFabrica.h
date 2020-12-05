#ifndef ESTRUCTURAFABRICA_H
#define ESTRUCTURAFABRICA_H
#include "fabrica.h"


struct EstructuraFabrica{
    Fabrica * fabrica;

    EstructuraFabrica(){
        fabrica = new Fabrica();
    }

    void setFabrica(Fabrica * _fabrica){
        _fabrica = fabrica;
    }

    Fabrica * getFabrica(){
        return fabrica;
    }
};

#endif // ESTRUCTURAFABRICA_H
