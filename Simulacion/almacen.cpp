#include "almacen.h"

void Almacen::sustraerMateriales(){
    harina -= receta->harina;
    chocolate -= receta->chocolate;
    susCod++;
}
