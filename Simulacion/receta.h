#ifndef RECETA_H
#define RECETA_H


struct Receta{
    int harina;
    int chocolate;

    Receta(){
        harina = 2;
        chocolate = 1;
    }

    Receta(int _harina, int _chocolate){
        harina = _harina;
        chocolate = _chocolate;
    }
};

#endif // RECETA_H
