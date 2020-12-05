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
    Transporte * transporte;
    NodoPaquete * nodoPaquete;
    int index;
    double velocidad;
    int galletas;
    bool running;
    BandaHE * banda;
    bool estado;
    // Agrego como atributo un int cantMax para el 'parametros.h'
    int cantMax;
    double velocitadTransporte;
    int maximoTrasnporte;

    Empacadora(){
        planificador = new Planificador();
        transporte = new Transporte();
        banda = new BandaHE;
        index = 0;
        velocidad = 0.0;
        galletas = 0;
        running = true;
        estado = true;
        // nuevo
        cantMax = 0;
        velocitadTransporte = 0.0;
        maximoTrasnporte = 0;
    }

    /*void putRandom(){
        int total = 100;
        NodoString * tmp = planificador->listaNombres->primerNodo;
        while(tmp != NULL){
            if(tmp->siguiente == NULL) tmp->numRandom = total;
            else{
                std::uniform_int_distribution<int> distribution(0, total);
                int probabilidad = distribution(*QRandomGenerator::global());
                tmp->numRandom = probabilidad;
                total -= probabilidad;
            }
            tmp = tmp->siguiente;
        }
        ListaSimpleString * nueva = planificador->listaNombres->acomodar();
        planificador->listaNombres = nueva;
    }*/
/*
    void crearTransporte(AlmacenFinal * almacen){
        NodoString * tmp = planificador->listaNombres->primerNodo;
        while(tmp != NULL){
            listaTransporte->insertarAlFinal(tmp->nombre);
            listaTransporte->ultimoNodo->transporte->almacen = almacen;
            listaTransporte->ultimoNodo->transporte->velocidad = velocitadTransporte;
            listaTransporte->ultimoNodo->transporte->cantMax = maximoTrasnporte;
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
*/
    void recoger(){
        galletas += banda->desencolar();
    }

    void ubicarPaquete(){
        for (int i=0; i < index; i++) { //ubica el nodoPaquete en el NodoPaquete actual de planificador
            nodoPaquete = nodoPaquete->siguiente;
        }
    }

    void montarTransporte(){    //monta el paquete echo al transporte
        transporte->addPaquete(nodoPaquete->paquete);
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

    // ==== setters ====
    void setVelocidad(double);
    void setMaximo(int);
    // =================

    void run(){
        nodoPaquete = planificador->lista->primerNodo;
        while(running){
            sleep(velocidad);
            if(estado){
                recoger();
                empacar();
            }
        }
    }

};

#endif // EMPACADORA_H
