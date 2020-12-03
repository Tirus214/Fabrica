#ifndef ALMACEN_H
#define ALMACEN_H


struct Almacen {

    // Atributos
    int harina;
    int chocolate;

    // Constructores
    Almacen() {
        harina = 0;
        chocolate = 0;
    }

    // Metodos
    void sustraerMateriales(int cantHarina, int cantChocolate) {
        harina = harina - cantHarina;
        chocolate = chocolate - cantChocolate;
    }

};

#endif // ALMACEN_H
