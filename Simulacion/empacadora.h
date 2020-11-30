#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include "listadoblecircular.h"
#include "planificador.h"
#include "banda.h"
#include "listasimpletransporte.h"
#ifndef EMPACADORA_H
#define EMPACADORA_H



class Empacadora : public QThread{
public:
    Planificador * planificador;
    Banda * banda;
    ListaSimpleTransporte * listaTransporte;
    NodoPaquete * nodoPaquete;
    int index;
    double velocidad;
    int galletas;
    bool running;

    Empacadora(){
        banda = new Banda();
        planificador = new Planificador();
        listaTransporte = new ListaSimpleTransporte();
        nodoPaquete = planificador->lista->primerNodo;
        index = 0;
        velocidad = 0.0;
        galletas = 0;
    }

    void crearTransporte(){
        NodoString * tmp = planificador->listaNombres->primerNodo;
        while(tmp != NULL){
            listaTransporte->insertarAlFinal(tmp->nombre);
            tmp = tmp->siguiente;
        }
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
            sleep(velocidad*1000);
            recoger();
            empacar();
        }
    }


};

#endif // EMPACADORA_H
