#ifndef HOLAMUNDO_H
#define HOLAMUNDO_H

#include <string>
#include "proveedorFormato.h"

using namespace std;

class HolaMundo {

    ProveedorFormato *proveedor;

    public:
    HolaMundo(ProveedorFormato *proveedor);

    string GenerarHolaMundo(string nombre);

};

#endif