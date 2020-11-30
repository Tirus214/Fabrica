#ifndef NODOCOLA_H
#define NODOCOLA_H
#include <QApplication>



struct NodoCola {
       int dato; // parte de datos
       NodoCola * siguiente;// puntero para enlazar nodos
       // constructor

       NodoCola(int d)
       {
                dato = d; // asigna los datos
                siguiente = NULL; // sig es null
       }

};

#endif // NODOCOLA_H
