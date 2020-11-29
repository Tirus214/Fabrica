#include "cola.h"

void Cola::encolar (int dato)
{
if (vacia())
         frente = new NodoCola (dato);
      else
      {
            // referencia al primero para recorrer la lista
            NodoCola* actual = frente;
            // recorre la lista hasta llegar al penultimo nodo
            while (actual->siguiente != NULL)
                          actual = actual->siguiente;

            // Crea nuevo nodo, lo apunta con uN
            NodoCola* nuevo = new NodoCola (dato);
            //le quita el enlace al que era ultimo
            actual->siguiente = nuevo;
        }
}

// funcion que elimina el primer elemento de las lista
// entradas: no tiene
// salidas: el puntero al primer nodo. Este puntero
// en siguiente apuntara a null. No se libera memoria

NodoCola* Cola::desencolar(void)
{
      // si no hay elementos, no borra nada, retorna null
      if (vacia())
      {
         return NULL;
      }
      else
      {
          // un puntero que apunta al nodo que se
          // "despegara" de la lista y se retorna
          NodoCola* borrado = frente;
          // pN se pasa al segundo de la lista
          // porque el primero se eliminara
          frente = frente->siguiente;
          // el nodo borrado, se debe despegar
          // entonces siguiente apunta a null y no
          // al segundo de la lista que ahora es pN
          borrado->siguiente = NULL;
          // aca se deberia liberar la memoria si no se
          // retornara el borrado
          return borrado;
      }
}

bool Cola::vacia (void)
{
     return frente == NULL;
}


NodoCola* Cola::verFrente()
{
      return frente;
}
