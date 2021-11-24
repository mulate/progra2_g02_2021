#ifndef ProveedorTransaccionesPendientesPrueba_H
#define ProveedorTransaccionesPendientesPrueba_H

#include "./../src/ProveedorTransaccionesPendientes.h"
#include <vector>
#include "./../src/Transaccion.h"

using namespace std;

class ProveedorTransaccionesPendientesPrueba : public ProveedorTransaccionesPendientes {

    vector<Transaccion> transaccionesPrueba;

    public:
    ProveedorTransaccionesPendientesPrueba(vector<Transaccion> transaccionesPrueba) {
        this->transaccionesPrueba = transaccionesPrueba;
    }

    virtual vector<Transaccion> ObtenerTransaccionesPendientes(int idUsuario) {
        return transaccionesPrueba;
    }
};

#endif