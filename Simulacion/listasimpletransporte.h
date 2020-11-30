#ifndef LISTASIMPLETRANSPORTE_H
#define LISTASIMPLETRANSPORTE_H
#include "nodotransporte.h"



struct ListaSimpleTransporte{
    NodoTransporte* primerNodo;	//first
    NodoTransporte* ultimoNodo;	//last

    ListaSimpleTransporte(){
        primerNodo = ultimoNodo = NULL;
    }

    //prototipo
    bool isEmpty();
    void insertarAlInicio(QString nombre);
    int largo();
    bool esta(QString nombre);	//retorna si un elemento esta en la lista
    int sumatoria(); 		//retorna la sumatoria de los elementos de la lista
    void insertarAlFinal(QString nombre);
    void insertarAlFinal2(QString nombre);	//no utiliza ultimoNodo

    int apariciones(QString nombre);

    ListaSimpleTransporte* invertida(void);

    NodoTransporte* borrarAlInicio();
    NodoTransporte* borrarAlFinal();
    void enlazarNodo (NodoTransporte* _nodo);
    void insertarPosicion(int _pos, QString nombre);
    NodoTransporte* borrarPos(int _pos);
};

#endif // LISTASIMPLETRANSPORTE_H
