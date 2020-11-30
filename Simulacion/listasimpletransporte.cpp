#include "listasimpletransporte.h"

bool ListaSimpleTransporte::isEmpty(){
    return primerNodo == NULL;
}



void ListaSimpleTransporte::insertarAlInicio(QString nombre){
    if (isEmpty()){
        primerNodo = ultimoNodo = new NodoTransporte(nombre);
    }
    else{
            //metodo1
        //Nodo* nuevo = new Nodo(_dato);
        //nuevo->siguiente = primerNodo;
        //primerNodo = nuevo;

            //metodo2
        //Nodo* nuevo = new Nodo(_dato, primerNodo);
        //primerNodo = nuevo;

            //metodo3
        primerNodo = new NodoTransporte(nombre, primerNodo);
    }
}




int ListaSimpleTransporte::largo(){
    int index = 0;
    NodoTransporte* tmp = primerNodo;

    while (tmp != NULL){
        index++;
        tmp = tmp->siguiente;
    }
    return index;
}


bool ListaSimpleTransporte::esta(QString nombre){
    NodoTransporte* tmp = primerNodo;

    while (tmp != NULL){
        if (tmp->transporte->nombre == nombre){
            return true;
        }
        tmp = tmp->siguiente;
    }
    return false;
}




void ListaSimpleTransporte::insertarAlFinal(QString nombre){

    if (primerNodo == NULL){

        primerNodo = ultimoNodo = new NodoTransporte(nombre);
    }

    else{

        ultimoNodo->siguiente = new NodoTransporte(nombre);
        ultimoNodo = ultimoNodo->siguiente;
    }
}



void ListaSimpleTransporte::insertarAlFinal2(QString nombre){

    if (primerNodo == NULL){
        primerNodo = ultimoNodo = new NodoTransporte(nombre);
    }

    else{

        NodoTransporte *tmp = primerNodo;

        while (tmp->siguiente != NULL){
            tmp = tmp->siguiente;
        }

        tmp->siguiente = new NodoTransporte(nombre);
        ultimoNodo = tmp->siguiente;
    }
}





NodoTransporte* ListaSimpleTransporte::borrarAlInicio(){
    if (primerNodo == NULL){
        return NULL;
    }
    else{
        NodoTransporte* tmp = primerNodo;
        primerNodo = primerNodo->siguiente;
        tmp->siguiente = NULL;

        if (primerNodo == NULL){
            ultimoNodo = primerNodo;
        }

        return tmp;
    }
}




NodoTransporte* ListaSimpleTransporte::borrarAlFinal(){
    if (primerNodo == NULL){
        return NULL;
    }
    else if(primerNodo == ultimoNodo){
        NodoTransporte* borrado = ultimoNodo;
        primerNodo = ultimoNodo = NULL;
        return borrado;
    }
    else{
        NodoTransporte* tmp = primerNodo;
        while(tmp->siguiente->siguiente != NULL){
            tmp = tmp->siguiente;
        }
        ultimoNodo = tmp;
        tmp = tmp->siguiente;
        ultimoNodo->siguiente = NULL;
        return tmp;
    }
}





void ListaSimpleTransporte::enlazarNodo(NodoTransporte* _nodo){
    if (_nodo != NULL){
        if (primerNodo == NULL){
            primerNodo = ultimoNodo = _nodo;
        }
        else{
            _nodo->siguiente = primerNodo;
            primerNodo = _nodo;
        }
    }
}




void ListaSimpleTransporte::insertarPosicion(int _pos, QString nombre){
    if(_pos <= 0){
        insertarAlInicio(nombre);
    }
    else if (_pos >= largo()){
        insertarAlFinal(nombre);
    }
    else{
        NodoTransporte* tmp = primerNodo;

        for(int i=1; i<_pos; i++){
            tmp = tmp->siguiente;
        }

        NodoTransporte* nuevo = new NodoTransporte(nombre);
        nuevo->siguiente = tmp->siguiente;
        tmp->siguiente = nuevo;
    }
}




NodoTransporte* ListaSimpleTransporte::borrarPos(int _pos){
    if(_pos <= 0){
        return borrarAlInicio();
    }
    else if (_pos >= largo()){
        return borrarAlFinal();
    }
    else{
        NodoTransporte* tmp = primerNodo;

        for(int i=1; i<_pos; i++){
            tmp = tmp->siguiente;
        }
        NodoTransporte* borrado = tmp->siguiente;
        tmp->siguiente = tmp->siguiente->siguiente;
        return borrado;
    }
}
