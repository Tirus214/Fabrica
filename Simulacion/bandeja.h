#ifndef BANDEJA_H
#define BANDEJA_H


struct Bandeja{
    int cantMax;
    int cantMin;
    int cantidad;
    int velocidad;

    Bandeja(){
        cantMax = 0;
        cantMin = 0;
        cantidad = 0;
        velocidad = 0;
    }
};

#endif // BANDEJA_H
