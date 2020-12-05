#ifndef LISTASIMPLESTRING_H
#define LISTASIMPLESTRING_H
#include "nodostring.h"



struct ListaSimpleString{

    NodoString* primerNodo;	//first
    NodoString* ultimoNodo;	//last

    ListaSimpleString(){
        primerNodo = ultimoNodo = NULL;
    }

    //prototipo
    bool isEmpty();
    void insertarAlInicio(QString nombre);
    void insertarAlInicio(NodoString * nodo);
    int largo();
    bool esta(QString nombre);	//retorna si un elemento esta en la lista
    int sumatoria(); 		//retorna la sumatoria de los elementos de la lista
    void insertarAlFinal(QString nombre);
    void insertarAlFinal2(QString nombre);	//no utiliza ultimoNodo

    int apariciones(QString nombre);

    ListaSimpleString* invertida(void);

    NodoString* borrarAlInicio();
    NodoString* borrarAlFinal();
    void enlazarNodo (NodoString* _nodo);
    void insertarPosicion(int _pos, QString nombre);
    NodoString* borrarPos(int _pos);
    int numMayor(int a, int b);
    void insetarAcomodado(NodoString * nodo);
    ListaSimpleString * acomodar();
};

#endif // LISTASIMPLESTRING_H
