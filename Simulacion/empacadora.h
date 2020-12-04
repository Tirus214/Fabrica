#ifndef EMPACADORA_H
#define EMPACADORA_H
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "listadoblecircular.h"
#include "planificador.h"
#include "listasimpletransporte.h"
#include "bandahe.h"



class Empacadora : public QThread{
public:
    Planificador * planificador;
    //Banda * banda;
    ListaSimpleTransporte * listaTransporte;
    NodoPaquete * nodoPaquete;
    int index;
    double velocidad;
    int galletas;
    bool running;
    BandaHE * banda;
    bool estado;

    Empacadora(){
        planificador = new Planificador();
        listaTransporte = new ListaSimpleTransporte();
        banda = new BandaHE;
        nodoPaquete = planificador->lista->primerNodo;
        index = 0;
        velocidad = 0.0;
        galletas = 0;
        running = true;
        estado = true;
    }

    void crearTransporte(AlmacenFinal * almacen){
        NodoString * tmp = planificador->listaNombres->primerNodo;
        while(tmp != NULL){
            listaTransporte->insertarAlFinal(tmp->nombre);
            listaTransporte->ultimoNodo->transporte->almacen = almacen;
            tmp = tmp->siguiente;
        }
    }
    
    void startTransportes(){
        NodoTransporte * tmp = listaTransporte->primerNodo;
        while(tmp != NULL){
            tmp->siguiente->transporte->start();
            tmp = tmp->siguiente;
        }
    }
    
    void stopTransportes(){
        NodoTransporte * tmp = listaTransporte->primerNodo;
        while(tmp != NULL){
            tmp->siguiente->transporte->running = false;
            tmp = tmp->siguiente;
        }
    }

    NodoTransporte * transporteActivo(){
        NodoTransporte * tmp = listaTransporte->primerNodo;
        while(!tmp->transporte->estado && tmp->transporte->cantMax != tmp->transporte->cantidad && tmp != NULL){
            tmp = tmp->siguiente;
        }
        if(tmp == NULL) return listaTransporte->primerNodo;
        return tmp;
    }

    void recoger(){
        galletas += banda->desencolar();
    }

    void ubicarPaquete(){
        for (int i=0; i < index; i++) { //ubica el nodoPaquete en el NodoPaquete actual de planificador
            nodoPaquete = nodoPaquete->siguiente;
        }
    }

    void montarTransporte(){    //monta el paquete echo al transporte
        NodoTransporte * tmp = listaTransporte->primerNodo;
        while(tmp != NULL){
            if(tmp->transporte->nombre == nodoPaquete->paquete->nombre){
                tmp->transporte->addPaquete(nodoPaquete->paquete);
                return;
            }
            tmp = tmp->siguiente;
        }
    }

    void empacar(){
        ubicarPaquete();
        nodoPaquete->paquete->galletasHechas += galletas;   //le agrega una galleta a ese paquete
        galletas--; //resta las galletas almacenadas;
        if(nodoPaquete->paquete->galletasHechas == nodoPaquete->paquete->cantidadGalletas){ //si el paquete se lleno incrementa el indice y lo agrega al transporte correspondiente
            index++;
            montarTransporte();
        }
    }

    void run(){
        while(running){
            sleep(velocidad/2);
            if(estado){
                recoger();
                empacar();
            }
            sleep(velocidad/2);
        }
    }

};

#endif // EMPACADORA_H
