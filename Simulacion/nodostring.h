#ifndef NODOSTRING_H
#define NODOSTRING_H
#include <QApplication>



struct NodoString{

    QString nombre;
    int dato;
    int numRandom;
    NodoString* siguiente;	//next

    //constructores
    NodoString(){
        nombre = "";
        dato = 0;
        numRandom = 0;
        siguiente = NULL;
    }

    NodoString(QString nombre_){
        nombre = nombre_;
        dato = 0;
        siguiente = NULL;
    }

    NodoString(QString nombre_, NodoString* nodoSiguiente){
        nombre = nombre_;
        dato = 0;
        siguiente = nodoSiguiente;
    }
};

#endif // NODOSTRING_H
