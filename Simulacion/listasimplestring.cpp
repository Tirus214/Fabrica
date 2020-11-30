#include "listasimplestring.h"

bool ListaSimpleString::isEmpty(){
    return primerNodo == NULL;
}



void ListaSimpleString::insertarAlInicio(QString nombre){
    if (isEmpty()){
        primerNodo = ultimoNodo = new NodoString(nombre);
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
        primerNodo = new NodoString(nombre, primerNodo);
    }
}




int ListaSimpleString::largo(){
    int index = 0;
    NodoString* tmp = primerNodo;

    while (tmp != NULL){
        index++;
        tmp = tmp->siguiente;
    }
    return index;
}


bool ListaSimpleString::esta(QString nombre){
    NodoString* tmp = primerNodo;

    while (tmp != NULL){
        if (tmp->nombre == nombre){
            return true;
        }
        tmp = tmp->siguiente;
    }
    return false;
}




void ListaSimpleString::insertarAlFinal(QString nombre){

    if (primerNodo == NULL){

        primerNodo = ultimoNodo = new NodoString(nombre);
    }

    else{

        ultimoNodo->siguiente = new NodoString(nombre);
        ultimoNodo = ultimoNodo->siguiente;
    }
}



void ListaSimpleString::insertarAlFinal2(QString nombre){

    if (primerNodo == NULL){
        primerNodo = ultimoNodo = new NodoString(nombre);
    }

    else{

        NodoString *tmp = primerNodo;

        while (tmp->siguiente != NULL){
            tmp = tmp->siguiente;
        }

        tmp->siguiente = new NodoString(nombre);
        ultimoNodo = tmp->siguiente;
    }
}





NodoString* ListaSimpleString::borrarAlInicio(){
    if (primerNodo == NULL){
        return NULL;
    }
    else{
        NodoString* tmp = primerNodo;
        primerNodo = primerNodo->siguiente;
        tmp->siguiente = NULL;

        if (primerNodo == NULL){
            ultimoNodo = primerNodo;
        }

        return tmp;
    }
}




NodoString* ListaSimpleString::borrarAlFinal(){
    if (primerNodo == NULL){
        return NULL;
    }
    else if(primerNodo == ultimoNodo){
        NodoString* borrado = ultimoNodo;
        primerNodo = ultimoNodo = NULL;
        return borrado;
    }
    else{
        NodoString* tmp = primerNodo;
        while(tmp->siguiente->siguiente != NULL){
            tmp = tmp->siguiente;
        }
        ultimoNodo = tmp;
        tmp = tmp->siguiente;
        ultimoNodo->siguiente = NULL;
        return tmp;
    }
}





void ListaSimpleString::enlazarNodo(NodoString* _nodo){
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




void ListaSimpleString::insertarPosicion(int _pos, QString nombre){
    if(_pos <= 0){
        insertarAlInicio(nombre);
    }
    else if (_pos >= largo()){
        insertarAlFinal(nombre);
    }
    else{
        NodoString* tmp = primerNodo;

        for(int i=1; i<_pos; i++){
            tmp = tmp->siguiente;
        }

        NodoString* nuevo = new NodoString(nombre);
        nuevo->siguiente = tmp->siguiente;
        tmp->siguiente = nuevo;
    }
}




NodoString* ListaSimpleString::borrarPos(int _pos){
    if(_pos <= 0){
        return borrarAlInicio();
    }
    else if (_pos >= largo()){
        return borrarAlFinal();
    }
    else{
        NodoString* tmp = primerNodo;

        for(int i=1; i<_pos; i++){
            tmp = tmp->siguiente;
        }
        NodoString* borrado = tmp->siguiente;
        tmp->siguiente = tmp->siguiente->siguiente;
        return borrado;
    }
}
