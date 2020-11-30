#ifndef NODOSTRING_H
#define NODOSTRING_H
#include <QApplication>



struct NodoString{

    QString nombre;
    NodoString* siguiente;	//next

    //constructores
    NodoString(){
        nombre = "";
        siguiente = NULL;
    }

    NodoString(QString nombre_){
        nombre = nombre_;
        siguiente = NULL;
    }

    NodoString(QString nombre_, NodoString* nodoSiguiente){
        nombre = nombre_;
        siguiente = nodoSiguiente;
    }
};

#endif // NODOSTRING_H
