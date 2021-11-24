#ifndef PROVEEDORTRANSACCIONESPENDIENTES_H
#define PROVEEDORTRANSACCIONESPENDIENTES_H

#include <vector>
#include "Transaccion.h"

using namespace std;

class ProveedorTransaccionesPendientes {

    public:
    virtual vector<Transaccion> ObtenerTransaccionesPendientes(int idUsuario) = 0;

};

#endif
