#include "nodocola.h"
#ifndef COLA_H
#define COLA_H


struct Cola {
       // solo con pN es suficiente
       NodoCola *frente; // ERROR sin ultimo nodo

       Cola()
       {
            frente = NULL;
       }

       // encabezados de funcion
       void encolar (int dato);
       NodoCola* desencolar (void);
       NodoCola* verFrente(void);
       bool vacia(void);
};
#endif // COLA_H
