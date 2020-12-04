#ifndef CARRITO_H
#define CARRITO_H
#include "almacen.h"
#include <QApplication>
#include <QtCore>
#include <QtDebug>
#include <QLabel>

class Carrito : public QThread {
public:
    // Atributos
    QString ingrediente; // Tipo de ingrediente (Chocolate / Harina)
    int cantMax;         // Maximo que puede transportar
    int cantMin;         // Minimo que puede transportar
    bool chocolate;      // Condicional (chocolate/harina)
    bool harina;         // Condicional (chocolate/harina)
    int peticion;        // Cant. de ingrediente que necesita la mezcladora
    double velocidad;    // Velocidad a la que opera el carrito (de almacen a mezcladora)
    bool running;        // Condicional (Thread)
    Almacen * almacen;   // Referencia al Almacen de materia prima
    int resultado;       // ?
    bool estado;         // Condicional (Thread) (On/Off) (Pause)
    bool imprimir;       // Condicional para empezar a imprimir o terminar (QLabel)
    // Constructor

    Carrito();

    // Metodos (prototipos)

    void setAlmacen(Almacen *);
    void traerChocolate();
    void traerHarina();
    void putResultado();
    // ==== setters ====
    void setVelocidad(double);
    void setMaximo(int);
    void setMinimo(int);
    // =================
    void run();
};

#endif // CARRITO_H
