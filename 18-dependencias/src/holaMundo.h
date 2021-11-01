#ifndef HOLAMUNDO_H
#define HOLAMUNDO_H

#include <string>
#include "proveedorFormatoHolaMundo.h"

using namespace std;

class HolaMundo {

    ProveedorFormatoHolaMundo *proveedor;

    public:
    HolaMundo(ProveedorFormatoHolaMundo *proveedor);

    string GenerarHolaMundo(string nombre);

};

#endif