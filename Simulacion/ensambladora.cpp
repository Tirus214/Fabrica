#include "ensambladora.h"

// ======== SETTERS ===========

void Ensambladora::setVelocidad(double _velocidad) {
    this->velocidad = _velocidad;
}

void Ensambladora::setMaximo(int _maximo) {
    this->cantMaxChoc = _maximo;
    this->cantMaxMez = _maximo;
    // Aqui me imagino que la cantidad maxima aplica para
    // las dos cantidades
}


// ============================
